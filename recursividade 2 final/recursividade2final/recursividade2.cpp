#include "recursividade2.h"
namespace dsg {
recursividade2::recursividade2():vetor(0)
{

}

recursividade2::~recursividade2()
{if(vetor) delete [] vetor;

}
QString recursividade2::EX1I()
{
    int soma=0;
for(int i=0; i<=num;i++){
    soma+=pow(i,3);
}
QString texto="A soma dos cubos é ";
return texto + QString::number(soma);
}



int recursividade2::EX1R(int cont,int soma)
{

if(cont<=num)EX1R(cont+1,soma+=pow(cont,3));
else return soma;
}

QString recursividade2::EX2I()
{
QString resultado="A ORDEM DECRESCENTE É: ";
for(int i= num;i>=0;i--){
    resultado+=QString::number(i)+ " ";
}
return resultado;
}

QString recursividade2::EX2R(QString resultado,int cont)
{
if(cont>=0)return EX2R(resultado+=QString::number(cont)+" ",cont-1);
else return resultado;
}

QString recursividade2::EX3I()
{
    unsigned seed=time(0);
    srand(seed);
    int vet[5];
    int menor=0;
    QString saida="Os valores são ";
    for(int i=0; i<=5;i++){
        vet[i]=rand()%100;
        saida+=QString::number(vet[i])+ " ";

    }
    menor=vet[0];
    for(int i=0; i<=5;i++){
        if(vet[i]<menor) menor=vet[i];
    }
    return saida+"O menor é "+QString::number(menor);
}

QString recursividade2::EX3R(int i,int menor)
{
    srand(time(0));
    vetor=new int [num];
    for(int i=0;i<num;i++){
        vetor[i]=rand()%101;

    }
    QString Saida= "os numeros são: ";
    for(int i=0;i<num;i++){
        Saida+=QString::number(vetor[i])+" ";
    }
    if(i<num){
        if(menor>vetor[i])return EX3R(i+1,menor=vetor[i]);
        else return EX3R(i+1,menor);
    }else return Saida+"O menor é "+QString::number(menor);
}

QString recursividade2::EX4_i()
{

     int binario[10];
     QString bin="O numero digitado em binario é ";
     int i = 0;
     int aux=num;
     while (aux > 0) {

         binario[i] = aux % 2;
         aux = aux / 2;
         i++;
     }

     for (int j = i - 1; j >= 0; j--){
         bin+=QString::number( binario[j]);
 }
    return bin;
}

int recursividade2::EX4R(int numero)
{

    if(numero==0)return 0;
    else return numero%2+10*EX4R(numero/2);
}

QString recursividade2::EX5_i(int n1, int n2)
{
    int pot=1;
        for(int i=1; i<=n2;i++){
            pot*=n1;
        }
        if(n1==0 and n2==0)pot=0;
        return "A potencia é "+QString::number(pot);
}

int recursividade2::EX5_r(int n1, int n2, int pot, int cont)
{
    if(n1==0 and n2==0)pot=0;
    if(cont<=n2) return EX5_r(n1,n2,pot*=n1,cont+=1);
    else return pot;
}

QString recursividade2::EX6_i(int n1, int n2)
{
    int multi=0;
    for(int i=1; i<=n2; i++){
        multi+=n1;
    }
    return "A multiplicação dos numeros é "+QString::number(multi);
}

int recursividade2::EX6_r(int n1, int n2, int multi, int cont)
{
    if(cont<=n2)return EX6_r(n1, n2, multi+=n1,cont+=1);
    else return multi;
}

int recursividade2::getNum() const
{
    return num;
}

void recursividade2::setNum(int newNum)
{
    num = newNum;
}
}
