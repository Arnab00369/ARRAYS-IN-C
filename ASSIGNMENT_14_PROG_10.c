#include <stdio.h>
#define AC_BLACK "\x1b[30m"
#define AC_RED "\x1b[31m"
#define AC_GREEN "\x1b[32m"
#define AC_YELLOW "\x1b[33m"
#define AC_BLUE "\x1b[34m"
#define AC_MAGENTA "\x1b[35m"
#define AC_CYAN "\x1b[36m"
#define AC_WHITE "\x1b[37m"
#define AC_NORMAL "\x1b[m"
void red () {
  printf("\033[1;31m");
}
void main()
{
    int n;
    printf("Enter how many Numbers you want to store ::\n");
    scanf("%d",&n);
    printf("%s",AC_CYAN);
    int a[n],b[n];
    if(n>0)
    {
    printf("Enter %d Numbers ::\n",n);

    for(int i=1;i<=n;i++)
    {
       if(i<n)
       {
        if(i%10==1&&(i!=11||i%10==11))
        {
            printf(" %dst Number\t=  ",i);
            scanf("%d",&a[1]);
        }
         else if(i%10==2&&(i!=12||i%10==12))
        {
            printf(" %dnd Number\t=  ",i);
            scanf("%d",&a[2]);
        }
         else if(i%10==3&&(i!=13||i%10==13))
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
    printf("%s",AC_GREEN);
    printf("\nOUTPUT ::\n");
    printf("%s",AC_YELLOW);
    printf("The Numbers Present in the 1st Array are ::\n");
    for(int i=1;i<=n;i++)
    {
         printf("\na[%d]\t= %d ",i,a[i]);
    }
    printf("%s\n",AC_MAGENTA);
    printf("\nThe Numbers Present in the 2nd Array copied from 1st Array are ::\n");
    for(int i=1;i<=n;i++)
    {
         b[i]=a[i];
         printf("\nb[%d]\t= %d ",i,b[i]);
    }
    }
     else
    {
         red();
        printf("ERROR!!! Limit should be Greater than 0");
        exit(0);
    }
    getch();
}
