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
       int max=a[1],max2=a[1];
       for(int i=1;i<=n;i++)
       {
           if(a[i]>max)
            max=a[i];
       }
       for(int i=1;i<=n;i++)
       {
           if(a[i]==max)
            continue;
           else if(a[i]>max2)
            max2=a[i];
       }
       printf("\nOUTPUT ::\nAmong the Given Numbers :: ");
       for(int i=1;i<=n;i++)
       {
           printf("%d, ",a[i]);

       }
       printf("the Second Greatest Number is %d",max2);
    }
    else
    {
         red();
        printf("ERROR!!! Limit should be Greater than 0");
        exit(0);
    }
    getch();
}


