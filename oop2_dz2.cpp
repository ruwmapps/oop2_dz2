// oop2_dz2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>

struct deposit {
    int number;
    std::string  name; 
    double balance;
};

void newDeposit(deposit &dep) {
    std::cout << "Введите номер счёта: ";
    std::cin >> dep.number;
    std::cout << "Введите имя владельца: ";
    std::cin >> dep.name;
    std::cout << "Введите баланс: ";
    std::cin >> dep.balance;
}

void upBalance(deposit *dep) {
    std::cout << "Введите новый баланс: ";
    std::cin >> dep -> balance;
}

void getDeposit(deposit dep) {

    std::cout << "Ваш счёт: " << dep.name << ", " << dep.number << ", " << dep.balance << std::endl;
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    deposit dep1;

    newDeposit(dep1);

    upBalance(&dep1);

    getDeposit(dep1);
}