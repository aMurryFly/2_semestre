/* 
EJERCICIO 1) 
CODIFICAR, CHECAR Y RECTIFICAR EN CASO DE SER NECESARIO

BY: MURRIETA VILLEGAS ALFONSO
 */
 
#include <stdio.h>

void main(){

int w=10, x=20, y= 30, z=40, r1, r2, r3;
int *p1, *p2, *p3, *p4;


/*En el apartado de declaraciones al asignar una variable al apuntador siempre debemos 
poner sin el operador de indireccion * , mientras a la variable asignada le ponemos el operador de 
dirección &
*/
p1=&w;
p2=&x;
p3=&y;
p4=&z;

/*Al momento de utilizar los apuntadores siempre debemos usar el operador de indirección * */

p4=p1;
r1=*p1 + *p2;
r2=*p3 * *p4; //ESTA PARTE PUEDE VARIAR CON RESPECTO A LA OPERACIÓN
r3 = *p2 + *p3; //Omitimos el * en la variable r3

printf("Los resultados son: %d, %d y %d \n", r1,r2,r3);


system ("pause");
}
 
