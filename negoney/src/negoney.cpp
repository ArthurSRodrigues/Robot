#include "negoney.h"
#include <iostream>
#include <string>

using namespace std;


negoney::negoney()
{
    cout<< "Criacao realizada com sucesso"<< endl;
}

/*string negoney::getNome()
{
    return Nome;
}*/

int negoney::getEstrategias()
{
    //cout<< Estrategias << endl;
    return Estrategias;
}

bool negoney::getPosicaoinicial()
{
    //cout<< Posicaoinicial << endl;
    return Posicaoinicial;
}

float negoney::getTamrampa()
{
    //cout<< Tamrampa << endl;
    return Tamrampa;
}

float negoney::getRaioroda()
{
    //cout<< Raioroda << endl;
    return Raioroda;
}

float negoney::getValork()
{
    //cout<< Valork << endl;
    return Valork;
}

float negoney::getReducao()
{
    //cout<< Reducao << endl;
    return Reducao;
}

void negoney::setEstrategias(int E)
{
    this ->Estrategias = E;
}

/*void negoney::setNome(string N)
{
    this ->Nome = N;
}*/

void negoney::setPosicaoinicial(bool P)
{
    this -> Posicaoinicial = P;
}

void negoney::setRaioroda(float R)
{
    this -> Raioroda = R;
}

void negoney::setReducao(int Re)
{
    this -> Reducao = Re;
}

void negoney::setTamrampa(float Ra)
{
    this -> Tamrampa = Ra;
}

void negoney::setValorK(float K)
{
    this -> Valork = K;
}
negoney::~negoney()
{
    cout<< "Deletado com sucesso"<< endl;
}
