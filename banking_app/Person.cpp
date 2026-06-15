#include "Person.h"
#include <iostream>

using namespace std;

Person::Person() {
    this->Name       = "John";
    this->Surname    = "Doe";
    this->NrBankowy  = 0;
}

Person::Person(string name, string surname, int nrbankowy, Adres adres) {
    this->Name      = name;
    this->Surname   = surname;
    this->NrBankowy = nrbankowy;
    this->adres     = adres;
}

Person::Person(string name, string surname, int nrbankowy,
               int nru, string u, int kp, string m) {
    this->Name      = name;
    this->Surname   = surname;
    this->NrBankowy = nrbankowy;
    this->adres     = Adres(nru, u, kp, m);
}

void Person::setName(string name)       { this->Name      = name;    }
void Person::setSurname(string surname) { this->Surname   = surname; }
void Person::setNrBankowy(int nrb)      { this->NrBankowy = nrb;     }
void Person::setAdres(Adres adres)      { this->adres     = adres;   }
void Person::setAdres(int nru, string u, int kp, string m) {
    this->adres = Adres(nru, u, kp, m);
}

string Person::getName()     { return this->Name;      }
string Person::getSurname()  { return this->Surname;   }
int    Person::getNrBankowy(){ return this->NrBankowy; }
Adres  Person::getAdres()    { return this->adres;     }

void Person::display() {
    cout << "Klient: " << this->Name << " " << this->Surname << endl;
    cout << "Nr bankowy: " << this->NrBankowy << endl;
    this->adres.display();
}
