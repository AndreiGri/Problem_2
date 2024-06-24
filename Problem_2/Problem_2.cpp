#include <iostream>

int main()
{
    system("color 80");
    system("chcp 1251>nul");

    int arr[]{ 2, 7, 11, 15, 32, 74, -1 };
    int sum = 81;
    int res = 0;
    int e = 0;
    int s = 0;

    for (int i = 0; i < (sizeof(arr) / sizeof(*arr)) - 1; i++)
    {
        for (int j = i + 1; j < (sizeof(arr) / sizeof(*arr)); j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                std::cout << " Числа: " << arr[i] << " и " << arr[j] << std::endl;
                e = i;
                s = j;
                break;
            }
        }
    }

    std::cout << " С индексами: " << e << " и " << s << std::endl;
    std::cout << " В сумме составят: " << sum << std::endl;

    system("pause>nul");
    return 0;
}