#ifndef CPRODUTO_H
#define CPRODUTO_H

#include <string>

using namespace std;

struct clienteConta{
    string nome;
    long int cod;
    float preco;
    
};

class cProduto {
public:
    
    clienteConta vetorProdutos[3];
    cProduto();
    cProduto(const cProduto& orig);
    virtual ~cProduto();
    
    void lerDados();
    void imprimirDados();
    int pesquisar(long int cod);
    
private:

};

#endif /* CPRODUTO_H */

