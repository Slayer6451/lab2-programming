#include <iostream>
// проверка палиндрома

int main() {
    // ввод числа и переменных
    int n;
    std::cout << "Введите число: ";
    std::cin >> n;
    int original = n;
    int revers = 0;
    int temp = n;
    while (temp > 0) {  // нахождения обратного числа
        int digit = temp % 10;
        revers = revers * 10 + digit;
        temp /= 10;
    }
    if (original == revers) {
        std::cout << original << " - палиндром\n";

    } else {
        std::cout << original << " - не палиндром\n";
    }
    return 0;
}