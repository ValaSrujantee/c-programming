#include<stdio.h>

void main()
{
    int n, i;
    float a[20], *p, temp;
    p = a;
    printf("Enter the number of items: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("Enter the price of the item %d: ", i+1);
        scanf("%f", p+i);
    }
    printf("\n");

    for(i=0; i<n-1; i++)
    {
        if(*(p+i) > *(p+i+1))
        {
            temp = *(p+i);
            *(p+i) = *(p+i+1);
            *(p+i+1) = temp;
        }
    }

    printf("Prices sorted in ascending order:\n\n");
    for(i=0; i<n; i++)
    {
        printf("%.2f\n", *(p+i));
    }
    printf("\n\n\n");

printf("\n\nName : Srujantee vala \n");
printf("ID : 25CE132 \n");
}
