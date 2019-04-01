// timeout.cpp  -- 输出格式化的时间
#include <iostream>
void format_time(int, int);
int main()
{
    std::cout << "Enter the number of hours: ";
    int hours;
    std::cin >> hours;
    std::cout << "Enter the number of minutes: ";
    int minutes;
    std::cin >> minutes;
    format_time(hours, minutes);
    return 0;
}

void format_time(int x, int y)
{
    std::cout << "Time: " << x << ":" << y << std::endl;
}