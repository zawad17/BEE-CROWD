#include<stdio.h>
int main()
{
    float s,p,t;
    scanf("%f",&s);

    if (s>=0 && s<=400)
    {
        p=s*0.15;
        t=s+p;
        printf("Novo salario: %.2f\n",t);
        printf("Reajuste ganho: %.2f\n",p);
        printf("Em percentual: 15 %\n");
    }
    else if (s>=400.01 && s<=800)
    {
        p=s*0.12;
        t=s+p;
        printf("Novo salario: %.2f\n",t);
        printf("Reajuste ganho: %.2f\n",p);
        printf("Em percentual: 12 %\n");
    }

    else if (s>=800.01 && s<=1200)
    {
        p=s*0.10;
        t=s+p;
        printf("Novo salario: %.2f\n",t);
        printf("Reajuste ganho: %.2f\n",p);
        printf("Em percentual: 10 %\n");
    }
    else if (s>=1200.01 && s<=2000)
    {
        p=s*0.07;
        t=s+p;
        printf("Novo salario: %.2f\n",t);
        printf("Reajuste ganho: %.2f\n",p);
        printf("Em percentual: 7 %\n");
    }
    else if (s>2000)
    {
        p=s*0.04;
        t=s+p;
        printf("Novo salario: %.2f\n",t);
        printf("Reajuste ganho: %.2f\n",p);
        printf("Em percentual: 4 %\n");
    }





    return 0;
}
