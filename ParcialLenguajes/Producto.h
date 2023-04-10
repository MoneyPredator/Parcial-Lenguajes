#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <string>

class Producto {
public:
    std::string nombre;
    std::string marca;
    float precio;
    char modelo;
    virtual ~Producto() {};
    Producto() {}
    Producto(std::string nombre, std::string marca, float precio,char modelo);
    void verProducto();
};

class Computador: public Producto{
    public:
    int almacenamiento;
    Computador(std::string nombre, std::string marca, float precio,char modelo,int almacenamiento);
    void verProducto();
};
class Celular: public Producto{
    public:
    int almacenamiento;
    Celular(std::string nombre, std::string marca, float precio,char modelo, int almacenamiento);
    void verProducto();
};
class Televisor: public Producto{
    public:
    int resolucion;
    Televisor(std::string nombre, std::string marca, float precio,char modelo, int resolucion);
    void verProducto();
};
#endif