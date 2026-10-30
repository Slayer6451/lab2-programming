#include <iostream>
// Определение четности числа

int main() {
    // ввод переменной типа int
    int num;
    std::cout << "Введите число: ";
    std::cin >> num;
    // определение четности с помощью остатка от деления
    if (num % 2 == 0) {
        std::cout << "Число " << num << " четное\n";
    } else {
        std::cout << "Число " << num << " нечетное\n";
    }
    return 0;
}