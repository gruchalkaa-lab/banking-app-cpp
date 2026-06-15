#include "RachunekBiezacy.h"
#include <iostream>

using namespace std;

Rachunek::Rachunek() {
    this->NrRachunku   = 0;
    this->Saldo        = 0.0;
    this->DataOtwarcia = "01-01-2025";
}

Rachunek::Rachunek(int nrrachunku, double saldo, string dataOtwarcia,
                   string nazwa, Adres adres, Person person)
    : Bank(nazwa, adres, person) {
    this->NrRachunku   = nrrachunku;
    this->Saldo        = saldo;
    this->DataOtwarcia = dataOtwarcia;
}

Rachunek::Rachunek(int nrrachunku, double saldo, string dataOtwarcia,
                   string nazwa,
                   int nru, string u, int kp, string m,
                   string name, string surname, int nrbankowy)
    : Bank(nazwa, nru, u, kp, m, name, surname, nrbankowy) {
    this->NrRachunku   = nrrachunku;
    this->Saldo        = saldo;
    this->DataOtwarcia = dataOtwarcia;
}

void   Rachunek::setNrRachunku(int nrr)       { this->NrRachunku   = nrr;  }
void   Rachunek::setSaldo(double saldo)        { this->Saldo        = saldo; }
void   Rachunek::setDataOtwarcia(string data)  { this->DataOtwarcia = data;  }

int    Rachunek::getNrRachunku()  { return this->NrRachunku;   }
double Rachunek::getSaldo()       { return this->Saldo;        }
string Rachunek::getDataOtwarcia(){ return this->DataOtwarcia; }

void Rachunek::wplata(double kwota) {
    if (kwota <= 0) {
        cout << "Blad: kwota wplaty musi byc wieksza niz 0." << endl;
        return;
    }
    this->Saldo += kwota;
    cout << "Wplata: " << kwota << " PLN. Nowe saldo: " << this->Saldo << " PLN." << endl;
}

void Rachunek::wyplata(double kwota) {
    if (kwota <= 0) {
        cout << "Blad: kwota wyplaty musi byc wieksza niz 0." << endl;
        return;
    }
    if (kwota > this->Saldo) {
        cout << "Blad: niewystarczajace saldo. Dostepne: " << this->Saldo << " PLN." << endl;
        return;
    }
    this->Saldo -= kwota;
    cout << "Wyplata: " << kwota << " PLN. Nowe saldo: " << this->Saldo << " PLN." << endl;
}

void Rachunek::display() {
    Bank::display();
    cout << "Nr rachunku: " << this->NrRachunku << endl;
    cout << "Saldo:       " << this->Saldo << " PLN" << endl;
    cout << "Otwarty:     " << this->DataOtwarcia << endl;
}
