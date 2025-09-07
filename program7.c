#include<stdio.h>
int main ()
{
    int age ;
    printf("Enter your age : ");
    scanf("%d",&age);
    if (age >=0 && age <=100)
    {
    age >= 12 ? printf("you have to pay fees ") : printf("you have free entry");
    return 0 ;
    }
    else
    {
        printf("invalid input");
    }
}
