#include <stdio.h>
#include <stdlib.h>

int main() {
    char *summary;
    int initial_size, new_size;

    printf("Enter initial memory size for summary: ");
    scanf("%d", &initial_size);
    getchar();

    summary = (char *)calloc(initial_size, sizeof(char));
    if (summary == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter the initial article summary: ");
    fgets(summary, initial_size, stdin);

    printf("\nInitial Summary: %s\n", summary);

    printf("\nEnter new size to expand the summary: ");
    scanf("%d", &new_size);
    getchar();

    summary = (char *)realloc(summary, new_size * sizeof(char));
    if (summary == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    printf("Enter the expanded article summary: ");
    fgets(summary, new_size, stdin);

    printf("\nUpdated Summary: %s\n", summary);

    free(summary);

printf("\n\nName: Srujantee Vala\n");
printf("ID : 25CE132\n");
    return 0;
}
