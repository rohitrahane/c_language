#include<stdio.h>
int main(){

    int number;
    int number1;
   // int number1;
    printf("enter the number \n");
    scanf("%d",&number);
      
      printf("enter the number1 \n");
      scanf("%d",&number1);

      
   if(number<number1 && number1>number){
    printf(" number1 the number is smaller");
   }
  else 
  {
    printf(" number2 the number is biger");
   }
    return 0;
}