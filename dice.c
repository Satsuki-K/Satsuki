#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int a[2],sum,i;

  sum = 0;

  srand((unsigned) time(NULL));
  
  printf("Rolling the dice...\n");
  for(i=0;i<2;i++){
    printf("Dice %d: ",i+1);
    a[i] = rand()%6+1;
    sum += a[i];
    printf("%d\n",a[i]);
  }

  printf("Total value: %d\n",sum);

  return 0;
}
