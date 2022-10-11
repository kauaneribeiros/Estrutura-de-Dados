#ifndef CALUNO_H
#define CALUNO_H

class cAluno {
public:
    
    float n1, n2, n3;
    
    cAluno();
    cAluno(const cAluno& orig);
    virtual ~cAluno();
    
    void LerDados();
    float media(char tm);
    
private:

};

#endif /* CALUNO_H */

