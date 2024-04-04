#include<stdio.h>
int main(){
int count=0;
float n,sum=0.0;
while(1)
{
scanf("%f",&n);
if(n>=0 && n<=10)
    {
        count++;
        sum=sum+n;
    }
if(count==2)
{
    break;
}
if(n>10 || n<0)
{
    printf("nota invalida\n");
}
}

printf("media = %.2f\n",sum/2);


return 0;
}
