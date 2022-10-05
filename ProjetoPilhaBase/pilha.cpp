#include "pilha.h"
#include <new>
namespace dsg{

Pilha::Pilha(int tamanho):
    tamanho(0),
    topo(-1),
    array(0)
{
    if(tamanho <= 0 ) throw QString("Tamanho não pode ser <= 0");
    try {
        array = new int[tamanho];
        this->tamanho = tamanho;
    } catch (std::bad_alloc &erro) {
        throw QString("Maquina sem memória");
    }
}
Pilha::~Pilha(){
    if(array) delete[] array;
}
bool Pilha::estaVazio() const{
    return (topo == -1);
}
void Pilha::inserir(int elemento){
    topo++;
    *(array+topo) = elemento;
}
int Pilha::retirar(){
    if(this->estaVazio()) throw QString("Pilha esta Vazia");
    int valor = *(array+topo);
    topo--;
    return valor;
}
int Pilha::acessar()const{
    if(this->estaVazio()) throw QString("Pilha esta Vazia");
    return *(array+topo);
}

}
