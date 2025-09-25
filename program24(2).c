#include<stdio.h>
int main()
{
    char B[75],S[75];
    int i,a,L=0;

    printf("Enter the note:");
    scanf("%s", &B);

    for(i=0;B[i]!='\0';i++)
    {
        L++;
    }
    for(i=0;B[i]!='\0';i++)
    {
        a=L-i-1;
        S[a]=B[i];
    }
    B[L]='\0';
    printf("%s", &S);
}
