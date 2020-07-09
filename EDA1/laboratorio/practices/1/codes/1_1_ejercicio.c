/* 
EJERCICIO 1_A) 
CORREGIR DE MANERA QUE SE IMPRIMA CORRECTAMENTE EL ARREGLO 

BY: MURRIETA VILLEGAS ALFONSO
 */
 
#include <stdio.h>
#include <stdlib.h>

int main(){

int i,j, num=0;
int arr[3][6]={4,8,12,16,20,24,28,32,36,40,44,48,52,56,60,64,68,72};

//ANIDACIÓN DE FOR PARA IMPRIMIR 
	for (i=0;i<3;i++){  
		for(j=0;j<6;j++){
			printf("Arreglo [%d][%d]: %d  \n",i,j,arr[i][j] );
		}
	}
	
//CORRECCIÓN DEL PROGRAMA 
	
//1) Para corregir el error sinmplemente debe intercambiarse el número límite en los for 

system("pause");
return 0;
}
