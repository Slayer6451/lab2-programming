#include <algorithm>
#include <iostream>
// определение максимального числа из трех чисел

int main() {
    int a, b, c;  // определение типа данных
    std::cout << "Введите три числа: ";
    std::cin >> a >> b >> c;
    std::cout << "Максимум: " << std::max({a, b, c}) << "\n";  // вывод максимального числа
    return 0;
}