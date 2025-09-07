#include<stdio.h>
int main ()
{
    float total_amount , discount_amount , final_amount ;
    printf("enter your total amount :");
    scanf("%f",&total_amount);
    if (total_amount <1000)
    {
        printf("you can not able to get any discount ");
    }
    else if(total_amount>=1000 && total_amount <=5000)
    {
        discount_amount = (total_amount * 10)/100;
        final_amount = total_amount-discount_amount;
        printf("%f",final_amount);
    }
    else
    {
        discount_amount = (total_amount * 20)/100;
        final_amount = total_amount-discount_amount;
        printf("%f",final_amount);
    }
}
