#include "Producto.h"

Producto::Producto(std::string nombre_, std::string marca_, float precio_,char modelo_){
    nombre = nombre_;
    marca = marca_;
    precio = precio_;
    modelo = modelo_;
}
void Producto::verProducto(){
        std::cout<<"Nombre del producto: "<<this->nombre<<std::endl;
        std::cout<<"Marca del producto: "<<this->marca<<std::endl;
        std::cout<<"Precio del producto: "<<this->precio<<std::endl;
        std::cout<<"Modelo del producto: "<<this->modelo<<std::endl;
    }
Computador::Computador(std::string nombre_, std::string marca_, float precio_,char modelo_, int almacenamiento_){
    nombre = nombre_;
    marca = marca_;
    precio = precio_;
    modelo = modelo_;
    almacenamiento = almacenamiento_;
}
void Computador::verProducto(){
        std::cout<<"Nombre del computador: "<<this->nombre<<std::endl;
        std::cout<<"Marca del computador: "<<this->marca<<std::endl;
        std::cout<<"Precio del computador: "<<this->precio<<std::endl;
        std::cout<<"Modelo del computador: "<<this->modelo<<std::endl;
        std::cout<<"Almacenamiento del computador: "<<this->almacenamiento<<std::endl;
    }
Celular::Celular(std::string nombre_, std::string marca_, float precio_,char modelo_, int almacenamiento_){
    nombre = nombre_;
    marca = marca_;
    precio = precio_;
    modelo = modelo_;
    almacenamiento = almacenamiento_;
}
void Celular::verProducto(){
        std::cout<<"Nombre del celular: "<<this->nombre<<std::endl;
        std::cout<<"Marca del celular: "<<this->marca<<std::endl;
        std::cout<<"Precio del celular: "<<this->precio<<std::endl;
        std::cout<<"Modelo del celular: "<<this->modelo<<std::endl;
        std::cout<<"Almacenamiento del celular: "<<this->almacenamiento<<std::endl;
    }
Televisor::Televisor(std::string nombre_, std::string marca_, float precio_,char modelo_, int resolucion_){
    nombre = nombre_;
    marca = marca_;
    precio = precio_;
    modelo = modelo_;
    resolucion = resolucion_;
}
void Televisor::verProducto(){
        std::cout<<"Nombre del televisor: "<<this->nombre<<std::endl;
        std::cout<<"Marca del televisor: "<<this->marca<<std::endl;
        std::cout<<"Precio del televisor: "<<this->precio<<std::endl;
        std::cout<<"Modelo del televisor: "<<this->modelo<<std::endl;
        std::cout<<"Resolucion del televisor: "<<this->resolucion<<std::endl;
    }