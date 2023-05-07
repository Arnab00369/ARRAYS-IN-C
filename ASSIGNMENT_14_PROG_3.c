
#include <stdio.h>
void main()
{
    int a[10],se=0,so=0;
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
       for(int i=1;i<=10;i++)
       {
           if(a[i]%2==0)
            se+=a[i];
           else
            so+=a[i];
       }
       printf("\nOUTPUT ::\nSum of Even Numbers in the Array = %d\nSum of Odd Numbers in the Array  = %d",se,so);
    getch();
}

