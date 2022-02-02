#include<stdio.h>
#include<conio.h>
void main()
{
    int a[20],i,j,k,n;
    printf("Enter No. of elements\n");
    scanf("%d",&n);
    printf("Enter Numbers\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(j=1;j<n;j++)
     {
      k=a[j];
      i=j-1;
      while(i>=0&&a[i]>k)
        {
         a[i+1]=a[i];
         i=i-1;
        }
      a[i+1]=k;    
     }
    printf("\nSorted Array\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    getch();
}