#include <algorithm>
#include "Tienda.h"

    Tienda::Tienda(std::vector<Producto*> Inventory){
      inventario = Inventory;
    }
    //Recorrer el inventario usando el metodo propio para ver los productos
    void Tienda::verProductos(){
      for (int x = 0; x<inventario.size(); x++){
        inventario[x]->verProducto();
        std::cout<<"\n"<<std::endl;
      }
    }

    void Tienda::addProducto(Producto* objeto){
      this->inventario.push_back(objeto);
    } 

    void Tienda::borrar(Producto* producto){
      auto aux = std::find(inventario.begin(), inventario.end(), producto);
      if (aux != inventario.end()){
          inventario.erase(aux);
      }
    }
    