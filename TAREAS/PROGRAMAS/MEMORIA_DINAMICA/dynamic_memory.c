#include<stdio.h>
#include<string.h>
#include<math.h>    //Librerias
#include<stdlib.h>
#include<stdbool.h>


int main(){
	
	int *iptr;
	
	iptr=(int *)malloc(sizeof(int));
	
	if(iptr == NULL)
	 return -1;
	
	*iptr=5;
	
	printf("%d, %p", *iptr, iptr);
	free(iptr);
	
	return 0;
}
