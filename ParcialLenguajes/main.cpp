#include <iostream>
//#include <list>
#include "Tienda.h"

using namespace std;
int main(){
    Computador *pc1 = new Computador("MonitorNeutro","HP",499.22,'X',64);
    Computador *pc2 = new Computador("MonitorIonico","Asus",699.22,'F',125);
    Computador *pc3 = new Computador("MonitorObscuro","HP",299.22,'Y',32);
    //pc1->verProducto();
    Celular *c1 = new Celular("CelucoDiabolico","Oppo",63.99,'C',16);
    Celular *c2 = new Celular("CelucoPrimaveral","Iphone",1222.00,'A',125);
    Celular *c3 = new Celular("CelucoCristiano","Weppinbell",12.99,'F',8);
    //c1->verProducto();
    Televisor *tv1 = new Televisor("TeleBerrio","Samsung",3499.00,'B',"1920x1080");
    Televisor *tv2 = new Televisor("TeleExpuesto","Lg",199.00,'E',"640x360");
    Televisor *tv3 = new Televisor("TeleModerno","Lg",3499.00,'C',"1280x720");

    std::vector<Producto*> todo;
    todo.push_back(pc1);
    todo.push_back(pc2);
    todo.push_back(pc3);
    todo.push_back(c1);
    todo.push_back(c2);
    todo.push_back(c3);
    todo.push_back(tv1);
    todo.push_back(tv2);
    todo.push_back(tv3);

    Tienda Montana(todo);
    Montana.verProductos();
    return 0;
}