### 示例代码
1. myfirst.cpp
```c++
// myfirst.cpp -- 显示一条消息

#include <iostream>                             //预处理器指令

int main()                                      //函数头
{                                               //函数体起始
    using namespace std;                        //使定义可见
    cout << "Come up and C++ me some time.";    //消息
    cout << endl;                               //另起一行
    cout << "You won't regret it!" << endl;     //更多输出
    return 0;                                   //结束main()
}                                               //函数体结束
```
2. carrots.cpp
```c++
// carrots.cpp -- 食物处理程序
// 使用并显示一个变量

#include <iostream>

int main()
{
    using namespace std;

    int carrots;                                //声明一个整型变量

    carrots = 25;                               //给变量赋一个值
    cout << "I have ";
    cout << carrots;                            //显示变量的值
    cout << " carrots.";
    cout << endl;
    carrots = carrots - 1;                      //修改变量
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
    return 0;
}
```
3. getinfo.cpp
```c++
// getinfo.cpp --input and output
#include <iostream>

int main()
{
    using namespace std;

    int carrots;

    cout << "How many carrots do you have?" << endl;
    cin >> carrots;         // C++ input
    cout << "Here are two more. ";
    carrots = carrots + 2;
    // 下一行是输出
    cout << "Now you have " << carrots << " carrots." << endl;
    return 0;
}
```
4. sqrt.cpp
```c++
// sqrt.cpp -- 使用 sqrt()函数

#include <iostream>
#include <cmath>        // 或者 math.h

int main()
{
    using namespace std;

    double area;        // 实数型
    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side
         << " feet to the side." << endl;
    cout << "How fascinating!" << endl;
    return 0;
}
```
5. ourfunc.cpp
```c++
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
```
6. convert.cpp
```c++
// convert.cpp -- 将英石转换为磅
#include <iostream>
int stonetolb(int);     // 函数原型
int main()
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;
    return 0;
}

int stonetolb(int sts)
{
    return 14 * sts;
}
```
### 练习题
1. 编写一个C++程序，它显示您的姓名和地址。
```c++
// name_addr.cpp -- 显示名字和地址
#include <iostream>
int main()
{
    use namespace std;
    cout << "Name : JHY" << endl;
    cout << "Addr : jiufeng1801" << endl;
    return 0;
}
```
2. 编写一个C++程序，它要求用户输入一个以long为单位的距离，然后将它转换为码（一long等于220码）。
```c++
// convert_long.cpp -- 将long转换yard
#include <iostream>
int longtolb(int);
int main()
{
    using namespace std;
    int longs;     // long是关键字
    cout << "Enter the length in long: ";
    cin >> longs;
    int yard = longtolb(longs);
    cout << longs << " long = "
         << yard << " yard." << endl;
    return 0;
}

int longtolb(int sts)
{
    return 220 * sts;
}
```
3. 编写一个C++程序，它使用3个用户定义的函数（包括main()）,并生成下面的输出：
> Three blind mice\
Three blind mice\
See how they run\
See how they run

其中一个函数要调用两次，该函数生成前两行；另一个函数也被调用两次，并生成其余输出。
```c++
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
```
4. 编写一个程序，让用户输入年龄，然后显示该年龄包含多少个月，如下所示：
> Enter your age: 29
```c++
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
```
5. 编写一个程序，其中的main()调用一个用户自定义的函数（以摄氏温度值为参数，并返回相应的华氏温度值）。该程序按下面的格式要求用户输入摄氏温度值，并显示结果：
> Please enter a Celsius value: 20\
20 degrees Celsius is 68 degrees Fahrenheit.

下面是转换公式：
> 华氏温度 = 1.8 X 摄氏温度 + 32.0
```c++
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
```
6. 编写一个程序，其main()调用一个用户自定义的函数（以光年为参数，并返回对应天文单位的值）。该程序按下面的格式要求用户输入光年值，并显示结果：
> Enter the number of light years: 4.2\
4.2 light years = 265608 astronomical untis.

天文单位是从地球到太阳的平均距离（约 150000000 公里或 93000000 英里），光年是光一年走的距离（约 10万亿公里或 6万亿英里）（除太阳外，最近的恒星大约距离地球4.2光年）。请使用double类型，转换公式为：
> 1 光年 = 63240 天文单位
```c++
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
```
7. 编写一个程序，要求用户输入小时数和分钟数。在main()函数中，将两个值传递给一个void函数，后者以下面这样的格式显示这两个值：
> Enter the number of hours: 9\
Enter the number of minutes: 28\
Time: 9:28
```c++
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
```