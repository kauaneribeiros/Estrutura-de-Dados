#include "cPessoa.h"
#include <iostream>
#include <math.h>

using namespace std;

cPessoa::cPessoa() {
}

cPessoa::cPessoa(const cPessoa& orig) {
}

cPessoa::~cPessoa() {
}

void cPessoa::LerDados(){
    int qtde=0;
    cout << "Digite a quantidade de pessoas: " << endl;
    cin >> qtde;
    pessoa vetor[qtde];
    
    for (int i=0; i<qtde; i++){
        cout << "Digite nome: " << endl;
        cin >> vetor[i].nome;
        cout << "Digite cpf: " << endl;
        cin >> vetor[i].cpf;
        cout << "Digite sexo: " << endl;
        cin >> vetor[i].sexo;
        cout << "Digite altura: " << endl;
        cin >> vetor[i].altura;
        cout << "Digite peso: " << endl;
        cin >> vetor[i].peso;
    }
    int cpf=0;
    cout << "Digite o cpf a ser pesquisado: " << endl;
    cin >> cpf;
    
    this->pesquisaSequencial(vetor, qtde, cpf);
}

float cPessoa::calcIMC(pessoa x){
    float imc = 0.0;
    imc = x.peso/pow(x.altura,2);
    return imc;

}

void cPessoa::pesquisaSequencial(pessoa vetor[], int qtde, int cpf){
    bool achou = false;
    
    for(int i=0; i<=qtde; i++){
        if(cpf == vetor[i].cpf){
            cout << this->calcIMC(vetor[i]);
            achou = true;
            //chamada IMC
        }
        if(!achou)
            cout << "Pessoa não encontrada. " << endl;
    
    }

}