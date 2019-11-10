#include "robot.h"
#include <iostream>

using namespace std;
int M; int S; float bat; float a; float b; float ang;

Robot::Robot()
{
    numeroMotores = M;
    numeroSensores = S;
    bateria = bat;
    orientacao.x = a;
    orientacao.y = b;
    orientacao.theta = ang;
    cout << "Robo Criado" << endl;

}

int Robot::getNivelBateria() //fun��o que retorna o valor da bateria
{
    return bateria;
    //cout << bateria << endl;
}

int Robot::getNumeroMotores()//fun��o que retorna o numero de motores
{
    return numeroMotores;
    //cout << numeroMotores << endl;
}

int Robot::getNumeroSensores()//fun��o que retorna o numero de sensores
{
    return numeroSensores;
    //cout << numeroSensores << endl;
}
Estado Robot::getOrientacao() //fun��o que retorna a orienta��o
{
    return orientacao;

    //cout << "x = " << orientacao.x << endl;
    //cout << "y =  " << orientacao.y << endl;
    //cout << "Theta =  " << orientacao.theta << endl;
}
 void Robot::setNivelBateria(float bat) // altera o nivel da bateria
{
     this ->bateria = bat;
}
void Robot::setNumeroMotores(int M)//altera o n�mero de motores
{
    this ->numeroMotores = M;
}
void Robot::setNumeroSensores(int S)//altera o n�mero de sensores
{
    this ->numeroSensores = S;
}
 void Robot::setOrientacao(Estado)
{
    this -> orientacao.x = a;
    this -> orientacao.y = b;
    this -> orientacao.theta = ang;
}
/*Robot::~Robot()
{
    cout <<"Robo Destruido"<< endl;
}*/
