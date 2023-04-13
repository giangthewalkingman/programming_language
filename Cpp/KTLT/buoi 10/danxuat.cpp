#include <iostream>
using namespace std;
class GeometricObject {
    char color[];
    bool filled;
    public:
    GeomertricObject();
    GeometricObbject(char cor[], bool filled);
    void setColor(char cor[]) {
        color[] = cor[];
    }
    int getColor() {
        return color;
    }
    int isFilled() {
        return filled;
    }
    void setFilled();
    void printf();


}