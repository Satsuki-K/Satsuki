#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int a[2],sum,i;
  char s[15];

  sum = 0;

  printf("What is your name?\n");
  printf("> ");

  scanf("%s",s);

  printf("Hello, %s!\n",s);

  srand((unsigned) time(NULL));
  printf("Rolling the dice...\n");
  for(i=0;i<2;i++){
    printf("Dice %d: ",i+1);
    a[i] = rand()%6+1;
    sum += a[i];
    printf("%d\n",a[i]);
  }

  printf("Total value: %d\n",sum);

  if(sum>=7) printf("%s won!\n",s);
  else  printf("%s lost!\n",s);

  return 0;
}
