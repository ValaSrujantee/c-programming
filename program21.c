#include<stdio.h>
int main()
{
    printf("\nName:Srujantee Vala\n");
    printf("ID:25CE132\n");

    int cp=0,cn=0,ce=0,co=0,i;
    int array[5];
     printf("Enter 5 number : \n");

    for (i=0;i<5;i++)
    {
        scanf("%d",&array[i]);

        if (array[i]>=0)
        {
            cp++;
        }
        else
        {
            cn++;
        }
        if(array[i]%2==0)
        {
            ce++;
        }
        else
        {
            co++;
        }

    }
        printf("Total positive numbers are = %d\n",cp);
        printf("Total nagetive numbers are = %d\n",cn);
        printf("Total even numbers are = %d\n",ce);
        printf("Total odd numbers are = %d\n",co);
}
