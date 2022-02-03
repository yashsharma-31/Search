#include<stdio.h>
#include<conio.h>
void main()
{
    int a[20][20],b[20][20],m,n,i,j,f=1;
    printf("Enter the row and column of matrix\n");
    scanf("%d%d",&m,&n);
    printf("Emter the elements of matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        b[j][i]=a[i][j];
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        if(b[i][j]!=a[i][j])
        f=0;
        }
    }
    if(f==1)
    printf("Symmetric");
    else
    printf("Not Symmetric");
    getch();
}