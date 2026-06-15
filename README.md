# Banking Account System — C++ OOP Project

A C++ object-oriented application simulating a basic bank account system. Built as part of postgraduate studies in Programming and Databases at Gdańsk University of Technology.

## Features

- Create and manage bank clients with addresses
- Create current accounts linked to a bank and a client
- Deposit and withdraw funds with input validation
- Display full account information

## Class Structure

```
Adres           — stores street address (street, number, postal code, city)
Person          — stores client data (name, surname, bank ID, address)
Bank            — stores bank data (name, address, primary client)
Rachunek        — inherits from Bank, adds account number, balance, and operations
```

**Inheritance:** `Rachunek` extends `Bank` (is-a relationship)  
**Composition:** `Bank` contains `Person`, `Person` contains `Adres` (has-a relationship)

## Concepts Demonstrated

- Object-oriented programming (classes, encapsulation, inheritance)
- Constructor overloading
- Getters and setters
- Input validation (deposit/withdrawal guards)
- Separation of interface (.h) and implementation (.cpp)

## How to Build

Requires a C++17 compiler (g++ or clang++).

```bash
g++ -std=c++17 main.cpp Adres.cpp Person.cpp Bank.cpp RachunekBiezacy.cpp -o banking_app
./banking_app
```

## Example Output

```
=== Bank: Bank Gdanski ===
Adres: ul. Dluga 15, 80001 Gdansk
Klient: Anna Kowalska
Nr bankowy: 123456

Nr rachunku: 1001
Saldo:       6300 PLN
Otwarty:     01-06-2025
```

## Author

Aleksandra Gruchała-Węsierska  
Postgraduate studies — Programming and Databases, Gdańsk University of Technology
