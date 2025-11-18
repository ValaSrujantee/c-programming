#include<stdio.h>
int main ()
{
    printf("\nName:Srujantee Vala\n");
    printf("ID:25CE132\n\n");

    char Notes[15],reverse[15];
    printf("Enter the Notes :");
    gets(Notes);
    int length=0;
    for(int i=0;Notes[i]!='\0';i++)
    {
        length++;
    }
    printf("The total length of a string is : %d\n",length);
    int i,j;
    for(i=length-1,j=0;i>=0;i--,j++)
    {
        reverse[j]=Notes[i];
    }
    reverse[j]='\0';

    printf("The reverse string is :");
    puts(reverse);

}
