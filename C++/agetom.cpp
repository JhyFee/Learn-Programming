// agetom.cpp  -- 年龄转换月份
#include <iostream>
int agetomon(int);

int main()
{
    std::cout << "Enter your age: ";
    int age;
    std::cin >> age;
    int month;
    month = agetomon(age);
    std::cout << "So, your age is " << month << " months." << std::endl;
    return 0;
}

int agetomon(int ages)
{
    int months = 12 * ages;
    return months;
}