#include <iostream>
#include <time.h>

int main()
{
    struct tm buf;
    time_t t = time(NULL);
    localtime_s(&buf, &t);
    int Today = buf.tm_mday;
    const int SIZE = 5;
    int MyArray[SIZE][SIZE];
    int TargetRow = Today / SIZE;
    int sum = 0;

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            MyArray[i][j] = i + j;
            std::cout << MyArray[i][j] << ' ';

            if (i == TargetRow)
            {
                sum += MyArray[i][j];
            }
        }
        std::cout << '\n';
    }

    std::cout << '\n';
    std::cout << "Today is the " << Today << "th\n";
    std::cout << "Array size is " << SIZE << '\n';
    std::cout << "It means we need " << TargetRow << " row\n";
    std::cout << "The sum of " << TargetRow << " row: " << sum << '\n';

    return 0;
}
