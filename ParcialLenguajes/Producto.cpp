#include <string>
#include "Producto.h"

Computador::Computador(std::string nombre_, std::string marca_, float precio_,char modelo_, int procesador_){
    nombre = nombre_;
    marca = marca_;
    precio = precio_;
    modelo = modelo_;
    procesador = procesador_;
}
void Computador::verProducto(){
        std::cout<<"Nombre del computador: "<<getNombre()<<std::endl;
        std::cout<<"Marca del computador: "<<getMarca()<<std::endl;
        std::cout<<"Precio del computador: "<<getPrecio()<<"$"<<std::endl;
        std::cout<<"Modelo del computador: "<<getModelo()<<std::endl;
        std::cout<<"Procesador del computador: "<<getProcesador()<<"Ghz"<<std::endl;
}

Celular::Celular(std::string nombre_, std::string marca_, float precio_,char modelo_, int almacenamiento_){
    this->nombreP = nombre_;
    this->marcaP = marca_;
    this->precioP = precio_;
    this->tipoModeloP = modelo_;
    this->almacenamientoP = almacenamiento_;
}
void Celular::verProducto(){
        std::cout<<"Nombre del celular: "<<getName()<<std::endl;
        std::cout<<"Marca del celular: "<<getMarca()<<std::endl;
        std::cout<<"Precio del celular: "<<getPrecio()<<"$"<<std::endl;
        std::cout<<"Modelo del celular: "<<getTipoModelo()<<std::endl;
        std::cout<<"Almacenamiento del celular: "<<getAlmacenamiento()<<"Rom"<<std::endl;
}

Televisor::Televisor(std::string nombre_, std::string marca_, float precio_,char modelo_,std::string resolucion_){
    nombre = nombre_;
    marca = marca_;
    precio = precio_;
    modelo = modelo_;
    resolucion = resolucion_;
}
void Televisor::verProducto(){
        std::cout<<"Nombre del televisor: "<<getNombre()<<std::endl;
        std::cout<<"Marca del televisor: "<<getMarca()<<std::endl;
        std::cout<<"Precio del televisor: "<<getPrecio()<<"$"<<std::endl;
        std::cout<<"Modelo del televisor: "<<getModelo()<<std::endl;
        std::cout<<"Resolucion del televisor: "<<getResolucion()<<std::endl;
}