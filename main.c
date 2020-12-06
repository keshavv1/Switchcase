#include<stdio.h>

int main(){
int a;
printf("enter the value ");
scanf("%d",&a);
switch(a){
  case 1:
  printf("a is abc");
  break;
  case 2:
  printf("a is 4");
  break;
  case 3:
  printf("a is 3");
  break;
  default:
  printf("a is 56");
}
return 0;
}