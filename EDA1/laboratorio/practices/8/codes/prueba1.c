#include <stdio.h>
#include "listaDoble.h"

int main(int argc, const char * argv[]) {

    Lista l1 = crearLista();
    
    int cuantos, cont, num,posicion;
    
    printf("cuantos elementos vas agregar: ");
    scanf("%d" ,&cuantos);
    
    for(cont=0; cont<cuantos; cont++)
    {
        
        printf("\n  elemento %d ;" ,cont+1);
        scanf("%d" ,&num);
        addFinalLista(&l1, num);
    
    }
    print_list(l1);
    
    printf("\n elemento a agregar: ");
    scanf("%d" ,&num);
    addIesimoLista(&l1, num);
    
    print_list(l1);
    
    printf(" \n elemento a buscar: ");
    scanf("%d" ,&num);
    
    buscar(l1, num);
    

    printf("\n vamos a eliminar un dato");
    printf("\n Ingrese la posicion : ");
    scanf("%d",&posicion);

    eliminarIesimo(&l1,posicion);
     print_list(l1);

    
    return 0;
}
