#ifndef _VECTOR_H_INCLUDED
#define _VECTOR_H_INCLUDED

#include <iostream>

const size_t MAX = 1;

template < typename T > class Vector {

private:
    size_t tamanio;
    size_t maximo;
    T* datos;

public:

    Vector();
    size_t getSize();
    void pushBack(T dato);
    void ampliarVector();
    T popBack(size_t i);
    ~Vector();
    
};

template <typename T>
Vector<T>::Vector() {
    tamanio = 0;
    maximo = MAX;
    T* datos = new T[maximo];
}

template <typename T>
size_t Vector<T>::getSize() {
    return tamanio;
}

template <typename T>
void Vector<T>::pushBack(T dato) {
    if(tamanio == maximo) ampliarVector();
    datos[tamanio] = dato;
    tamanio++;
}

template <typename T>
void Vector<T>::ampliarVector() {
    maximo*=2;
    T* aux = new T[maximo];
    
    for (size_t i = 0; i < tamanio; i++) {
        aux[i] = datos[i];
    }
    delete[] datos;
    
    datos = aux;
}

template <typename T>
T Vector<T>::popBack(size_t i) {
    return datos[i];
}

template <typename T>
Vector<T>::~Vector() {
    if(datos) delete[] datos;
}

#endif