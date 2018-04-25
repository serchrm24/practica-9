#include<stdio.h>
int x,f,r;
int main(){
	do{
		r=0;
		printf("este programa escribe el factorial de un numero dado\n");
	    printf("\nobtener el factorial de X");
        printf("\nescribe el valor de X!: ");
        scanf("%i",&x);
        f=x;
        if(x>1||x<21){
        	do{
        		f=f*(x-1);
				--x;
            }
            while(x>1);
            printf("el factorial es:%i",f);
            printf("\n");  
        }
        else {
            printf("\nno obtiene este factorial.");
            printf("\n");
        }
		printf("\nquieres calcular otro factorial? (1)si (2)no:");
        scanf("%i",r);
    }
    while(r<2&&r>0);
    printf("\ngracias por utilizar el programa");
    return 0;
}
