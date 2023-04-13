#include <iostream>
using namespace std;

//1
class Image {
    private:
    int height, width;
    public:
    void setHeightAndWidth(int h = 0, int w = 0) {
        height = h;
        width = w;
    }
    int getHeight() {
        return height;
    }
    int getWidth() {
        return width;
    }
    //use 2nd-level pointer to create a unstable 2 dimensional array (mang dong 2)
    unsigned char **image = new unsigned char*[width*8];
    //2nd-level pointer '**image' points to width*8 1st-level pointers '*image'(or array image[width*8] ) 
};

//2
float aveLightIntense(Image& I, int _h, int _w){
    float totalLightIntense = 0;
    for(int i = 0; i < _w*8; i++) {
        for(int j = 0; j < _h*8; j++) {
            totalLightIntense += I.image[i][j];
        }
    }
    totalLightIntense /= _h*_w*8*8;
    return totalLightIntense;
}

//3
void binaryImageConvert(Image& I, int _h, int _w) {
    int mark;
    cout << "Input light threshold: ";
    cin >> mark;
    for(int i = 0; i < _w*8; i++) {
        for(int j = 0; j < _h*8; j++) {
            int imageValue;
            if(I.image[i][j]>=mark){
                I.image[i][j] = 1;
            }
            else {
                I.image[i][j] = 0;
            }
            imageValue = I.image[i][j];
            cout << imageValue;
            if(j==(_h*8)-1){
                cout <<endl;
            }
        }
    }
}


//4
void structureTransform(Image& I, int _h, int _w) {
    int x0, y0, N;
    cout <<"Input x0: ";
    cin >>x0;
    cout <<"Input y0: ";
    cin >>y0;
    cout <<"Input square length: ";
    cin >>N;
    if(N%2==0) {
        cout <<  "Error"<<endl;
    }
    else {
        for(int i = 0 ; i < N ; i ++){
            I.image[x0 -((N-1)/2)+i][y0-((N-1)/2)] = 255;
        }
        for(int i = 0 ; i < N ; i ++){
            I.image[x0 -((N-1)/2)+i][y0+((N-1)/2)] = 255;
        }
        for(int i = 0 ; i < N ; i ++){
            I.image[x0 -((N-1)/2)][y0-((N-1)/2)+i] = 255;
        }
        for(int i = 0 ; i < N ; i ++){
            I.image[x0 +((N-1)/2)][y0-((N-1)/2)+i] = 255;
        }
    }
    for(int i = 0; i < _w*8; i++) {
        for(int j = 0; j < _h*8; j++) {
        cout << I.image[i][j];
        if(j==_h*8-1){
            cout <<endl;
        }
        }
    }

}



//5

void imageValue(Image& I, int _h, int _w) {
    int x;
    for(int i = 0; i < _w*8; i++) {
        for(int j = 0; j < _h*8; j++) {
            x = I.image[i][j];
            cout << x <<"\t";
            if (j==(_h*8)-1) {
                cout <<endl;
            }
        }
    }
}


//6
int main() {
    int _h, _w;
    cout << "Input height and width: ";
    cin >>_h>> _w;
    Image I;
    I.setHeightAndWidth(_h, _w);
    //creates _w*8 one dimensional arrays, each array contains _h*8
    for(int i = 0; i < _w*8; i++) {
        I.image[i] = new unsigned char[_h*8];
    }
    for(int i = 0; i < _w*8; i++) {
        for(int j = 0; j < _h*8; j++) {
            cout << "Pixel[" <<i<<"]["<<j<<"]= ";
            cin >> I.image[i][j];
        }
    }
    cout << "Average Light Intensity: "<< aveLightIntense(I, _h, _w) << endl;
    cout << "Convert the image into binary: "<<endl;
    binaryImageConvert(I, _h, _w);
    cout << "Trasnform the image structure"<<endl;
    structureTransform(I, _h, _w);
    cout <<endl<<"Print the valuables of the image pixels: "<<endl;
    imageValue(I, _h, _w);
    return 0;
}


//define 2D arrays in class (?)
//when a function returns object, how to call that object?