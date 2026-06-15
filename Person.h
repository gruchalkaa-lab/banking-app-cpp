#pragma once
#include <iostream>
#include <string>
#include "Adres.h"

using namespace std;

class Person {
    string Name, Surname;
    int    NrBankowy;
    Adres  adres;

public:
    Person();
    Person(string name, string surname, int nrbankowy, Adres adres);
    Person(string name, string surname, int nrbankowy,
           int nru, string u, int kp, string m);

    void setName(string name);
    void setSurname(string surname);
    void setNrBankowy(int nrb);
    void setAdres(Adres adres);
    void setAdres(int nru, string u, int kp, string m);

    string getName();
    string getSurname();
    int    getNrBankowy();
    Adres  getAdres();

    void display();
};
