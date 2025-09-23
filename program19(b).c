#include<stdio.h>
int main ()
{
    int n=5 ;
    for (int i=1 ; i<=n ; i++ )
    {
        for (int j=1 ; j<=n*2-1 ; j++)
        {
            if (i==j || j ==(2*n-i))
            {
                printf("%d",j);
            }
            else if (i==1)
            {
                printf("%d",j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
