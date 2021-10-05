#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i, j;
    printf("Enter A Row : ");
    scanf("%d",&n);

    printf("\n");

    for (i = 0; i < n; i++)
    {    
        for (j = 0; j < n; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }

    getch();
}
