#include <stdio.h>
void red () {
  printf("\033[1;31m");
}

void main()
{
    int m,n;
    printf("Enter how many Numbers you want to store ::\n");
    scanf("%d",&n);
    if(n>0)
    {
    printf("Enter %d Numbers ::\n",n);
    int a[n];
    for(int i=1;i<=n;i++)
    {
       if(i<n)
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
            printf(" %dth Number\t=  ",i);
            scanf("%d",&a[i]);
        }
       }
       int min=a[1],min2=a[1];
       for(int i=1;i<=n;i++)
       {
           if(a[i]<min)
            min=a[i];
       }
       for(int i=1;i<=n;i++)
       {
           if(a[i]<min2&&a[i]>min)
            min2=a[i];
       }
       printf("\nOUTPUT ::\nAmong the Given Numbers :: ");
       for(int i=1;i<=n;i++)
       {
           printf("%d, ",a[i]);

       }
       printf("the Second Smallest Number is %d",min2);
    }
    else
    {
         red();
        printf("ERROR!!! Limit should be Greater than 0");
        exit(0);
    }
    getch();
}
