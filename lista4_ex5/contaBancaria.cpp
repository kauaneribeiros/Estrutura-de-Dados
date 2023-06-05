#include "contaBancaria.h"
#include <iostream>

using namespace std;

contaBancaria::contaBancaria() {
}

contaBancaria::contaBancaria(const contaBancaria& orig) {
}

contaBancaria::~contaBancaria() {
}

void contaBancaria::menu(){
    
    int opcao = 1;
    
    while(opcao>=1){
        cout << "Digite 1 para Cadastro: " << endl;
        cout << "Digite 2 para Saque: " << endl;
        cout << "Digite 3 para Deposito: " << endl;
        cout << "Digite 0 para sair: " << endl;
        cin >> opcao;
        
        switch (opcao){
                case 1: lerDados();
                break;
                case 2: saque();
                break;
                case 3: deposito();
                break;
        }
       
    }
  
}

void contaBancaria::lerDados(){
    for(int i=0; i<= 2; i++){
        cout << "Digite seu nome: " << endl;
        cin >> this->vetorContas[i].nome;
        cout << "Digite seu cpf: " << endl;
        cin >> this->vetorContas[i].cpf;
        cout << "Digite deposito inicial: " << endl;
        cin >> this->vetorContas[i].saldo;
    }
    
}

int contaBancaria::pesquisar(long int cpf){
  
    for(int i=0; i<= 2; i++){
        if(cpf == this -> vetorContas[i].cpf)
            return i;
    }
    
    return -1;
    
}

void contaBancaria::saque(){
    
    float saque;
    int i=0;
    long int cpf;
    
    cout << "Digite o cpf para pesquisa: " << endl;
    cin >> cpf;
    
    cout << "Digite o valor do saque: " << endl;
    cin >> saque;
    
    i = this->pesquisar(cpf);
    
    if (i!=-1)
        this->vetorContas[i].saldo-=saque;
    
    cout << this->vetorContas[i].nome;
    cout << this->vetorContas[i].cpf;
    cout << this->vetorContas[i].saldo;
    
}

void contaBancaria::deposito(){
    float deposito;
    long int cpf;
    
    cout << "Digite o cpf para pesquisa: " << endl;
    cin >> cpf;
    cout << "Digite o valor do deposito: " << endl;
    cin >> deposito;
    
    int i = this->pesquisar(cpf);
    
        if (i!=0)
        this->vetorContas[i].saldo+=deposito;
    
    cout << this->vetorContas[i].nome << endl;
    cout << this->vetorContas[i].cpf;
    cout << this->vetorContas[i].saldo;
    
}