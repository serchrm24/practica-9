#include <stdio.h>
int main(){
 int an,op;
do{
 printf("\tpeliculas\n\n");
 printf("Elegir genero\n");
 printf("1) terror\n");
 printf("2) accion\n");
 printf("3) comedia\n");
 scanf("%i",&op);

 switch(op) {
 default:
 printf("no valida.\n");
 break;
 case 1:
 printf("it'.\n");
 break;
 case 2:
 printf("avengers'.\n");
 break;
 case 3:
 printf("mentiroso mentiroso'.\n");
 break;
 }
printf("¿Desea otro genero? (1)si (2)no\n");
scanf("%i",&an);
} while (an==1);
 return 0;
}

