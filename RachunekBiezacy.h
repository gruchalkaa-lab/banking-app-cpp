#pragma once
#include <iostream>
#include <string>
#include "Bank.h"

using namespace std;

class Rachunek : public Bank {
    int NrRachunku;
    double Saldo;
    string DataOtwarcia;

public:
    Rachunek();
    Rachunek(int nrrachunku, double saldo, string dataOtwarcia,
             string nazwa, Adres adres, Person person);
    Rachunek(int nrrachunku, double saldo, string dataOtwarcia,
             string nazwa,
             int nru, string u, int kp, string m,
             string name, string surname, int nrbankowy);

    void setNrRachunku(int nrr);
    void setSaldo(double saldo);
    void setDataOtwarcia(string data);

    int    getNrRachunku();
    double getSaldo();
    string getDataOtwarcia();

    void wplata(double kwota);
    void wyplata(double kwota);

    void display();
};
