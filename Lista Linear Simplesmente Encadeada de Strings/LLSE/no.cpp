#include "no.h"
namespace diego{
QString No::getDado() const
{
    return dado;
}

void No::setDado(QString newDado)
{
    dado = newDado;
}

No *No::getProximo() const
{
    return proximo;
}

void No::setProximo(No *newProximo)
{
    proximo = newProximo;
}

No::No(): dado(""), proximo(0)
{

}

No::No(QString dado):dado(dado),proximo(0)
{

}
}
