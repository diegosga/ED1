#include "filaordenada.h"
namespace dsg{
FilaOrdenada::FilaOrdenada(int tamanho):tamanho(0),vetor(0)
{
    if(tamanho<=0)throw QString ("Tamanho não pode ser <=0");
    try{
        flp = new dsg::Fila(tamanho);
        vetor= new int[tamanho];
        this->tamanho=tamanho;
        int cont =0;
        while(cont<tamanho){

            vetor[cont]= rand()%101;
            if(vetor[cont]<0) vetor[cont]=vetor[cont]*(-1);
            cont++;
        }
    }catch(std::bad_alloc &erro){
        throw QString("Memoria insuficiente");
    }

}

QString FilaOrdenada::getArray(){

    QString saida = "";
    for (int pos = 0 ; pos < tamanho ; pos++){
        saida +=QString::number(vetor[pos])+ " | ";
    }
    return saida;
  }

void FilaOrdenada::Ordenar()
{
    Fila fl(tamanho);
        int cont=0;
        int j=0;
        while(cont < tamanho){
            int aux=vetor[cont];
            while(j<fl.getQtdlista()){
                if(fl.acessar()<aux){
                    fl.inserir(fl.retirar());
                    j++;
                }else fl.inserir(aux);
            }
        }
}

QString FilaOrdenada::getArrayOrdenado()
{
    QString saida="";
     while(!flp->estaVazia()){
        saida +=QString::number(flp->retirar())+ " |";
     }
     return saida;
        /*QString texto="";

            for(int i=0;i<tamanho;i++){
                texto+= QString::number(flp->retirar()) +"|";
            }
            return texto;
 }*/

}
}
