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


main(){	
	Alumno *apAlumno, alumno1;
	//Alumno alumno2 = {3033,"pepe","lopez",5.5};
	apAlumno = &alumno1;
	alumno1.nombre="Edgar";
	apAlumno->apellido="Tista";
	
	alumno1.domicilio2 = {"c falsa",444,"siempre viva"};
	alumno1.domicilio= domicilio2;
	
	//alumno1.domicilio.calle="calle falsa";
	//alumno1.domicilio.numero = 123;
	//alumno1.domicilio.colonia = "siempreviva";
	
	printf("Domicilio original %s \n",alumno1.domicilio.calle);
	
	apAlumno->domicilio.calle = "Benito Juarez";
	apAlumno->domicilio.numero = 45;
	
	printf("Domicilio nuevo %s \n",alumno1.domicilio.calle);
	printf("%d",alumno1.domicilio.numero);

	
}



