#include <cstdlib>
#include "cProduto.h"

using namespace std;

int main(int argc, char** argv) {
    
    cProduto obj;
    obj.lerDados();
    obj.imprimirDados();
    obj.pesquisar(long int cod);

    return 0;
}

