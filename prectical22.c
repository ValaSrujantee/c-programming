#include<stdio.h>
int main()
{
    int i,j,rows,cols,reserve_seat,seat;
    char arr[5][10];
    for (i=0;i<5;i++)
    {
        for(j=0;j<10;j++)
        {
            arr[i][j]='0';
            printf("%2c",arr[i][j]);
        }
        printf("\n");
    }
    printf("This is the seating arrangement in theatre.\n");
    printf("the seating arrangement is in 5 rows and 10 cols\n");
    printf("Enter the number of reserved seat :");
    scanf("%d",&reserve_seat);
    for(int i=1;i<=reserve_seat;i++)
    {
        printf("Enter rows and seat number for reserved seat %d(e.g,2 5):",i);
        scanf("%d %d",&rows,&cols);
        if(rows>0&&rows<=5&&cols>0&&cols<=10)
        {
            arr[rows-1][cols-1]='x';
        }
        else
        {
            printf("Invalid rows or seat number. pleas enter valid input with in range.\n");
            i--;
        }
    }
        printf("\nseating chart :\n");
        for(i=0; i<5;i++)
        {
          printf("Row %d : ",i+1);
          for (j=0;j<10;j++)
          {
             printf("%2c",arr[i][j]);
          }
        printf("\n");
        }
    return 0;
}
