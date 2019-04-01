// custom_out.cpp -- 三个自定义函数
#include <iostream>
void firstfunc();
void scondfunc();
int main()
{
    firstfunc();
    firstfunc();
    scondfunc();
    scondfunc();
    return 0;
}

void firstfunc()
{
    std::cout << "Three blind mice" << std::endl;
}

void scondfunc()
{
    std::cout << "See how they run" << std::endl;
}