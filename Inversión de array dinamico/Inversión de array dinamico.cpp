#include <iostream>
using namespace std;
#include <string>

class Array
{
private:
    int tamano = 1;
    string* matriz = new string [1];

public:
    Array() {};

    void agregar(string palabra)
    {
        matriz = ampliar(matriz, tamano);
        tamano++;
    };

    string* ampliar(string* matriz, int tamano)
    {
        int tamano2 = tamano++;
        string* nuevo = new string[tamano2];

        for (int i = 0; i < tamano; i++)
        {
            nuevo[i] = matriz[i];
        };
        return nuevo;
    };

    void imprimir()
    {
        for (int i = 0; i < tamano; i++)
        {
            cout << matriz[i] << "  ";
        };
        cout << endl << "tamano matriz: " << tamano << endl;
    };

};



int main()
{
    Array test;
    string x = "pinga";
    string c = "cachumba";


    test.agregar(x);
    test.agregar(c);
    test.imprimir();

   
   

};

/*
========================================================================================================================
  MMP""MM""YMM `7MM"""Mq.  `YMM'   `MM'    `7MMF'  `7MMF'      db      `7MM"""Mq.  `7MM"""Yb.   `7MM"""YMM  `7MM"""Mq.
  P'   MM   `7   MM   `MM.   VMA   ,V        MM      MM       ;MM:       MM   `MM.   MM    `Yb.   MM    `7    MM   `MM.
       MM        MM   ,M9     VMA ,V         MM      MM      ,V^MM.      MM   ,M9    MM     `Mb   MM   d      MM   ,M9
       MM        MMmmdM9       VMMP          MMmmmmmmMM     ,M  `MM      MMmmdM9     MM      MM   MMmmMM      MMmmdM9
       MM        MM  YM.        MM           MM      MM     AbmmmqMA     MM  YM.     MM     ,MP   MM   Y  ,   MM  YM.
       MM        MM   `Mb.      MM           MM      MM    A'     VML    MM   `Mb.   MM    ,dP'   MM     ,M   MM   `Mb.
     .JMML.    .JMML. .JMM.   .JMML.       .JMML.  .JMML..AMA.   .AMMA..JMML. .JMM..JMMmmmdP'   .JMMmmmmMMM .JMML. .JMM.
==========================================================================================================================
*/