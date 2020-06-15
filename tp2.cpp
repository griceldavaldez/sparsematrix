#include <cstdlib>
#include <iostream>

/**
 *Se crea un struct Nodo que se utilizara para la lista enlazada que representara a la matriz en su formato ELLPACK 
 */
template <typename T>
struct Nodo{
    int pos_columna;
    int pos_fila;
    T valor;
    struct Nodo *sgte;
};

template <typename T>
void crear_nodo(struct Nodo **primero, T elemento, int fila, int columna){
    struct Nodo *aux;
    aux=*primero;
    if(aux==NULL){ //la lista esta vacia, no hay ningun Nodo aun
        //se crea un nuevo Nodo con memoria dinamica
        aux=(struct Nodo *)malloc(sizeof(struct Nodo));
        aux->valor=elemento;
        aux->pos_fila=fila;
        aux->pos_columna=columna;
        aux->sgte=NULL;
        *primero=aux;
    }else{
        while (aux->sgte!=NULL){ //se busca el ultimo elemento de la lista para agregar el nuevo Nodo al final de esta
            aux=aux->sgte;
        } //cuando se encuentra, se agrega el nuevo nodo al final de la lista
        struct Nodo<T> *f;
        f=(struct Nodo *) malloc(sizeof(struct Nodo));
        f->valor=elemento;
        f->pos_fila=fila;
        f->pos_columna=columna;
        f->sgte=NULL;
        aux->sgte=f;
    }
}

/**
 * Se crea una clase matriz que contendra a las distintas operaciones que se pueden realizar con las matrices
*/
template <typename T>
class matriz{
    public:
        T mat_normal[][];
        

};
