#include<stdio.h>
int main()
{
    int none,n,count1=0,count2=0,count3=0;
    while(1)
    {
        scanf("%d",&n);
        if(n<=0 || n>4)
        {
            none=1;
        }
        if(n==1)
        {
            count1++;
        }
        if(n==2)
        {
            count2++;
        }
        if(n==3)
        {
            count3++;
        }
        if(n==4)
        {
            break;
        }

    }
    if(none==1)
    {
        printf("MUITO OBRIGADO\n");
    }
    printf("Alcool: %d\n",count1);
    printf("Gasolina: %d\n",count2);
    printf("Diesel: %d\n",count3);

    return 0;
}
