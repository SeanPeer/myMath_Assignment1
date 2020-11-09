#include "myMath.h"
#include <stdio.h>
#include <stdbool.h>

void main(){
    
    int choice;
    double value;
    double result1,result2,result3;
    bool flag = true;

    printf("Please insert a value: \n");
    scanf("%lf",&value);
    result1 = func1(value);
    result2 = func2(value);
    result3 = func3(value);
    printf("The value of f(x) = e^x + x^3 − 2 at the point %lf is: %.4lf \n",value,result1);
    printf("The value of f(x) = 3x + 2x^2 at the point %lf is: %.4lf \n",value,result2);
    printf("The value of f(x) = (4x^3) / 5 - 2x at the point %lf is: %.4lf \n",value,result3);
   

}
