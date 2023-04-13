#ifndef TIENDA_H
#define TIENDA_H
#include <vector>
#include "Producto.h"

class Tienda{
    public:
    std::vector<Producto*>inventario;
    //Constructor
    Tienda(std::vector<Producto*> Inventory);
    void verProductos();
    void addProducto(Producto* producto);
    void borrar(Producto* producto);
};

#endif