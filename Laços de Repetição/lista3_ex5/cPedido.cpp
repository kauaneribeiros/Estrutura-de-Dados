#include "cPedido.h"
#include <iostream>

cPedido::cPedido() {
}

cPedido::cPedido(const cPedido& orig) {
}

cPedido::~cPedido() {
}

using namespace std;

void cPedido::lerDadosPedido(){
    int codigo=1;
    float acumular;
    bool aux = true;
    
    while (aux){
    cout << "    Produto      |  Código  |    Preço" << endl;
    cout << "Cachorro quente  |   100    |    1,70" << endl;
    cout << "Bauru simples    |   101    |    2,30" << endl;
    cout << "Bauru com ovo    |   102    |    2,60" << endl;
    cout << "Hambúrger        |   103    |    2,40" << endl;
    cout << "Cheeseburguer    |   104    |    2,50" << endl;
    cout << "Refrigerante     |   105    |    1,00" << endl;
    
    cout << endl;
    
    cout << "Digite um Código para escolher um item ou 0 - para Sair" << endl;
    cin >> codigo;
    
    cout << endl;
    
    if (codigo == 0)
        aux = false;
    
    acumular +=this->addItemPedido(codigo);
    }
    cout << "Valor da conta: " << acumular;
}

float cPedido::addItemPedido (int codigo){
    float valor;
    switch (codigo){
        case 100:
            valor=1.7;
        break;
        
        case 101:
            valor=2.3;
        break;

        case 102:
            valor=2.6;
        break;
            
        case 103:
            valor=2.4;
        break;
            
        case 104:
            valor=2.5;
        break;
            
        case 105:
            valor=1;
        break;

    }
    return valor;
}