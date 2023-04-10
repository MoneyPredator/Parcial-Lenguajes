#ifndef TIENDA_H
#define TIENDA_H
#include <list>
#include "Producto.h"

class Tienda{
    public:
    std::list<Producto>inventario;
    std::list<Producto> addProducto(Producto);
    std::list<Producto> borrar(int);
};

#endif