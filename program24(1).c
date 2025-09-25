#include<stdio.h>
int main()
{
    char n[75];
    int L,i;

    printf("Enter the note:");
    gets(n);
    for(i=0;n[i]!='\0';i++)
    {
        L++;
    }
    printf("The Length of your note is: %d", L);
    return 0;
}
