#include <stdio.h>
int nota1(float nota){
  if(nota>=9){
    return 'A';
  }
  else if(nota>=7){
    return 'B';
  }
  else if(nota>=6){
    return 'C';
  }
  else
    return 'I';
}
void nota2(float nota,char *resultado){
  if(nota>=9){
    *resultado='A';
  }
  else if(nota>=7){
    *resultado='B';
  }
  else if(nota>=6){
    *resultado='C';
  }
  else
    *resultado='I';
}
int main(){
  //primeiro texte
  printf("5,5 = conceito %c\n",nota1(5.5));
  printf("6,5 = conceito %c\n",nota1(6.5));
  printf("7,5 = conceito %c\n",nota1(7.5));
  printf("9,5 = conceito %c\n",nota1(9.5));
  int res;
  //segundo texte
  nota2(5.5,&res);
  printf("5,5 = conceito %c\n",res);
  nota2(6.5,&res);
  printf("6,5 = conceito %c\n",res);
  nota2(7.5,&res);
  printf("7,5 = conceito %c\n",res);
  nota2(9.5,&res);
  printf("9,5 = conceito %c\n",res);
}
