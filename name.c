#include<stdio.h>

int main(){

  char a[16];

  printf("What is your name?\n");
  printf("> ");

  scanf("%s",a);

  printf("Hello, %s!\n",a);
  
  return 0;
}
