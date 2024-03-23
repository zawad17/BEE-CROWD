#include<stdio.h>
int main()
{

    int n,count1=0,count2=0,count3=0,count4=0;
    for(int i=1; i<=5; i++)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            count1++;
        }
         if(n%2!=0)
        {
            count2++;
        }
        if(n>0)
        {
            count3++;
        }
        if(n<0)
        {
            count4++;
        }
    }
printf("%d valor(es) par(es)\n",count1);
printf("%d valor(es) impar(es)\n",count2);
printf("%d valor(es) positivo(s)\n",count3);
printf("%d valor(es) negativo(s)\n",count4);


    return 0;
}
