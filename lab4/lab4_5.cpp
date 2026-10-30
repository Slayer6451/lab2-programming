#include <iomanip>  // Необходимо для std::setprecision
#include <iostream>
// калькулятор с выбором операции
int main() {
    double a, b;
    char operation;
    // ввод чисел и выбор операции
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Введите операцию (+, -, *, /): ";
    std::cin >> operation;

    std::cout << std::fixed << std::setprecision(2);
    // вывод результатов  с помощью switch на основе выбранной операции
    switch (operation) {
        case '+':
            std::cout << "Результат: " << a + b << "\n";
            break;
        case '-':
            std::cout << "Результат: " << a - b << "\n";
            break;
        case '*':
            std::cout << "Результат: " << a * b << "\n";
            break;
        case '/':
            if (b == 0) {
                std::cout << "Ошибка: деление на ноль!\n";
            } else {
                std::cout << "Результат: " << a / b << "\n";
            }
            break;
        default:
            std::cout << "Неизвестная операция\n";
    }

    return 0;
}