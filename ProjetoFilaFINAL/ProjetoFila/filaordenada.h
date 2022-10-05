#ifndef FILAORDENADA_H
#define FILAORDENADA_H
#include <QString>
#include <cstdlib>
#include<ctime>
#include <fila.h>
namespace dsg{
class FilaOrdenada
{
private:
    dsg::Fila *flp;
    int tamanho;
    int *vetor;
QString resultado;
public:
    FilaOrdenada(int tamanho);
    QString getArray();
    void Ordenar();
    QString getArrayOrdenado();
};
}

#endif // FILAORDENADA_H
