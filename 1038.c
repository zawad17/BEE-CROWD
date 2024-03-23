#include<stdio.h>
int main()
{

    int n,a;
    scanf("%d %d",&n,&a);
    if(n==1)
    {
        printf("Total: R$ %.2f\n",4.00*a);
    }
    if(n==2)
    {
        printf("Total: R$ %.2f\n",4.50*a);
    }
    if(n==3)
    {
        printf("Total: R$ %.2f\n",5.00*a);
    }

    if(n==4)
    {
        printf("Total: R$ %.2f\n",2.00*a);
    }

    if(n==5)
    {
        printf("Total: R$ %.2f\n",1.50*a);
    }

    return 0;
}


