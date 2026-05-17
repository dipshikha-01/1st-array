#include<stdio.h>
int add(int a , int b);
void main()
{
    int n1, n2, sum;
    printf("enter two numbers:");
    scanf("%d%d",&n1 ,&n2);
    sum=add(n1 ,n2);
    printf("sum = %d",sum);
}

int add(int a , int b)
{
    int result;
    result=a+b;
    return result;
}