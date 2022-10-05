#ifndef FILA_H
#define FILA_H
#include <QString>
#include "qstring.h"
namespace dsg{
    class Fila
    {
        private:
            int tamanho;
            int *array;
            int Inicio;
            int Final;
            int Qtdlista;
    public:
        Fila(int tamanho);
        ~Fila();
        bool estaVazia() const;
        bool estaCheia() const;
        void inserir(int elemento);
        int retirar();
        int acessar() const;
        int getQtdlista() const;
        int *getArray() const;
    };
}

#endif // FILA_H
