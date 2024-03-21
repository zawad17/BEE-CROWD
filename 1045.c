#include<stdio.h>
#include<stdio.h>
int main()
{
    double a,b,c;
    double d=pow(a,2);
    double e=pow(b,2);
    double f=pow(c,2);
    scanf("%lf %lf %lf",&a,&b,&c);


    //printf("%lf",d);

    if(a>=(b+c))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    if(d==e+f)
    {
        printf("TRIANGULO RETANGULO\n");
    }
    if(d>(e+f))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if(d<e+f)
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a==b==c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if(a==b!=c|| b==c!=a)
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
