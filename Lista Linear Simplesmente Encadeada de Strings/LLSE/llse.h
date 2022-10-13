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
    void InserirInicio(QString elemento);
    QString AcesarInicio()const;
    QString ObterDadosDaLista() const;
    QString RemoverDoInicio();
    void InserirFim(QString elemento);
    QString RemoverFim();
    QString AcessarFim() const;
};
}

#endif // LLSE_H
