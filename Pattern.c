#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int i, j, k, m, n, x;
    printf("Enter A Row : ");
    scanf("%d",&n);
    k = n;
    m = n + (n-1);

    printf("\n");

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(i <= n-1)
            {        
                if(i==0)
                {
                    printf("%d ",k);
                }
                else if(i >= 1)
                {
                    if(j < i)
                    {
                        printf("%d ",k-j);
                    }
                    else if(j >= i && j < m-i)
                    {
                        printf("%d ",k-i);
                    }
                    else 
                    {
                        printf("%d ",(j-k+1)+1);
                    }
                }
            }
            else if(i==n-1)
            {
                if(j < n)
                {
                    printf("%d ",k-j);
                }
                else
                {
                    printf("%d ",(j-k+1)+1);
                }
            }
            else if(i >= n)
            {
                x = m - i - 1;
                if(i==m)
                {
                    printf("%d ",k);
                }
                if(j < x)
                {
                    printf("%d ",k-j);
                }
                else if(j >= x && j < m-x)
                {
                    printf("%d ",k-x);
                }
                else 
                {
                    printf("%d ",(j-k+1)+1);
                }    
            }
        }
        printf("\n");
    }

    getch();
}