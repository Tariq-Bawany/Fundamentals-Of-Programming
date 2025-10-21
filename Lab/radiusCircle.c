#include<stdio.h>

int main (){
    float radius, pi = 3.14159,area,circumference;
    printf("enter radius of circle:");
    scanf("%f",&radius);
// printf("%.3f\n",radius);
// printf("%f",pi);
area =pi*radius*radius; 
circumference = 2*pi*radius;
printf("the area of circle is:%.3f\n",area);
printf("the circumference of circle is:%.3f",circumference);
    return 0;
}