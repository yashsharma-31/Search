#include<stdio.h>
#include<conio.h>
void main()
{
    int a[20][20],b[20][20],c[20][20],k,m,n,i,j,p,q;
    printf("Enter the row and column of first matrix\n");
    scanf("%d%d",&m,&n);
    printf("Enter the row and column of second matrix\n");
    scanf("%d%d",&p,&q);
    if(n!=p)
    printf("Multiplication is not possible\n");
    else
    {
        printf("Enter the elements of first matrix\n");
        for(i=0;i<m;i++)
        {
           for(j=0;j<n;j++)
           scanf("%d",&a[i][j]);
        }    
        printf("Enter the elements of Second matrix\n");
        for(i=0;i<p;i++)
        {
           for(j=0;j<q;j++)
           scanf("%d",&b[i][j]);
        } 
        for(i=0;i<m;i++)
        {
           for(j=0;j<q;j++)
           {
               c[i][j]=0;
               {
                   for(k=0;k<n;k++)
                   c[i][j]=c[i][j]+a[i][k]*b[k][j];
               }
           }
        }       
        printf("Multiplication of matrix\n");
        for(i=0;i<m;i++)
        {
           for(j=0;j<q;j++)
           printf("%d\t",c[i][j]);
           printf("\n");
        } 
    }
    getch();
}
