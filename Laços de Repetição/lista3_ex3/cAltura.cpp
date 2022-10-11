#include "cAltura.h"
#include <iostream>

using namespace std;

cAltura::cAltura() {
}

cAltura::cAltura(const cAltura& orig) {
}

cAltura::~cAltura() {
}

void cAltura::LerDados(){
    for(int i=1; i<=5; i++){
        cout << "Informe uma altura: " << endl;
        cin >> this->altura;
    
    }
    
}

float cAltura::ImprimirDados(){
    int maior, menor;
            
    if(i==0){
            maior = this->altura;
            menor = altura;
        }
            if(altura > menor){
              maior = altura;
            }
            if(altura < menor){
                menor = altura;
            }
        }
