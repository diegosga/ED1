#include "mudarbase.h"

namespace dsg{
MudarBase::MudarBase()
{

}
QString MudarBase::CalcularMudanca(int numeroBase10, int base){
    Pilha p(20);
    int aux=numeroBase10;
    QString resultado="";
    while(aux>0){
        p.inserir(aux%base);
        aux=aux/base;
    }

    while(!p.estaVazio()){
        QString str ={"0123456789ABCDEF"};
         int v=p.retirar();
         resultado=resultado+str[v];
    }
    return resultado;
}
}
