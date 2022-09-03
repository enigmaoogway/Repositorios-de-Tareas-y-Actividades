#include<stdio.h>

int factorial(int numero){
	if(numero<1){
		return 0;
	}else if(numero==1){
		return 1;
	}else{
		return numero*factorial(numero-1);
	}
}

int main(int argc, char*argv[]){
	
	int numero;
	int resultado;
	printf("Introduce un numero:");
	scanf("%d",&numero);
	resultado = factorial(numero);
	
	printf("El factorial de %d es %d", numero,resultado);
	
	return 0;
} 