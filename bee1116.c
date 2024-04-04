#include<stdio.h>
int main()
{
    int n;
    float x,y;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {

        scanf("%f",&x);
        scanf("%f",&y);

        if(x>0 && y>0)
        {
            printf("%.1lf\n",x/y);
        }

        else if(x<0 && y>0)
        {
            printf("%.1lf\n",x/y);
        }
        else if(x<0 && y<0)
        {
            printf("%.1lf\n",x/y);
        }
        else if(x>0 && y<0)
        {
            printf("%.1lf\n",x/y);
        }

        else if(y==0)
        {
            printf("divisao impossivel\n");
        }
        else if(x==0)
        {
            printf("0.0\n");
        }

    }


    return 0;
}
