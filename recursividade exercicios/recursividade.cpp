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

QString recursividade::EX3_i()
{
    QString Saida="Os impares são {";
    int i;
    for(i=1; i<=num; i++){
        if(i%2!=0) Saida+=QString::number(i)+"  ";
    }
    Saida+="}";
    return Saida;
}

QString recursividade::EX3_r(int cont)
{
    if( cont<=num)
        if(cont%2!=0)return QString::number(cont) + "  "+EX3_r(cont+1);
        else return(EX3_r(cont+1));
    else return "}";
}

QString recursividade::EX4_i()
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

int recursividade::EX4_r(int cont)
{
    int resultado=0;
    if(cont<=num) resultado+=cont + EX4_r(cont+1);
    else return resultado;
}

QString recursividade::EX5_i()
{
    int sinal=-1;
    float cont;
    float pi=4;
    for(cont=3;4/cont>=0.0001;cont+=2){
           pi+=(sinal)*4/cont;
           sinal*=-1;

    }
    QString Texto="O valor do EX 5 interativo é: "+QString::number(pi);
    return Texto;
}

float recursividade::EX5_r(float cont,int sinal, float pi)
{
    if(4.0/cont>=0.0001)
            return EX5_r(cont+2,sinal*(-1),pi+(sinal*4/cont));
else return pi;
}

QString recursividade::EX6_i()
{
    float cont;
    int sinal=1;
    float soma=0;
    QString texto="O valor do EX 6 interativo é: ";
    for(cont=1;cont<=102;cont+=2)
    {
        soma+=sinal*1/pow(cont,3);
        sinal*=-1;

    }
    return texto + QString::number(cbrt(soma*32));
}

float recursividade::EX6_r(float cont,int sinal, float pi)
{
   if(cont<102)
   {
       return EX6_r(cont+2,sinal*(-1),pi+(sinal*1/pow(cont,3)));
   }
   else return cbrt(pi*32);
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

QString recursividade::EX1_r(int cont)
{

    if(cont <= num)
        return QString::number(cont) + "  " + EX1_r(cont+1);
    else return "} ";
}

QString recursividade::EX2_i()
{
    QString Saida="Os pares são {";
    int i;
    for(i=1; i<=num; i++){
        if(i%2==0) Saida+=QString::number(i)+"  ";
    }
    Saida+="}";
    return Saida;
}

QString recursividade::EX2_r(int cont)
{
if( cont<=num)
    if(cont%2==0)return QString::number(cont) + "  "+EX2_r(cont+1);
    else return(EX2_r(cont+1));
else return "}";
}
}
