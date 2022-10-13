#include "llse.h"
namespace diego{
int LLSE::getQtdE() const
{
    return QtdE;
}

void LLSE::InserirInicio(QString elemento)
{
    try {
        No *p = new No(elemento);//cria dinamicamente o no
        if(!fim) fim=p;
        QtdE++;
        p->setProximo(inicio);
        inicio=p;
    } catch (std::bad_alloc &erro) {
        throw QString("Memoria insuficiente");
    }
}

QString LLSE::AcesarInicio() const
{
    if(EstaVazio()) throw QString("Lista vazia");
    return inicio->getDado();
}

QString LLSE::ObterDadosDaLista() const
{
    QString Saida="| ";
    No *paux=inicio;
    for(int pos=0;pos<QtdE;pos++){
        Saida+= paux->getDado()+"|->|";
        paux=paux->getProximo();
    }
    Saida+=" |";
    return Saida;
}

QString LLSE::RemoverDoInicio()
{
if(EstaVazio()) throw QString("Esta Vazia");
No *paux=inicio;
inicio=inicio->getProximo();
QtdE--;
if (QtdE==0)fim=0;
QString elemento=paux->getDado();
delete paux;
return elemento;

}
void LLSE::InserirFim(QString elemento)
{
    try {
        No *p = new No(elemento);//cria dinamicamente o no
        //quando é inserido no fim o no tem que apontar pra 0, se for inserido aponta pro proximo
        if(!fim) fim=p;
        QtdE++;
        p->setProximo(fim);
        fim=p;
    }catch (std::bad_alloc &erro) {
        throw QString("Memoria insuficiente");
    }
}

QString LLSE::RemoverFim()
{
    if(EstaVazio()) throw QString("Esta Vazia");
    No *paux=fim;
    fim=fim->getProximo();
    QtdE--;
    if (QtdE==0)fim=0;
    QString elemento=paux->getDado();
    delete paux;
    return elemento;
}
QString LLSE::AcessarFim() const
{
    if(EstaVazio()) throw QString("Lista vazia");
    return fim->getDado();
}

LLSE::LLSE():inicio(0), fim(0), QtdE(0)
{

}

LLSE::~LLSE()
{

}

bool LLSE::EstaVazio() const
{
    return !QtdE;
}
}
