#ifndef PILHA_H
#define PILHA_H
#include<qstring.h>
#include <QString>


namespace dsg{
class Pilha
{
    //Atributos
private:
    int tamanho;
    int topo;
    int *array;
    int numeroBase10;
    int base;
public:
    Pilha(int tamanho);
    ~Pilha();
    bool estaVazio() const;
    void inserir(int elemento);
    int retirar();
    int acessar()const;
};
}
#endif // PILHA_H
