#include <iostream>
// сумма и произведение чисел

int main() {
    // ввод числа n
    int n;
    std::cout << "Введите N: ";
    std::cin >> n;

    long long sumNumbers = 0;
    long long factorial = 1;
    long long sumSquares = 0;
    // цикл for для находждения суммы факториала и суммы квадратов
    for (int i = 1; i <= n; ++i) {
        sumNumbers += i;
        factorial *= i;
        sumSquares += i * i;
    }

    std::cout << "Сумма: " << sumNumbers << "\n";
    std::cout << "Произведение: " << factorial << "\n";
    std::cout << "Сумма квадратов: " << sumSquares << "\n";

    return 0;
}