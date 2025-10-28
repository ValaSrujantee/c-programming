#include<stdio.h>
int fibo(int n)
{
if(n==1)
    return 1;
if(n==2)
    return 1;
else
    return fibo(n-1)+fibo(n-2);
}


int main ()
{
    int n ;
    printf("Enter the number of months :");
    scanf("%d",&n);
    fibo(n);
    printf("%d",fibo(n));
    return 0;
}

