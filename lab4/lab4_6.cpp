#include <iostream>
// определение високосности года

int main() {
    // ввод года
    int year;
    std::cout << "Введите год: ";
    std::cin >> year;
    // проверка условий високосности года
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        std::cout << year << " - високосный год\n";
    } else {
        std::cout << year << " - не високосный год\n";
    }
    return 0;
}