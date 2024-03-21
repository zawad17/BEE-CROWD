#include<stdio.h>
int main()
{
    double n1,n2,n3,n4,n5;
    double avg1,avg2;
    scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);
    avg1=(n1*2+n2*3+n3*4+n4*1)/10;
    printf("Media: %.1lf\n",avg1);

    if(avg1>=5.0 && avg1<=6.9)
    {
        printf("Aluno em exame.\n");
        //if(avg1>=6.9 && avg1<=5.0)

        scanf("%lf",&n5);
        printf("Nota do exame: %.1lf\n",n5);
        avg2=(avg1+n5)/2;
        if(avg2>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if(avg2<=4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",(avg1+n5)/2);

    }

    else if(avg1>=7.0)
    {
        printf("Aluno aprovado.\n");
    }


    else if(avg1<5.0)
    {
        printf("Aluno reprovado.\n");
    }




    return 0;
}
