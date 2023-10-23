/*
Создать программу, позволяющую вводить имя и номер человека (людей) в виртуальную телефонную книгу, ёмксотью до 50 записей.
Реализовать также и удаление
*/


#include <iostream>
#include <string>
#include <vector>
#include <crussification.h> //Добавляем поддержку русского языка в консоль

int main()
{
    std::vector<std::string> name; //Будем записывать в переменную name[i] имя i-ого абонента в телефонной книге в формате строки
    std::vector<std::string> number; //Создаём аналогичную переменную для записи номера телефона i-го абонента
    std::string line; // Создаём переменную строкового типа для временного хранения информации, введённой пользователем
    int flag = 1; //Создаём переменную, которая будет отвечать за выбор пользователя в приведённом далее меню
    int k; //Создаём переменную, обозначающую индекс+1 обрабатываемого объекта
    while (flag > 0) {
        std::cout << _torus("\nВыберите желаемое действие:\n");
        std::cout << _torus("1 - Создать контакт абонента\n")
                  << _torus("2 - Изменить контакт абонента\n")
                  << _torus("3 - Удалить контакт абонента\n")
                  << _torus("0 - Выход\n") << std::endl;
        std::cin >> flag;
        switch (flag) {
            case 1: {
                std::cout << _torus("\nВведите информацию об абоненте в формате:\n")
                          << _torus("Имя\n")
                          << _torus("Номер телефона\n") << std::endl;
                std::cin >> line;
                name.push_back(line);
                std::cin >> line;
                number.push_back(line);
                break;
            }
            case 2: {
                std::cout << _torus("\nВведите номер контакта, который вы хотите изменить") << std::endl;
                std::cin >> k;
                std::cout << _torus("\nВыбран контакт:\n") << name[k-1] << std::endl << number[k-1] << std::endl;
                std::cout << std::endl;
                std::cout << _torus("1 - Продолжить\n")
                          << _torus("0 - Назад\n") << std::endl;
                bool f; //Создаём переменную, которая будет отвечать за выбор пользователя в приведённом ранее меню
                std::cin >> f;
                if (f == 0) {
                    break;
                }
                std::cout << _torus("\nВведите информацию об абоненте в формате:\n")
                          << _torus("Имя\n")
                          << _torus("Номер телефона\n") << std::endl;
                //Изменяем контакт абонента
                std::cin >> line;
                name[k-1] = line;
                std::cin >> line;
                number[k-1] = line;
                break;
            }
            case 3: {
                std::cout << _torus("\nВведите номер контакта, который вы хотите удалить") << std::endl;
                std::cin >> k;
                std::cout << _torus("\nВыбран контакт:\n") << name[k-1] << std::endl << number[k-1] << std::endl;
                std::cout << std::endl;
                std::cout << _torus("1 - Продолжить\n")
                          << _torus("0 - Назад\n") << std::endl;
                bool f;
                std::cin >> f;
                if (f == 0) {
                    break;
                }
                name.erase(name.cbegin() + k - 1); //Удаляем из name элемент с индексом = Итератор нулевого индекса name + номер контакта - 1
                number.erase(number.cbegin() + k - 1); //Удаляем из number элемент с индексом = Итератор нулевого индекса number + номер контакта - 1
                break;
            }
        }
        std::cout << _torus("\nБыла сформирована следующая телефонная книга:\n") << std::endl;
        for (int i = 0; i < name.size(); i++) {
            std::cout << _torus("Контакт №") << (i+1) << std::endl;
            std::cout << name[i] << std::endl;
            std::cout << number[i] << std::endl;
            std::cout << std::endl;
        }
    }
    name.clear();
    number.clear();
}
