#include "cProduto.h"
#include <iostream>

using namespace std;

cProduto::cProduto() {
}

cProduto::cProduto(const cProduto& orig) {
}

cProduto::~cProduto() {
}

void cProduto::lerDados(){
        for(int i=0; i<= 2; i++){
        cout << "Digite o nome do produto: " << endl;
        cin >> this->vetorProdutos[i].nome;
        cout << "Digite o código do produto: " << endl;
        cin >> this->vetorProdutos[i].cod;
        cout << "Digite o preço do produto: " << endl;
        cin >> this->vetorProdutos[i].preco;
    }
    
}

void cProduto::imprimirDados(){
    
    cout << this->vetorProdutos[i].nome;
    cout << this->vetorProdutos[i].cod;
    
    
}

int cProduto::pesquisar(long int cod){
    
        for(int i=0; i<= 2; i++){
        if(cod == this -> vetorProdutos[i].cod)
            return i;
        }
        
            cout << this->vetorProdutos[i].preco;
            
    return -1;
    
}