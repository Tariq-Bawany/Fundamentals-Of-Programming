#include<stdio.h>
/*
Write a program to find unit, ten, hundred, thousand, and ten thousands in a five digit number.
Also calculate sum of the five digits.
*/
int main (){
    int a,b,c,d,e,value, sum;
    // value =12345;
    printf("Enter the 5 digit number:");
    scanf("%d",&value);
    a = value%10;
    b = (value/10)%10;
    c = (value/100)%10;
    d = (value/1000)%10;
    e = (value/10000);
    sum=a+b+c+d+e;
    printf("%d",sum);
    // printf("%d",a);
    // printf("%d",b);
    // printf("%d",c);
    // printf("%d",d);
    // printf("%d",e);
    return 0;
}