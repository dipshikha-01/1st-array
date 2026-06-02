#include<stdio.h>
int main()
{
    int n, i, j;
    printf("enter order of square matrix:");
    scanf("%d",&n);

    int a[n][n] ;
    printf("enter matrix elements : \n");
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Diagonal matrix :\n");

    for(i = 0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            if(i==j)
            {
                printf("%d",a[i][j]);
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}