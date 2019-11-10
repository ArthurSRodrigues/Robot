#ifndef NEGONEY_H
#define NEGONEY_H
#include "robot.h"
#include <iostream>
#include <string>


class negoney
{
    private:
        //string Nome(); //dando erro com o uso do string*****
        int Estrategias;//numeoro de estratégias
        bool Posicaoinicial;// posição em pé ou deitado
        float Tamrampa;//tamanho da rampa
        float Raioroda;//tamanho  da roda
        int Reducao; //11(1-1) ou 31(3-1)
        float Valork; //valor k de proporção de angulo e distancia percorrida pela roda

    public:
        negoney();
        ~negoney();
        //string getNome();//recebe o nome do robô
        int getEstrategias();// recebe a quantidade de estratégias
        bool getPosicaoinicial();//em pé = 1 ou deitado = 0
        float getTamrampa(); // recebe o tamanho da rampa
        float getRaioroda(); // recebe o tamanho do raio da roda
        float getValork(); //recebe o valor de k
        float getReducao(); //receve o valor da redução

        //void setNome();//passa o nome do robô
        void setEstrategias(int);//Passa no numero de estrategias
        void setPosicaoinicial(bool);//Passa qual a posição inicial do robô
        void setTamrampa(float);//passa o tamanho da rampa
        void setRaioroda(float);//passa o valor do raio da roda
        void setReducao(int);//passa a proporção da redução
        void setValorK(float);//passa o valor de k



};

#endif // NEGONEY_H
