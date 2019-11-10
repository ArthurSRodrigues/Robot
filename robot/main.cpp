#include <iostream>
#include "robot.h"

using namespace std;

int main()
{
    Robot negoney;
    Estado orientacao;
    negoney.setNivelBateria(100);
    negoney.setNumeroMotores(3);
    negoney.setNumeroSensores(4);
    orientacao.x = 2;
    orientacao.y = 3;
    orientacao.theta = 45;
    negoney.setOrientacao(orientacao);
    negoney.getNumeroMotores();
    negoney.getNumeroSensores();
    negoney.getOrientacao();
    negoney.~Robot();
    return 0;
}
