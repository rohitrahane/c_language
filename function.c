#include <stdio.h>
int main(){
    int value;
    // int add,sub,mul,div;

    printf("enter the value");
    scanf("%d",&value);
     switch (value){
        case 1:
        add();
        break;

        case 2:
        sub();
        break ;

        case 3:
        mul();
        break;

        case 4:
        div();
        break;

     }
    return 0;
}

int add(){
    int a=20;
    int b=70;
    int add;
    add=a+b;
    printf("addition the two number %d",add);
}
int sub(){
   int a=20;
   int b=70;
    int sub;
    sub=a-b;
    printf("sub the two number %d",sub);
}
int mul(){
    int a=20; 
    int b=70;
    int mul;
    mul=a*b;
    printf("mul the two number %d",mul);
}

    int div(){
     int a=20;
     int b=40;
    int div;
    div=a/b;
    printf("div the two number %d",div);


}
