#include <stdio.h>
int main()
{
    int i = 2, snt;
    scanf("%d", &snt);
    if (snt < 2)
    {
        printf("Khong phai so nguyen to");
        return 0;
    }
    for (i = 2; i < snt; i++)
    {
        if (snt % i == 0)
        {
            printf("Khong phai so nguyen to");
            return 0;
        }
        printf("La so nguyen to");
    }
}