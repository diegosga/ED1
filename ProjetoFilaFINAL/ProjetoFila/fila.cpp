#include "fila.h"
namespace dsg {


int *Fila::getArray() const
{
    return array;
}

Fila::Fila(int tamanho ):
    tamanho(0),
    array(0),
    Inicio( -1),
    Final (-1),
    Qtdlista (0)
{
    if(tamanho <= 0) throw QString("Tamanho nao pode ser <= 0");
    try {
        array = new int[tamanho];
        this->tamanho = tamanho;
    } catch (std::bad_alloc&) {
        throw QString("Memoria insuficiente");
    }
}
Fila::~Fila(){
    if(array) delete[] array;
}

bool Fila::estaCheia() const{
    return (Qtdlista==tamanho);
}
bool Fila::estaVazia() const{
    return (Qtdlista==0);
}
void Fila::inserir(int elemento){
    //1- verificar se esta cheia
    if(estaCheia()){
        throw QString("ESTA CHEIA\n");
    }
    if(estaVazia()){
        Inicio= Final= 0;
        array[Final] =  elemento;
        Qtdlista ++;
        return;
    }
    Final++;
    if(Final==tamanho){
        Final=0;
        array[Final]= elemento;
        Qtdlista ++;
        return;
    }

    array[Final] =  elemento;
    Qtdlista ++;
    return;

}
int Fila::retirar(){
    //1- verificar se esta vazia
    if(estaVazia() ){
        throw QString("ESTA VAZIA\n");
    }

    else{
        Inicio ++;

        if(Inicio == tamanho){
            Qtdlista --;
            Inicio=0;
            return *(array+Inicio);
    }
      else{
            Qtdlista --;
            return *(array+Inicio);
        }
    }

}
int Fila::acessar() const{
    if(estaVazia()){
        throw QString("ESTA VAZIA");
    }
    else
    return array[Inicio];
}

int Fila::getQtdlista() const
{
    return Qtdlista;
}

}
