#include<stdio.h>
int main ()
{
    int choice ,bill,no,ans;
    printf("manu:\n press 1 for burger\n press 2 for pizza\n press 3 for pasta \n press 4 for sandwich \n press 5 for french fries \n");

    label1:
    printf("Enter your choice : \n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("number of burger :");
        scanf("%d",&no);
        bill += 150*no;
        break;

        case 2:
        printf("number of pizza :");
        scanf("%d",&no);
        bill += 200*no;
        break;

        case 3:
        printf("number of pasta :");
        scanf("%d",&no);
        bill += 120*no;
        break;

        case 4:
        printf("number of sandwich :");
        scanf("%d",&no);
        bill += 100*no;
        break;

        case 5:
        printf("number of french fries :");
        scanf("%d",&no);
        bill += 80*no;
        break;

        default:
            printf("invalid choice");
            goto label1;
            break;
    }

        label2 :
        printf("\n\n1press 1 for add another item \n2 press 2 for billing \n Enter your choice ");
        scanf("%d",&ans);

        switch(ans)
        {
        case 1:
            goto label1;
            break;
        case 2:
            printf("bill= %d",bill);
            break;
        default :
            printf("invalid input");
            goto label2;
            break;

        }
         return 0;


}
