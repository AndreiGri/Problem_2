#include <iostream>

void calculation_of_the_largest_sum(int s, int& first, int& second, int* arr)
{
    for (int i = 0; i < sizeof(arr) - 1; i++)
    {
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

    int arr[]{ 2, 7, 11, 15, 32, 74, -1 };
    int sum = 14;
    int res = 0;
    int f = 0;
    int s = 0;

    calculation_of_the_largest_sum(sum, f, s, arr);

    std::cout << " С индексами: " << f << " и " << s << std::endl;
    std::cout << " В сумме составят: " << sum << std::endl;

    system("pause>nul");
    return 0;
}