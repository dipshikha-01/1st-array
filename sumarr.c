#include<stdio.h>
int main()
{
    int n , i ;
    printf("enter size of array :");
    scanf("%d",&n);

    int arr[n];

    printf("enter array elements :");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    int sum =0;
    long long product =1 ;
    for(i = 0 ; i<n ;i++)
    {
        if(i%2 == 0)
        {
          product *= arr[i];
        }
        else
        {
         sum += arr[i];
        }
    }

    printf("sum of elements at odd indices = %d\n",sum);
    printf("product of element at even indices = %d\n",product);

    return 0;

}