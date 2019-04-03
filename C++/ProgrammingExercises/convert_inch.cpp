// convert_inch.cpp         --  转换英寸为英尺
#include <iostream>
int main()
{
    using namespace std;
    const int Fts_per_ins = 12;         // 定义转换因子
    cout << "Please enter your height in inch:__\b\b";
    int ins;
    cin >> ins;
    int fts = ins / Fts_per_ins;
    int inches = ins % Fts_per_ins;
    cout << ins << " inches are "
         << fts << " feet and " << inches << " inches." << endl;
    return 0;
}