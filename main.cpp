#include <iostream>
#include "Adres.h"
#include "Person.h"
#include "Bank.h"
#include "RachunekBiezacy.h"

using namespace std;

int main() {

    cout << "=== TEST 1: Adres ===" << endl;
    Adres a1;
    a1.display();

    Adres a2(15, "Dluga", 80001, "Gdansk");
    a2.display();

    cout << "\n=== TEST 2: Person ===" << endl;
    Person p1;
    p1.display();

    Person p2("Anna", "Kowalska", 123456, a2);
    p2.display();

    Person p3("Jan", "Nowak", 789012, 5, "Morska", 80200, "Gdynia");
    p3.display();

    cout << "\n=== TEST 3: Bank ===" << endl;
    Bank b1;
    b1.display();

    Bank b2("Bank Gdanski", a2, p2);
    b2.display();

    cout << "\n=== TEST 4: Rachunek biezacy ===" << endl;
    Rachunek r1;
    r1.display();

    Rachunek r2(1001, 5000.00, "01-06-2025", "Bank Gdanski", a2, p2);
    r2.display();

    cout << "\n=== TEST 5: Operacje na rachunku ===" << endl;
    r2.wplata(1500.00);
    r2.wyplata(200.00);
    r2.wyplata(10000.00);  // blad - za malo srodkow
    r2.wplata(-100.00);    // blad - ujemna kwota

    cout << "\n=== STAN KONCOWY ===" << endl;
    r2.display();

    return 0;
}
