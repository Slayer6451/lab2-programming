#include <cmath>
#include <iomanip>
#include <iostream>
// табуляция функции

int main() {
    // вывод текста x sin x
    std::cout << std::setw(8) << "x" << std::setw(10) << "sin(x)" << "\n";
    std::cout << std::string(20, '-') << "\n";
    std::cout << std::fixed << std::setprecision(4);
    // цикл for для повышения переменной на пи/10
    for (int i = 0; i <= 10; ++i) {
        double x = i * M_PI / 10;
        double y = std::sin(x);
        std::cout << std::setw(8) << x << std::setw(10) << y << "\n";
    }
    return 0;
}