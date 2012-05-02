#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct nodo{
    int sd;
    char nombre[25];
    struct nodo *siguiente;
}Nodo;

Nodo* crearNodo(int sd, char nombre[25], Nodo *ptr){
	Nodo *nuevo;
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
    head = crearNodo(14,"maria",head);
    head = crearNodo(16,"pedro",head);
    head = crearNodo(15,"gabriel",head);
    
    //recorrer pila
    Nodo* ptr;
    ptr = head;
    while (ptr != NULL){
	    printf("sd:[%d] nombre:[%s] \n", ptr->sd, ptr->nombre);
	    ptr = ptr->siguiente;
    } 	
    
    return 0;
}
