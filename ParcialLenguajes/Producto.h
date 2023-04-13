#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <string>

class Producto {
public:
    virtual void verProducto() = 0;//Implementacion puramente virtual
};

class Computador: public Producto{
private:
    std::string nombre;
    std::string marca;
    float precio;
    char modelo;
    int procesador;
public:
    std::string getNombre(){
        return this->nombre;
    }
    std::string getMarca(){
        return this->marca;
    }
    float getPrecio(){
        return this->precio;
    }
    char getModelo(){
        return this->modelo;
    }
    int getProcesador(){
        return this->procesador;
    }
    Computador(std::string nombre, std::string marca, float precio,char modelo,int almacenamiento);
    void verProducto();
};

class Celular: public Producto{
private:
    std::string nombreP;
    std::string marcaP;
    float precioP;
    char tipoModeloP;
    int almacenamientoP;
public:
    std::string getName(){
        return this->nombreP;
    }
    std::string getMarca(){
        return this->marcaP;
    }
    float getPrecio(){
        return this->precioP;
    }
    char getTipoModelo(){
        return this->tipoModeloP;
    }
    int getAlmacenamiento(){
        return this->almacenamientoP;
    }
    Celular(std::string nombreP, std::string marcaP, float precioP, char tipoModeloP, int almacenamientoP);
    void verProducto();
};

class Televisor: public Producto{
private:
    std::string nombre;
    std::string marca;
    float precio;
    char modelo;
    std::string resolucion;
public:
    std::string getNombre(){
        return this->nombre;
    }
    std::string getMarca(){
        return this->marca;
    }
    float getPrecio(){
        return this->precio;
    }
    char getModelo(){
        return this->modelo;
    }
    std::string getResolucion(){
        return this->resolucion;
    }
    Televisor(std::string nombre, std::string marca, float precio,char modelo, std::string resolucion);
    void verProducto();
};
#endif