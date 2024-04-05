#include<stdio.h>
int main(){

int n,number=1;
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
printf("%d %d %d PUM\n",number,number+1,number+2);
number=number+4;

}

return 0;
}
