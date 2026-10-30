#классификация символа

#проверка является ли символ числом
def is_number(s):
    try:
        float(s)
        return True
    except ValueError:
        return False
x = input("Введите символ: ")
if x.isalpha(): # проверка является ли символ буквой
    print("это буква")
elif is_number(x):
    print("это число")
else:
    print("это другой символ")