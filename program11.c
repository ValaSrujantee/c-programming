#include<stdio.h>
int main ()
{
    float marks ;
    if (marks>=0 && marks <=100)
    {
        printf("Enter your marks : ");
        scanf("%f", &marks);
        if (marks>=90)
        {
            printf("you get A grade");
        }
        else if (marks>=80)
        {
            printf("you get B grade");
        }
        else if ( marks >=70)
        {
            printf("you get C grade");
        }
        else if ( marks >=60)
        {
            printf("you get D grade");
        }
        else
        {
            printf("you are fail ");
        }
        return 0 ;
    }
}
