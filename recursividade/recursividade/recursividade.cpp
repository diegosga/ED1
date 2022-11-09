#include "recursividade.h"
namespace dsg{
int recursividade::getNum() const
{
    return num;
}

void recursividade::setNum(int newNum)
{
    num = newNum;
}

QString recursividade::EX3()
{
    QString Saida="Os impares são {";
    int i;
    for(i=1; i<=num; i++){
        if(i%2!=0) Saida+=QString::number(i)+"  ";
    }
    Saida+="}";
    return Saida;
}

QString recursividade::EX4()
{
    int i;
    QString resultado;
    int soma=0;
    for(i=1; i<=num; i++){
        soma+=i;
    }
    resultado= "A soma dos numeros de 1 a n é "+QString::number(soma);
    return resultado;
}

QString recursividade::EX5()
{
    int i=1;
    float cont;
    float pi=4;
    for(cont=3;4/cont>=0.0001;cont=cont+2){
        if(i%2!=0)
           pi-=4/cont;
        else pi+=4/cont;
        i++;
    }
    QString Texto="O valor de pi é "+QString::number(pi);
    return Texto;
}

QString recursividade::EX6()
{
    float pi;
    float cont;
    float soma;
    int i=1;
    QString texto;
    for(cont=1;cont<=102;cont+=2){
        if(i%2==0)soma-=1/pow(cont,3);
        else soma+=1/pow(cont,3);
        i++;
    }
    soma*=32;
    pi=cbrt(soma);
    texto = "O valor de pi é " +QString::number(pi);
    return texto;
}

recursividade::recursividade()
{

}

QString dsg::recursividade::EX1_i()
{
    QString Saida="{";
    int i;
    for(i=1; i<=num; i++){
        Saida+=QString::number(i)+"  ";
    }
    Saida+="}";
    return Saida;
}

QString recursividade::EX2()
{
    QString Saida="Os pares são {";
    int i;
    for(i=1; i<=num; i++){
        if(i%2==0) Saida+=QString::number(i)+"  ";
    }
    Saida+="}";
    return Saida;
}
}
