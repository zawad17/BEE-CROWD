#include<stdio.h>
int main()
{
    int n1,n2,dj;
    scanf("%d %d",&n1,&n2);
    if(n1>n2)
    {
        dj=(24-n1)+n2;
        printf("O JOGO DUROU %d HORA(S)\n",dj);
    }
    else if(n1<n2)
    {
        dj=n2-n1;
        printf("O JOGO DUROU %d HORA(S)\n",dj);
    }
    else
        printf("O JOGO DUROU 24 HORA(S)\n");
    return 0;
}
