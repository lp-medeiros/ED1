#include <stdio.h>
int inverte1(int a){
  int r1,r2,r3;
  r1=a/100;
  r3=a%100;
  r2=r3/10;
  r3=r3%10;
  return (r3*100)+(r2*10)+r1;
}
void inverte2(int a,int *resultado){
  int r1,r2,r3,r;
  r1=a/100;
  r3=a%100;
  r2=r3/10;
  r3=r3%10;
  r=(r3*100)+(r2*10)+r1;
  *resultado=r;
}
int main(){
  //primeiro teste
  printf("123 = %d\n",inverte1(123));
  printf("246 = %d\n",inverte1(246));
  int res;
  //segundo teste
  inverte2(234,&res);
  printf("234 = %d\n",res);
  inverte2(468,&res);
  printf("468 = %d\n",res);
}
