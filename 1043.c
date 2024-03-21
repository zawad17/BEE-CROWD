#include<stdio.h>
#include<math.h>
int main()
{

float a,b,c;
scanf("%f %f %f",&a,&b,&c);
float s,x,y;
s=(a+b+c)/2.0;
x=(s*(s-a)*(s-b)*(s-c));
y=sqrt(x);
printf("Area %.2f",y);





return 0;
}
