#include <stdio.h>
void main()
{
    int a[10],temp;
    printf("Enter Ten Numbers ::\n");
    for(int i=1;i<=10;i++)
    {
       if(i<10)
       {
        if(i==1)
        {
            printf(" %dst Number\t=  ",i);
            scanf("%d",&a[1]);
        }
         else if(i==2)
        {
            printf(" %dnd Number\t=  ",i);
            scanf("%d",&a[2]);
        }
         else if(i==3)
        {
            printf(" %drd Number\t=  ",i);
            scanf("%d",&a[3]);
        }
        else
        {
            printf(" %dth Number\t=  ",i);
            scanf("%d",&a[i]);
        }
       }
        else
        {
            printf("%dth Number\t=  ",i);
            scanf("%d",&a[i]);
        }
       }
       printf("\nOUTPUT ::\nAfter Sorting ::\n");
       for(int i=10;i>=1;i--)
       {
           for(int j=1;j<i;j++)
           {
               if(a[j]>a[j+1])
               {
                   a[j]=a[j]+a[j+1];
                   a[j+1]=a[j]-a[j+1];
                   a[j]=a[j]-a[j+1];
               }
           }
       }
       printf("\nAscending Order ::\n");
       for(int i=1;i<=10;i++)
        printf("%d ",a[i]);
        for(int i=10;i>=1;i--)
       {
           for(int j=1;j<i;j++)
           {
               if(a[j]<a[j+1])
               {
                   a[j]=a[j]+a[j+1];
                   a[j+1]=a[j]-a[j+1];
                   a[j]=a[j]-a[j+1];
               }
           }
       }
       printf("\n\nDescending Order ::\n");
       for(int i=1;i<=10;i++)
        printf("%d ",a[i]);
    getch();
}




