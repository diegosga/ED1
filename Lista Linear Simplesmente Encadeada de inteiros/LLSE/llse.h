#ifndef LLSE_H
#define LLSE_H
#include<no.h>
#include<QString>
namespace diego{
class LLSE
{
private:
No *inicio;
No *fim;
int QtdE;
public:
    LLSE();
    ~LLSE();
    bool EstaVazio()const;//const nao altera atributo
    int getQtdE() const;
    void InserirInicio(int elemento);
    int AcesarInicio()const;
    QString ObterDadosDaLista() const;
    int RemoverDoInicio();
    void InserirFim(int elemento);
    int RemoverFim();
    int AcessarFim() const;
};
}

#endif // LLSE_H
