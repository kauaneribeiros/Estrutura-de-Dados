#include "cCliente.h"
#include <iostream>

using namespace std;
cCliente::cCliente() {
}

cCliente::cCliente(const cCliente& orig) {
}

cCliente::~cCliente() {
}

void cCliente::LerDados(){
    
    for(int i=0; i<=1; i++){
    cout << "Digite o nome do cliente: " << endl;
    cin >> this->DadosCliente[i].nome;
    cout << "Digite a matrícula: " << endl;
    cin >> this->DadosCliente[i].matricula;
    cout << "Digite a nota 1: " << endl;
    cin >> this->DadosCliente[i].n1;
    cout << "Digite a nota 2: " << endl;
    cin >> this->DadosCliente[i].n2;
    }
}

void cCliente::ImprimeDados(){
    
    for (int i=0; i<=; i++){
        cout << this->DadosCliente[i].nome;
        cout << this->DadosCliente[i].matricula;
        cout << this->DadosCliente[i].n1;
        cout << this->DadosCliente[i].n2;

    }


}
