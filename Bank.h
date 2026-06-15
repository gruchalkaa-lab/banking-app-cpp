#pragma once
#include <iostream>
#include <string>
#include "Adres.h"
#include "Person.h"

using namespace std;

class Bank {
protected:
    string Nazwa;
    Adres  adres;
    Person person;

public:
    Bank();
    Bank(string nazwa, Adres adres, Person person);
    Bank(string nazwa,
         int nru, string u, int kp, string m,
         string name, string surname, int nrbankowy);

    string getName();
    Adres  getAdres();
    Person getPerson();

    void display();
};
