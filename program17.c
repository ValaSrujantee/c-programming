#include<stdio.h>
#include<windows.h>
int main ()
{
    float i=0.5,distance;
    label1:
    printf("enter the distance :");
    scanf("%f",&distance);
    if (distance<0)
    {
        printf("invalid input");
        goto label1 ;
    }
    else
    {
        while (distance>=0)
        {
            Sleep(1000);
            printf("minute\n %.f : distance covererd = %.1f km ",(i*2),i);
            if(i<distance)
                i+=0.5f;
            else
                break;
        }
    }
    printf("matathon competed !");
}
