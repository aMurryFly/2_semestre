/* 
EJERCICIO 3_1) 
Programa que en el cual, se ingresan los valores del primer renglón para posteriormente 
ser elevados al cuadrado en los siguiente 2 renglones

BY: MURRIETA VILLEGAS ALFONSO
 */

#include <stdio.h>

int main(){//Se modifica para solo ser divisible entre 4

int arr[3][5];
int i,j,h;


	printf("\nIngrese 5 n%cmeros: \n\n",163);
	
	//PARTE DONDE SE INGRESAN LOS DATOS
	for (i=0;i<3;i++){  
		for(j=0;j<5;j++){
		
			if (i==0){
				h=j+1;
				printf("Elemento [%d]: ",h);
				scanf("%d", &arr[i][j]);
			}//este if sirve para poder ingresar los datos del primer renglón

			else {
				arr[i][j]= arr[i-1][j]*arr[i-1][j];
			// el valor de 1 le restamos 1 para indicar que el valor es el cuadrado del anterior
			
			}//este if sirve para poder realizar los cuadrados del primer renglón 
		}
	}
	
	
	//PARTE DE IMPRESIÓN 
	for (i=0;i<3;i++) {
		for(j=0;j<5;j++){
			printf(" %d \t" ,arr[i][j]);
		}
		printf("\n");
	}

return 0;
}

/*NOTAS: 

1) En vez de else podemos poner if(i!=0) 
2) CHECAR versión alternativa para no usar 2 for anidados 

*/
