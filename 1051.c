#include <stdio.h>
#include<math.h>

int main()
{
    float n,x;
    scanf("%f",&n);

    if(n>0 && n<=2000)
    {
        printf("Isento\n");
    }
     else
     {
        if(n>2000 && n<=3000)
    {
        x=(n-2000)*0.08;
        printf("R$ %.2f\n",x);
    }
     if( n>3000 &&n<=4500)
    {
        x=((n-3000)*0.18)+1000*.08;
        printf("R$ %.2f\n",x);
    }
     if(n>4500)
    {
        x=(1500*.18)+(1000*.08)+((n-4500)*.28);
        printf("R$ %.2f\n",x);
    }

     }
    return 0;
}
