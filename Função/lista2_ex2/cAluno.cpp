#include "cAluno.h"
#include<math.h>
#include<iostream>

using namespace std;

cAluno::cAluno() {
}

cAluno::cAluno(const cAluno& orig) {
}

cAluno::~cAluno() {
}

void cAluno::LerDados(){
    
    char tm;
    
    cout << "Digite a primeira nota" << endl;
    cin >> this->n1;
    cout << "Digite a segunda nota" << endl;
    cin >> this->n2;
    cout << "Digite a terceira nota" << endl;
    cin >> this->n3;
    
    cout << "Digite o tipo de média (A/P)" << endl;
    cin >> tm;
    
    cout << this->media(tm);
}

float cAluno::media(char tm) {
    float mediaF;
    if(tm== 'A')
        mediaF = (this->n1+this->n2+this->n3)/3;
    else
        if(tm=='P')
            mediaF = ((this->n1*5)+(this->n2*3)+(this->n3*2))/10;
    return mediaF;

}

