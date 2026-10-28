#include <algorithm>
#include <iostream>

int main() {
    int a, b, c;
    std::cout << "Введите три числа: ";
    std::cin >> a >> b >> c;
    std::cout << "Максимум: " << std::max({a, b, c}) << "\n";
    return 0;
}