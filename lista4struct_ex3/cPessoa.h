#ifndef CPESSOA_H
#define CPESSOA_H

#include<string>

using namespace std;

struct pessoa {
    
    string nome;
    long int cpf;
    char sexo;
    float altura;
    float peso;
};

class cPessoa {
public:
    
    //pessoa vetor[2];
    
    cPessoa();
    cPessoa(const cPessoa& orig);
    virtual ~cPessoa();
    
    void LerDados();
    float calcIMC(pessoa x);
    void pesquisaSequencial(pessoa vetor[], int qtde, int cpf);
    void Bolha(pessoa vetor[], int qtde);
    int PesquisaBinaria(pessoa k[], int qtde, int cpf);
    void ImprimirVetor(pessoa vetor[], int qtde);
private:

};

#endif /* CPESSOA_H */

