#include "myMath.h"
#define E 2.71828182845904523536;

double Exponent(int x){
    double t = 1;
    for (int i = 0; i < x; i++)
    {
        t*=E;
    }
    return t; 
}

double Power(double x,int y){
    double t = 1;
    for (int i = 0; i < y; i++)
    {
        t*=x;
    }
    return t; 
}

double func1(double x){//f(x)=e^x+x^3-2
    double result ;
    result = add(Exponent((int)x),sub(Power(x,3),2));
    return result;  
}

double func2(double x){//f(x)=3x+2x^2
    double result;
    result = add(mul(3,(float)x),mul(2,Power(x,2)));
    return result;

}

double func3(double x){//f(x)=(4x^3)/5-2x
    double result,result0,result1,result2,result3;
    result0 = Power(x,3);
    result1 = mul(4,result0);
    result2 = mul(2,x);  
    result3 = div(result1,5);
    result = sub(result3,result2);
    return result;

}
