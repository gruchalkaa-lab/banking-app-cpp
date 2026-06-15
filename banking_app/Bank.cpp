#include "Bank.h"
#include <iostream>

using namespace std;

Bank::Bank() {
    this->Nazwa  = "Default Bank";
}

Bank::Bank(string nazwa, Adres adres, Person person) {
    this->Nazwa  = nazwa;
    this->adres  = adres;
    this->person = person;
}

Bank::Bank(string nazwa,
           int nru, string u, int kp, string m,
           string name, string surname, int nrbankowy) {
    this->Nazwa  = nazwa;
    this->adres  = Adres(nru, u, kp, m);
    this->person = Person(name, surname, nrbankowy, nru, u, kp, m);
}

string Bank::getName()  { return this->Nazwa;  }
Adres  Bank::getAdres() { return this->adres;  }
Person Bank::getPerson(){ return this->person; }

void Bank::display() {
    cout << "=== Bank: " << this->Nazwa << " ===" << endl;
    this->adres.display();
    this->person.display();
}
