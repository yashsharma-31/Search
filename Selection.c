#include<stdio.h>
#include<conio.h>
void main()
{
    int a[20],i,j,m,n,k;
    printf("Enter No. of elements\n");
    scanf("%d",&n);
    printf("Enter Numbers\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        m=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[m])
            {
                m=j;
            }
        }
        if(m!=i)
        {
            k=a[m];
            a[m]=a[i];
            a[i]=k;
        }
    }
     printf("\nSorted Array\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    getch();
}