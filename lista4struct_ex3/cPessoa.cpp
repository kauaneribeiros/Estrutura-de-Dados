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
    
    //this->pesquisaSequencial(vetor, qtde, cpf);
    this->ImprimirVetor(vetor, qtde);
    this->Bolha(vetor, qtde);
    this->ImprimirVetor(vetor, qtde);
    
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

//ORDENAÇÃO
void cPessoa::Bolha(pessoa vetor[], int qtde){
    int i, j;
    pessoa temp;
    for (i=qtde-1; i >= 1; i--) {
        for (j= 0; j < i ;j++) {
            if (vetor[j].cpf < vetor[j+1].cpf) {
                pessoa temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }
}

//PESQUISA
int cPessoa::PesquisaBinaria (pessoa k[], int qtde, int cpf){
    int inf,sup,meio;
    inf=0;
    sup=qtde-1;
    while (inf<=sup){
        meio=(inf+sup)/2;
        if (cpf==k[meio].cpf)
            return meio;
        else if (cpf<k[meio].cpf)
            sup=meio-1;
        else
            inf=meio+1;
    }
    return -1; /* não encontrado */
}

void cPessoa::ImprimirVetor(pessoa vetor[], int qtde){
    for (int i=0; i<qtde; i++){
        cout << vetor[i].nome;
        cout << vetor[i].cpf;
    }




}
