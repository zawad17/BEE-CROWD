#include<stdio.h>
int main()
{

    int n,count=0;
    scanf("%d",&n);
    for(int i=n; i<=n+12; i++)
    {
        if(i%2!=0)
        {
            count++;
            printf("%d\n",i);
        }
        if(count==6)
            break;
    }


    return 0;
}

