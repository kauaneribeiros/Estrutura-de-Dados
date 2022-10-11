#ifndef CNUMERO_H
#define CNUMERO_H

class cNumero {
public:
    
    int num;
    
    cNumero();
    cNumero(const cNumero& orig);
    virtual ~cNumero();
    
    void LerDados();
    int ApresentarDados();
    
private:

};

#endif /* CNUMERO_H */

