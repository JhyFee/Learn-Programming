// ourfunc.cpp --defining your own function
#include <iostream>
void simon(int);        // simon()函数原型

int main()
{
    using namespace std;
    simon(3);           // 调用simon()函数
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    simon(count);       // 再次调用
    cout << "Done!" << endl;
    return 0;
}

void simon(int n)       // 定义simon()函数
{
    using namespace std;
    cout << "Simon says touch your toes " << n << " times." << endl;

}                       // void函数不需要返回语句