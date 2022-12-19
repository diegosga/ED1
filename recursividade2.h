#ifndef RECURSIVIDADE2_H
#define RECURSIVIDADE2_H
#include <math.h>
#include<QString>
#include <cstdlib>
#include <ctime>
namespace dsg {


class recursividade2
{
private:
    int num;
    int tamanho;
    int *vetor;
public:

    recursividade2();
    ~recursividade2();
    QString EX1I();
    int EX1R(int cont, int soma);
    QString EX2I();
    QString EX2R(QString resultado, int cont);
    QString EX3I();
    QString EX3R(int i,int menor);
    QString EX4_i();
    int EX4R(int numero);
    QString EX5_i(int n1, int n2);
    int EX5_r(int n1, int n2, int pot, int cont);
    QString EX6_i(int n1, int n2);
    int EX6_r(int n1, int n2, int multi, int cont);
    int getNum() const;
    void setNum(int newNum);
};
}

#endif // RECURSIVIDADE2_H
