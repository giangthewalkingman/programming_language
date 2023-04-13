#include <stdio.h>
int main()
{
    /*phab tu 10 - 100. nhap vao so nguyen k <n, hien thi k phan tu lon nhat*/
    int n = 0,i,j,k;
    double A[100],max;
    printf("So phan tu cua mang A la = ");
    scanf("%d",&n);
    if ((n>=10)&&(n<=100))
    {
        for (i=0;i<n;i++)
        {
            printf("A[%d] = ", i); scanf("%lf",&A[i]);
        }
        printf("Nhap so k ="); scanf("%d",&k);
        
        for(i=0;i<n;i++)
        {
		    for(j=i+1;j<n;j++)
            {
			    if(A[i]>=A[j])
                {
				    max = A[i];
				    A[i] = A[j];
				    A[j] = max;
			    }
		}
		}
	    printf("%d phan tu lon nhat la:\n",k);
	    for(i=n-k;i<n;i++)
        {
		    printf("%lf\n",A[i]);
	    }	
    }
}