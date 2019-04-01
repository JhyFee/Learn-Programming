// convert_light.cpp  -- 光年转换
#include <iostream>
int lightoast(double);
int main()
{
    std::cout << "Enter the number of light years: ";
    double lyears;
    std::cin >> lyears;
    std::cout << lyears << " light years = " << lightoast(lyears)
              << " astronomical untis." << std::endl;
    return 0;
}

int lightoast(double year)
{
    int asts = year * 63240;
    return asts;
}