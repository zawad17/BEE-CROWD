#include<stdio.h>
int main()
{

    int x,y,main,minor,sum=0;
    scanf("%d %d",&x,&y);

    if(x>y)
    {
        main=x;
        minor=y;
    }
    else
    {
        main=y;
        minor=x;
    }

    for(int i=main-1; i>minor; i--)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    printf("%d\n",sum);

    return 0;
}

