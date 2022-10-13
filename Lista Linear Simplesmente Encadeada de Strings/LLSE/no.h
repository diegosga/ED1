#ifndef NO_H
#define NO_H
#include<qstring.h>
namespace diego{
class No
{
private:
    QString dado;
    No* proximo;

public:
    No();
    No(QString dado);
    QString getDado() const;
    void setDado(QString newDado);
    No *getProximo() const;
    void setProximo(No *newProximo);
};
}

#endif // NO_H
