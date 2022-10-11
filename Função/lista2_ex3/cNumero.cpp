#include<iostream>
#include "cNumero.h"

using namespace std;

cNumero::cNumero() {
}

cNumero::cNumero(const cNumero& orig) {
}

cNumero::~cNumero() {
}

void cNumero::LerDados(){
    cout << "Informe um número inteiro: " << endl;
    cin>>this->num;
    
    
    cout << this->ApresentarDados();
    
}

int cNumero::ApresentarDados(){
    
    if(this->num>0){
        return 1;
    }
    else 
        if(this->num==0){
            return 0;
        }
        else{
            return -1;
        }

}