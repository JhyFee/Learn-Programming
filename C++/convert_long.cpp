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