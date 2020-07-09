
typedef struct{
    int primero;
    int ultimo;
    int lista[100];
}Cola;



Cola crearCola();
int isEmptyC(Cola);
void encolar(Cola*,int);
int desencolar(Cola*);
int first(Cola);



Cola crearCola(){
	Cola c;
	c.primero=1;
	c.ultimo=0;
	return c;
}
int isEmptyC(Cola c){
	if(c.primero==c.ultimo+1)
		return 1;
	return 0;
}
void encolar(Cola *c,int x){
	c->lista[c->ultimo]=x;
	c->ultimo+=1;
}
int desencolar(Cola *c){
	if((isEmptyC(*c))==1)
		printf("la cola está vacía \n");
	else{
		int aux = c->lista[c->primero-1];
		c->lista[c->primero-1]=NULL;
		c->primero++;
		if(c->primero==c->ultimo+1){
	
			*c=crearCola();
		}
		return aux;
	}
}
