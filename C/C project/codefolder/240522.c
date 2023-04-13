#include <math.h>
#include <stdio.h>
int main(){
    int thang;
    printf("\n Nhap vao thang trong nam");
    scanf("%d",&thang);
    swtich(thang); {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:    printf("\n Thang %d co 31 ngay \n",thang);
                    break;
        case 4:
        case 6:
        case 9:
        case 11:    printf("\n Thang %d co 30 ngay \n",thang);
                    break;
        case 2:     printf("\n Thang %d co 28 hoac 29 ngay",thang);
                    break;
        default:    printf("\n Khong co thang %d \n", thang);
                    break;
    }
    return 0;
}