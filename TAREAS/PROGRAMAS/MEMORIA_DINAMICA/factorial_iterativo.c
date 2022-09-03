//Factorial no recursivo

#include<stdio.h>
int main(int argc, char*argv[]){


int numero=0;
int resultado=1;
int i=0;

printf("Introduce el numero para calcular el factorial: ");
scanf("%d", &numero);

for(i=2; i<=numero; i++){
	resultado = resultado * i;
	
}

printf("El factorial de %d es %d", numero, resultado);
return 0;
}
