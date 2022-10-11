#ifndef CPEDIDO_H
#define CPEDIDO_H

class cPedido {
public:
    cPedido();
    cPedido(const cPedido& orig);
    virtual ~cPedido();
    
    void lerDadosPedido();
    float addItemPedido(int codigo);
    
private:

};

#endif /* CPEDIDO_H */

