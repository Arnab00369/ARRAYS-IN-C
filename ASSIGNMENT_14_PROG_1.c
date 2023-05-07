#include <stdio.h>
void main()
{
    int a[10],s=0;
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
       s=s+a[i];
       printf("The Sum of numbers given in the Array is = %d",s);
    getch();
}
