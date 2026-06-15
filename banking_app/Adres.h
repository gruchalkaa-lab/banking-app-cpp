#pragma once
#include <iostream>
#include <string>

using namespace std;

class Adres {
    int    NrUlicy, KodPocztowy;
    string Ulica, Miejscowosc;

public:
    Adres();
    Adres(int nru, string u, int kp, string m);

    void setNrUlicy(int nru);
    void setUlica(string u);
    void setKodPocztowy(int kp);
    void setMiejscowosc(string m);

    int    getNrUlicy();
    string getUlica();
    int    getKodPocztowy();
    string getMiejscowosc();

    void display();
};
