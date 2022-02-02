#include<stdio.h>
#include<conio.h>
void main()
{
    int a[20],n,i,j,c;
    printf("Enter No. of elements\n");
    scanf("%d",&n);
    printf("Enter Numbers\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
    }
    printf("\nSorted Array\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    getch();
}