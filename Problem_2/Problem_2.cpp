#include <iostream>

void calculation_of_the_largest_sum(int s, int& first, int& second, int* arr)      // Метод вычисляет заказанную сумму двух чисел любой
{                                                                                  // последовательности, выводит эти числа в консоль
    for (int i = 0; i < sizeof(arr) - 1; i++)                                      // и присваивает переменным переданным по ссылке
    {                                                                              // значения индексов вышеуказанных чисел в массиве
        for (int j = i + 1; j < sizeof(arr); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                std::cout << " Числа: " << arr[i] << " и " << arr[j] << std::endl;
                first = i;
                second = j;
                break;
            }
        }
    }
}

int main()
{
    system("color 80");
    system("chcp 1251>nul");

    int arr[]{ 2, 7, 11, 15, 32, 74, -1 };                                         // Инициализируем массив
    int sum = 14;                                                                  // Заказанное число
    int f = 0;                                                                     // Инициализируем переменную для записи индекса первого числа
    int s = 0;                                                                     // Инициализируем переменную для записи индекса второго числа

    calculation_of_the_largest_sum(sum, f, s, arr);                                // Вызываем метод передав ему необходимые значения

    std::cout << " С индексами: " << f << " и " << s << std::endl;                 // Выводим в консоль индексы найденных чисел
    std::cout << " В сумме составят: " << sum << std::endl;                        // Выводим в консоль искомую сумму

    system("pause>nul");
    return 0;
}