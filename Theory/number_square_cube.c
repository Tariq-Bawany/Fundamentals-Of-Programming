#include<stdio.h>

int main (){
    printf("Number\t\tSquare\t\tCube\n");
    for(int x =1;x<=10;x++){

        printf("%d\t\t%d\t\t%d\n",x,x*x,x*x*x);
    }
    return 0;
}