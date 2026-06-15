#include "Adres.h"
#include <iostream>

using namespace std;

Adres::Adres() {
    this->NrUlicy     = 1;
    this->Ulica       = "Konwaliowa";
    this->KodPocztowy = 80000;
    this->Miejscowosc = "Gdansk";
}

Adres::Adres(int nru, string u, int kp, string m) {
    this->NrUlicy     = nru;
    this->Ulica       = u;
    this->KodPocztowy = kp;
    this->Miejscowosc = m;
}

void Adres::setNrUlicy(int nru)      { this->NrUlicy     = nru; }
void Adres::setUlica(string u)       { this->Ulica       = u;   }
void Adres::setKodPocztowy(int kp)   { this->KodPocztowy = kp;  }
void Adres::setMiejscowosc(string m) { this->Miejscowosc = m;   }

int    Adres::getNrUlicy()    { return this->NrUlicy;     }
string Adres::getUlica()      { return this->Ulica;       }
int    Adres::getKodPocztowy(){ return this->KodPocztowy; }
string Adres::getMiejscowosc(){ return this->Miejscowosc; }

void Adres::display() {
    cout << "Adres: ul. " << this->Ulica << " " << this->NrUlicy
         << ", " << this->KodPocztowy
         << " " << this->Miejscowosc << endl;
}
