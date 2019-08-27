#include <stdio.h>
int main(){
  int i1=100,i2=200,i3=300;
  int *v2[3]= {&i1,&i2,&i3};
  printf("i1:%d i2:%d i3:%d\n",i1,i2,i3);
  printf("%d %d %d\n",v2[0],v2[1],v2[2]);
}
