
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWord(char *start, char *end)
{
    while(start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main()
{
    FILE *fp;
    char ch, word[100];
    int index = 0;

    fp = fopen("Demo.txt", "r");

    if(fp == NULL)
    {
        printf("Error: Could not open Demo.txt\n");
        return 1;
    }

    printf("Reversed Words Output:\n");

    while((ch = fgetc(fp)) != EOF)
    {
        if(!isspace(ch))
        {
            word[index++] = ch;
        } else {
            if(index > 0)
            {
                word[index] = '\0';
                reverseWord(word, word + strlen(word) - 1);
                printf("%s", word);
                index = 0;
            }
            printf("%c", ch);
        }
    }


    if(index > 0)
    {
        word[index] = '\0';
        reverseWord(word, word + strlen(word) - 1);
        printf("%s", word);
    }
    fclose(fp);
    printf("\n\nEditor: Srujantee vala \n");
    printf("ID : 25CE132\n");
    return 0;
}
