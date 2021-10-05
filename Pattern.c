#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i, j, k;
    printf("Enter A Row : ");
    scanf("%d",&n);

    int Spaces = n-1;
    int Stars = 1;

    printf("\n");

    for (i = 1; i <= n; i++)
    {        
        for (j = 1; j <= Spaces; j++)
        {
            printf(" ");
        }
        
        for (k = 1; k <= Stars; k++)
        {
            printf("*");
        }

        if (Spaces > i)
        {
            Spaces = Spaces - 1;
            Stars = Stars + 2;
        }

        if (Spaces < i)
        {
            Spaces = Spaces + 1;
            Stars = Stars - 2;
        }
        
        printf("\n");
    }

    getch();
}
