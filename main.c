#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct nodo{
    int sd;
    char nombre[25];
    struct nodo *siguiente;
}Nodo;

Nodo* crearNodo(int sd, char nombre[25], Nodo* ptr){
	Nodo* nuevo;
	nuevo = (Nodo*)malloc(sizeof(Nodo));
    nuevo->sd = sd;
    strcpy(nuevo->nombre,nombre);
    nuevo->siguiente = ptr;
	return nuevo;
}

int main(int argc, char **argv)
{
    Nodo *head;
    head = NULL;
    head = crearNodo(12,"gustavo",head);
    
    //recorrer pila
    Nodo* ptr;
    ptr = head;
    printf("sd:[%d] nombre:[%s] \n", ptr->sd, ptr->nombre);

    return 0;
}
