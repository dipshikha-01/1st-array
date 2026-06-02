#include<stdio.h>
int main()
{
    int n , i ,j=0 ;
    printf("enter the size of the array : ");
    scanf("%d",&n);

    int arr[n] , odd[n];
    printf("enter the elements of the array..");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0 ; i<n ; i++)
    {
        if(i%2 !=0)
        {
            odd[j] = arr[i] ;
            j++ ;
        }
    }

    printf("odd element are : \n");

    for(i=0 ; i<j ; i++)
    {
        printf("%d",odd[i]);
    }
return 0;
}