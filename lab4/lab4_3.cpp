#include <iostream>
// классификация возрастов

int main() {
    int age;  // определение типа переменной
    std::cout << "Введите возраст: ";
    std::cin >> age;
    // вывод классификации возраста с помощью оператора if
    if (age < 0) {
        std::cout << "Некоректный возраст\n";
    } else if (age <= 12) {
        std::cout << "Ребенок\n";
    } else if (age <= 17) {
        std::cout << "Подросток\n";
    } else if (age <= 64) {
        std::cout << "Взрослый\n";
    } else {
        std::cout << "Пожилой\n";
    }
    return 0;
}