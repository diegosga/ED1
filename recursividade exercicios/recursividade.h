#ifndef RECURSIVIDADE_H
#define RECURSIVIDADE_H
#include <QString>
#include<math.h>
namespace dsg{
class recursividade
{
private:
    int num;
public:
    recursividade();
    QString EX1_i();
    QString EX1_r(int cont);
    QString EX2_i();
    QString EX2_r(int cont);
    int getNum() const;
    void setNum(int newNum);
    QString EX3_i();
    QString EX3_r(int cont);
    QString EX4_i();
    int EX4_r(int cont);
    QString EX5_i();
    float EX5_r(float cont,int sinal, float pi);
    QString EX6_i();
    float EX6_r(float cont, int sinal, float pi);
};
}

#endif // RECURSIVIDADE_H
