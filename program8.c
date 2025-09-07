#include<stdio.h>
int main ()
{
    int age ;
    printf("Enter your age :");
    scanf("%d",&age);
    if (age <0 || age >100 )
    {
        printf("invalid input");
    }
    else if (age <18)
             {
                 printf("you are not eligible for saving account ");
             }
         else
            {
                 printf("you are eligble for saving account ");
            }
}
