#include <iostream>
#include "negoney.h"
#include "robot.h"

//forma mais pratica de trocar o nome da classe****


using namespace std;

int main()
{

    negoney lego;

    /*Estado orientacao;      //não reconhece a biblioteca robot.h****
    lego.setNivelBateria(100);
    lego.setNumeroMotores(3);
    lego.setNumeroSensores(4);
    orientacao.x = 2;
    orientacao.y = 3;
    orientacao.theta = 45;
    lego.setOrientacao(orientacao);
    lego.getNumeroMotores();
    lego.getNumeroSensores();
    lego.getOrientacao();*/

    lego.setEstrategias(6);
    lego.setPosicaoinicial(1);
    lego.setRaioroda(3.3);
    lego.setReducao(31);
    lego.setTamrampa(5);
    lego.setValorK(1.5);
    lego.getEstrategias();
    lego.getPosicaoinicial();
    lego.getTamrampa();
    lego.getRaioroda();
    lego.getReducao();
    lego.getValork();

    return 0;
}
