#include "administradora.h"

using namespace std;

administradora::administradora() : cabeza(nullptr) {}

void administradora::agregarInicio(Neurona& neu ){
    Nodo* nuevoNodo = new Nodo(neu);
    nuevoNodo->siguiente = cabeza;
    cabeza = nuevoNodo;
}

void administradora::agregarFinal(Neurona& neu){
    Nodo* nuevoNodo = new Nodo(neu);
    cabeza->siguiente = nuevoNodo;
}

void administradora::mostrar(){
    Nodo* temp = cabeza;
    while (temp)
    {
        temp->dato.print();
        temp = temp->siguiente;
    }
    std::cout << std::endl;
}
