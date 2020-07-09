#include <stdio.h>

typedef struct {
    char *calle;
    int numero;
    char *colonia;
}Direccion;

typedef struct {
	int numCuenta;
	char *nombre;
	char *apellido;
	float promedio;
	Direccion domicilio;
}Alumno;

Alumno crearAlumno(int, char*, char*, float);
void imprimirAlumno(Alumno);
void agregarDireccion(Alumno*);
Direccion crearDireccion();

main(){
	Alumno alumno1 = crearAlumno(2022,"lisa","simpson",9.66);
	agregarDireccion(&alumno1);
	imprimirAlumno(alumno1);
	system("PAUSE");
}

Alumno crearAlumno(int numeroC, char *name, char *lastname, float prom){
	Alumno alumnoCreado;
	alumnoCreado.numCuenta = numeroC;
	alumnoCreado.nombre = name;
	alumnoCreado.apellido = lastname;
	alumnoCreado.promedio = prom;
	return alumnoCreado;
}
void imprimirAlumno(Alumno alumnoPrint){
	printf("Numero de cuenta: %d \n",alumnoPrint.numCuenta);
	printf("Name: %s \n",alumnoPrint.nombre);
	printf("LastName : %s  \n ", alumnoPrint.apellido);
	printf("Calle : %s \n",alumnoPrint.domicilio.calle);
}

void agregarDireccion(Alumno *alumno){
	Direccion nuevoDom = crearDireccion();
	alumno->domicilio = nuevoDom; 
		
}

Direccion crearDireccion(){
	Direccion nueva;
	nueva.calle = "falsa";
	nueva.colonia = "siempre viva";
	nueva.numero = 123;
	return nueva;
}



