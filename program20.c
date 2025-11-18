#include <stdio.h>
int main()
{
    printf("\nName:Srujantee Vala\n");
    printf("ID:25CE132\n\n");

    int N, i, id, sum = 0, esum;

    printf("Enter the total number of ID: ");
    scanf("%d", &N);

    printf("Enter %d IDs :\n", N - 1);
    for (i = 0; i < N - 1; i++)
    {
        scanf("%d", &id);
        sum += id;
    }
    esum = N * (N + 1) / 2;
    int missingID = esum - sum;
    printf("The missing ID is: %d\n", missingID);
    return 0;
}
