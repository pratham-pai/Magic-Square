//C program for magic squares
#include<stdio.h>
#include<conio.h>
#define n 5 //Change values here, only odd numbers
int main()
{
    int arr[n][n]={0};
    int row=0,col=n,i,j;
    col--;
    col/=2;
    arr[row][col]=1;
    for(i=2;i<=n*n;i++)
    {
        if(row==0 && col==n-1)
            row++;
        else if(row==0 && col<n-1)
        {
            col++;
            row=n-1;
        }
        else if(col==n-1 && row!=0)
        {
            row--;
            col=0;
        }
        else if((row!=0 && col!=n-1) && (arr[row-1][col+1]>0))
            row++;
        else
        {
            row--;
            col++;
        }
        arr[row][col]=i;
    }
    printf("The %dx%d magic square is\n\n",n,n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d\t",arr[i][j]);
        printf("\n\n");
    }
    getch();
    return 0;
}
