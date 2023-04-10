#include "Tienda.h"

std::list<Producto> Tienda::addProducto(Producto objeto){
    this->inventario.push_back(objeto);
    return inventario;
}
std::list<Producto> Tienda::borrar(int eraser){
    int x = eraser;
    auto iterador = inventario.begin();
    std::advance(iterador,x);
    iterador = inventario.erase(iterador);
    return inventario;
}