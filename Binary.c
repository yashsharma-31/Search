#include<stdio.h>
#include<conio.h>
void main()
{
    int a[20],l,e,m,s,f=0,i,n;
    printf("NOTE:- ENTER THE VALUES IN INCREASING ORDER\n");
    printf("Enter No. of elements\n");
    scanf("%d",&n);
    printf("Enter Values\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter No. you want to search\n");
    scanf("%d",&s);
    l=0;
    e=n-1;
    m=(l+e)/2;
    for(i=0;i<n;i++)
    {
        if(s==a[m])
        {
         f=1;
         printf("%d found at %d location\n",s,m+1);
         break;
        }
        else if(s>a[m])
        l=m+1;
        else
        e=m-1;
        m=(l+e)/2;
    }
    if(f==0)
    printf("%d not found",s);
    getch();
}