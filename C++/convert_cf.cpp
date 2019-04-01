// convert_cf.cpp  -- 转换温度值
#include <iostream>
int ctof(int);
int main()
{
    std::cout << "Please enter a Celsius value: ";
    int C;
    std::cin >> C;
    std::cout << C << " degrees Celsius is " << ctof(C)
              << " degrees Fahrenheit." << std::endl;
    return 0;
}

int ctof(int c)
{
    int F = 1.8 * c + 32.0;
    return F;
}