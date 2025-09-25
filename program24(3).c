#include<stdio.h>
int main()
{
    char P[16],Q[16],I[33];
    int i,j;

    printf("Enter the note:");
    scnaf("%s",P);

    printf("Enter the note:");
    scanf("%s",Q);

    for(i=0;P[i]!='\0';i++)
    {
        I[i]=P[i];

    }
    for(j=0;Q[j]!='\0';j++)
    {
        I[i]=Q[j];
        i++;
    }
    I[i]='\0';
    printf("Concatenate the note is:%s",I);

    return 0;
}
