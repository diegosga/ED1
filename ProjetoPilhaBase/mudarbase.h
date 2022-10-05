#ifndef MUDARBASE_H
#define MUDARBASE_H
#include "pilha.h"

namespace dsg{
class MudarBase
{
private:
    int numeroBase10;
    int base;
public:
    MudarBase();
    ~MudarBase();
    QString CalcularMudanca(int numeroBase10,int base);
    QString MostrarMudança();
};
}

#endif // MUDARBASE_H
