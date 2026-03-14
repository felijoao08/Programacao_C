
#include <stdio.h>

void main() {
  // || é como 'or', 'ou'
  // && é como o 'e' ou o 'and'
  // ! negação 

  int a = 10;
  int b = 20;
  
  if (a && b > 5) {
    printf("Isso é verdade\n");
  }
  else {
    printf("Isso é falso\n");
  
  }
  if (a > 40 || b > 40){
    printf("Isso é verdade\n");
  }
  else {
    printf("Isso é falso\n");
  
  }
  if (!a ) {
    printf("Isso é 0\n");
  }
  else {
    printf("Isso é diferente de 0");
  }
  
  

}