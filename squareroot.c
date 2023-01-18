#include<stdio.h>
#include<math.h>
int main(){
    double number, squareroot;
    printf("enter a number\n");
    scanf("%lf",&number);
    squareroot=sqrt(number);
    printf("%.2lf",squareroot);
    return 0;
}