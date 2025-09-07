#include<stdio.h>
int main ()
{
    float height , weight , bmi ;
    printf("Enter your height in meter : ");
    scanf("%f",&height);
    printf("Enter your weight in kilogram : ");
    scanf("%f",&weight);
    if (height<=0 || weight<=0)
    {
        printf("Invalid input");
    }
    else
    {
        bmi = weight/(height*height);
        printf("\nbmi %f",bmi);
        if (bmi<18.5)
        {
            printf("\nyou are very under weight");
        }
        else if(bmi>=18.5 && bmi<=25)
        {
            printf("\nyour weight is normal ");
        }
        else
        {
            printf("\nyou are very over weight");
        }
    }
}
