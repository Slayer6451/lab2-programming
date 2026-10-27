#include <iostream>
// Функция вычисления квадрата числа на python
auto square(int x) -> int {
return x * x;
}
int main() {
// Униформ-инициализация
auto num{887};
// Вызов функции
auto result = square(num);
std::cout << "Число: " << num << std::endl;
std::cout << "Квадрат: " << result << std::endl;
return 0;
}
