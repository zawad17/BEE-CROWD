//Read two floating points' values of double precision A and B, corresponding to two student's grades.
//After this, calculate the student's average, considering that grade A has weight 3.5 and B has weight 7.5. 
//Each grade can be from zero to ten, always with one digit after the decimal point.

#include <stdio.h>

int main() {
    float A,B;
    scanf("%f %f",&A, &B);
    printf("MEDIA = %.5f\n",(A*3.5+B*7.5)/11);

    return 0;
}












