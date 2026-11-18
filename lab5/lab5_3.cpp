#include <iostream>
// поиск n чисел фибоначчи
int main() {
    int n;
    std::cout << "Введите N: ";
    std::cin >> n;
    // long long чтобы хранить очень большие числа
    long long a = 0, b = 1;
    std::cout << "Первые " << n << " чисел Фибоначчи:\n";
    // поиск чисел фибоначчи с помощью цикла for
    for (int i = 0; i < n; ++i) {
        std::cout << a << " ";
        long long temp = a + b;
        a = b;
        b = temp;
    }
    std::cout << "\n";

    return 0;
}