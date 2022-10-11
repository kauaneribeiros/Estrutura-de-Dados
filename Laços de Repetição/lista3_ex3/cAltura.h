#ifndef CALTURA_H
#define CALTURA_H

class cAltura {
public:
    
    cAltura();
    cAltura(const cAltura& orig);
    virtual ~cAltura();
    
    int altura;
    
    void LerDados();
    float ImprimirDados();
    
private:

};

#endif /* CALTURA_H */

