#include<stdio.h>
#include<windows.h>
int main ()
{
    int seconds ;
    label1:
    printf("Enter the seconds for countdown time :");
    scanf("%d",&seconds);
    if(seconds<0)
    {
        printf("Invalid input ");
        goto label1;
    }
    else
    {
        while (seconds>=0)
        {
            printf("time:%d\n",seconds);
            Sleep (1000);
            seconds--;
        }
    }
    printf("countdown completed");
    return 0 ;

}
