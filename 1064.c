#include <stdio.h>
#include<math.h>

int main()
{double n,sum=0.0;
int count=0;
    for(int i=1;i<7;i++)
    {
        scanf("%lf",&n);

        if(n>0)
        {
            count++;
            sum=sum+n;
        }
    }
printf("%d valores positivos\n",count);
printf("%.1lf\n",sum/count);
    return 0;
}
