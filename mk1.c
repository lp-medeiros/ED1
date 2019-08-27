#include <stdio.h>
int potencia1(int a,int b){
  int i,r=1;
  for(i=0;i<b;i++){
    r=r*a;
  }
  return r;
}
void potencia2(int a,int b,int *resultado){
  int i,r=1;
  for(i=0;i<b;i++){
    r=r*a;
  }
  *resultado = r;
}
int main(){
  //teste da primeira função
  printf("3 ^ 4 = %d\n",potencia1(3,4));
  printf("5 ^ 2 = %d\n",potencia1(5,2));

  int res;
  //teste da segunda função
  potencia2(4,3,&res);
  printf("4 ^ 3 = %d\n",res);
  potencia2(2,5,&res);
  printf("2 ^ 5 = %d\n",res);
}
