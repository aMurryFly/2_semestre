#include <stdio.h>

typedef struct {
    char *calle;
    int numero;
    char *colonia;
}Direccion;

typedef struct{
	char nombre[20];
	int clave;
	int seriada;
}Materia;

typedef struct {
	int numCuenta;
	char *nombre;
	char *apellido;
	float promedio;
	Direccion domicilio;
	Materia asignatura[5];
}Alumno;

Alumno crearAlumno(int, char*, char*, float);
void imprimirAlumno(Alumno);
void agregarDireccion(Alumno*);
void agregarMateria(Alumno*,int);
Direccion crearDireccion();
int menuModificarAlumno();
void modificarAlumno(Alumno*);

main(){
	
	Alumno alumno1 = crearAlumno(2022,"lisa","simpson",9.66);
	Alumno alumno2 = crearAlumno(3032,"Mickey","mouse",8.66);
	Alumno alumno3 = crearAlumno(4511,"Bart","Simpson",7.66);
	agregarDireccion(&alumno1);
	for(int i=0; i<2;i++){
		agregarMateria(&alumno1,i);	
	}
	for(int i=0; i<3;i++){
		agregarMateria(&alumno2,i);	
	}
	
	imprimirAlumno(alumno1);
	imprimirAlumno(alumno2);

	int bandera = menuModificarAlumno();
	if(bandera!=-1){
		switch(bandera){
			case 0:
				modificarAlumno(&alumno1);
				printf("Ahora el alumno modificado: \n");
				imprimirAlumno(alumno1);
			break;
			case 1:
				modificarAlumno(&alumno2);
				printf("Ahora el alumno modificado: \n");
				imprimirAlumno(alumno2);
			break;
			case 2:
				modificarAlumno(&alumno3);
				printf("Ahora el alumno modificado: \n");
				imprimirAlumno(alumno3);
			break;
		}
	}

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
	for(int i=0; i<3;i++){
		printf("La materia %d es: %s \n",i+1,alumnoPrint.asignatura[i].nombre);
		printf("Su clave es  %d es: \n",alumnoPrint.asignatura[i].clave);
		printf("Seriada: %d \n",alumnoPrint.asignatura[i].seriada);
	}
	printf("**********************************");
}

void agregarDireccion(Alumno *alumno){
	Direccion nuevoDom = crearDireccion();
	alumno->domicilio = nuevoDom; 	
}

void agregarMateria(Alumno *alumno,int i){
	printf("Escribe el nombre de la materia: %d  del alumno %s \n",i+1,alumno->nombre );
	fflush(stdin);
	scanf("%s",alumno->asignatura[i].nombre );
	fflush(stdin);
	printf("Escribe la clave de la materia: %d \n",i+1);
	scanf("%d",&alumno->asignatura[i].clave);
	fflush(stdin);
	printf("Indica si %s es seriada \n",alumno->asignatura[i].nombre);
	scanf("%d",&alumno->asignatura[i].seriada);
	fflush(stdin);
	
}

Direccion crearDireccion(){
	Direccion nueva;
	nueva.calle = "falsa";
	nueva.colonia = "siempre viva";
	nueva.numero = 123;
	return nueva;
}


int menuModificarAlumno(){	
	int modificar=0;
	int aluMod;
	printf("Deseas modificar un alumno? (1 = si, 2 = no) \n");
	scanf("%d",&modificar);
	if(modificar==2)
		return -1;
	else{
		printf("ingresa el alumno a modificar \n");
		scanf("%d",&aluMod);
		return aluMod;
	}
		
}

void modificarAlumno(Alumno *alumno){
	int materiaMod;
	printf("Ingresa la materia que deseas modificar");
	scanf("%d",&materiaMod);
	fflush(stdin);
	printf("Escribe el nuevo nombre de la materia: \n");
	scanf("%20[^\n]",alumno->asignatura[materiaMod].nombre );
	fflush(stdin);
	printf("Escribe la nueva clave de la materia: \n");
	scanf("%d",&alumno->asignatura[materiaMod].clave);
	fflush(stdin);
	printf("Indica si la nueva mat es seriada \n");
	scanf("%d",&alumno->asignatura[materiaMod].seriada);
	fflush(stdin);
}
