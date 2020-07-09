/* 3_EJERCICIO]
This program use a entire pointer wich point an entire array
*/

#include <stdio.h>

int main () { 
short arr[5], *apArr; 

apArr = &arr[0]; 

// imprime la dirección de memoria del arreglo en la posición [0] 
printf("Direcci%cn del arreglo en la primera posici%cn: %x\n",162,162,&arr[0]); 

// imprime la dirección de memoria del arreglo 
// (el nombre del arreglo es un apuntador) 
printf("Direcci%cn del arreglo: %x\n",162,&arr); 

// imprime la dirección de memoria del apuntador apArr 
printf("Direcci%cn del apuntador: %x\n",162,apArr);

return 0; 
}

