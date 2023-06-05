#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H
#include <string>

using namespace std;

struct clienteConta{
    string nome;
    long int cpf;
    float saldo;
};

class contaBancaria {
public:
    
    clienteConta vetorContas[3];
    
    contaBancaria();
    contaBancaria(const contaBancaria& orig);
    virtual ~contaBancaria();
    
    void menu();
    void lerDados();
    void saque();
    void deposito();
    int pesquisar(long int cpf);

private:

};

#endif /* CONTABANCARIA_H */

