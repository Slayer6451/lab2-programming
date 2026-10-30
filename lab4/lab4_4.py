from math import *
# решение квадратного уравнения

#ввод данных
a = float(input("Введите a: "))
b = float(input("Введите b: "))
c = float(input("Введите c: "))
if a == 0: # проверка квадратности уравнения
    print("Это линейное уравнение")
else:
    D = b**2 - 4 * a * c # вычисления дискриминанта
    if D > 0:
        x1 = (-b + sqrt(D)) / (2 * a)
        x2 = (-b - sqrt(D)) / (2 * a)
        print(f"Ответ: {x1:.2f}, {x2:.2f}")
    elif D == 0:
        x = -b / (2 * a)
        print(f"Ответ: {x:.2f}")
    else:
        print("Нет корней")
