#ifndef CCLIENTE_H
#define CCLIENTE_H

class cCliente {
public:
    
    struct Cliente{
        char nome[40];
        long int matricula;
        float n1, n2;
    };
    
    Cliente  DadosCliente[2];
    
    cCliente();
    cCliente(const cCliente& orig);
    virtual ~cCliente();
    
    void LerDados();
    void ImprimeDados();
    
private:

};

#endif /* CCLIENTE_H */

