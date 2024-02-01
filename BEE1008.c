//Write a program that reads an employee's number, his/her worked hours number in a month and the amount he received per hour. Print the employee's number and salary that he/she will receive at end of the month, with two decimal places.
// The input file contains 2 integer numbers and 1 value of floating point, representing the number, worked hours amount and the amount the employee receives per worked hour.
#include <stdio.h>
 
int main() {
    
    int num,workH;
    float PHS;
    scanf("%d %d %f",&num, &workH, &PHS);
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2f\n",workH*PHS);
    
    return 0;
}
