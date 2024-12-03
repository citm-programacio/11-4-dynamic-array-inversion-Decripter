#include <iostream>
using namespace std;
#include <string>

class Array
{
private:
    string* matriz = new string [0];
    int tamano=0;
public:
    Array() {};
    void agregar(string palabra)
    {
        matriz = ampliar(matriz);
        matriz[tamano] = palabra;
        tamano++;
    };

    string* ampliar(string* matriz)
    {
        string* nuevo = new string[tamano + 1];
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
            cout << matriz[i] << " | ";
        };
    };

    void invertir()
    {
        cout <<endl<< "invirtiendo: " << endl;

        string* aux = new string[tamano];
        for (int i = 0; i < tamano; i++)
        {
            aux[i] = matriz[tamano-1-i];
        };
        matriz = aux;
    };
};


int main()
{
    Array test;
    string a = "Uno";
    string b = "Dos";
    string c = "Tres";
    string d = "Cuatro";

    test.agregar(a);
    test.agregar(b);
    test.agregar(c);
    test.agregar(d);

    test.imprimir();

    test.invertir();
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