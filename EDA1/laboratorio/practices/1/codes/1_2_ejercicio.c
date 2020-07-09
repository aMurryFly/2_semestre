/* 
EJERCICIO 1_B) 
Mantener el programa de la misma manera solo que los renglones impares (0 y 2)
se dupliquen sus valores

BY: MURRIETA VILLEGAS ALFONSO
 */


#include <stdio.h>
#include <stdlib.h>

int main(){
//DECLARACIÓN DE VARIABLES y ARREGLOS
int i,j, num=0;
int arr[3][6]={4,8,12,16,20,24,28,32,36,40,44,48,52,56,60,64,68,72};

//ANIDACIÓN DE FOR PARA IMPRESIÓN 

	for (i=0;i<3;i++){  
		
		if (i % 2 == 0)
		//if(i== 0 || i == 2) version alternativa
		{	
			for(j=0;j<6;j++){
				
				arr[i][j]= arr[i][j]*2;
				printf("Arreglo [%d][%d]: %d  \n",i,j,arr[i][j] );
			}	
		}
		else
		{
			for(j=0;j<6;j++){
				printf("Arreglo [%d][%d]: %d  \n",i,j,arr[i][j] );
				//Esta imprime los renglones pares (o sea el 1 para la pc)
			}
		}
	}
	
	
system("pause");
return 0;
}
