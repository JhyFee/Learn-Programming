### Programing Exercises
1. Write a short program that asks for your height in integer inches and then converts your height to feet and inches.Have the program use the underscore character to indicate where to type the response.Also use a const symbolic constant to repre- sent the conversion factor.

```c++
// convert_inch.cpp         -- converts height to feet and inches.
#include <iostream>
int main()
{
    using namespace std;
    const int Fts_per_ins = 12;         // conversion factor
    cout << "Please enter your height in inch:__\b\b";
    int ins;
    cin >> ins;
    int fts = ins / Fts_per_ins;
    int inches = ins % Fts_per_ins;
    cout << ins << " inches are "
         << fts << " feet and " << inches << " inches." << endl;
    return 0;
}
```
2. Write a short program that asks for your height in feet and inches and your weight in pounds.(Use three variables to store the information.) Have the program report your body mass index (BMI).To calculate the BMI,first convert your height in feet and inches to your height in inches (1 foot = 12 inches).Then convert your height in inches to your height in meters by multiplying by 0.0254.Then convert your weight in pounds into your mass in kilograms by dividing by 2.2.Finally,compute your BMI by dividing your mass in kilograms by the square of your height in meters.Use symbolic constants to represent the various conversion factors.

```c++
// convert_bmi.cpp          -- report your body mass index
#include <iostream>
int main()
{
    using namespace std;
    int fts, ins;
    float pds, kgs;
    double mts;
    
    const int Fts_per_ins = 12;
    const double Ins_per_mts = 0.0254;
    const float Pds_per_kgs = 2.2;
    
    cout << "Please enter your height in feet and inches " << endl;
    cout << "Feet:_\b";
    cin >> fts;
    cout << "Inches:_\b";
    cin >> ins;
    cout << "Please enter your weight in pounds " << endl;
    cout << "Pounds:__\b\b";
    cin >> pds;
    
    mts = ( fts * Fts_per_ins + ins ) * Ins_per_mts ;
    kgs = pds / Pds_per_kgs;
    float bmi = kgs / ( mts * mts );
    
    cout << "Your height is " << mts << " meters "
         << "and your weight is " << kgs << " kg." << endl;
    cout << "So , your BMI is " << bmi << "." << endl;
    return 0;
}
```
3. Write a program that asks the user to enter a latitude in degrees,minutes,and sec- onds and that then displays the latitude in decimal format.There are 60 seconds of arc to a minute and 60 minutes of arc to a degree;represent these values with sym- bolic constants.You should use a separate variable for each input value.A sample run should look like this:
> Enter a latitude in degrees, minutes, and seconds:\
First, enter the degrees: 37\
Next, enter the minutes of arc: 51\
Finally, enter the seconds of arc: 19\
37 degrees, 51 minutes, 19 seconds = 37.8553 degrees

```c++
// convert_lt.cpp   -- convert latitude
#include <iostream>
int main()
{
    using namespace std;
    int degs, mins, secs;
    float cdegs;
    const float Con_to_degs = 60;
    
    cout << "Enter a latitude in degrees, minutes, and seconds:\n";
    cout << "First, enter the degrees: ";
    cin >> degs;
    cout << "Next, enter the minutes of arc: ";
    cin >> mins;
    cout << "Finally, enter the seconds of arc: ";
    cin >> secs;
    
    cdegs = (secs / Con_to_degs + mins) / Con_to_degs + degs;
    
    cout << degs << " degrees, " << mins << " minutes, "
         << secs << " seconds = " << cdegs << endl;
    return 0;
}
```
4. Write a program that asks the user to enter the number of seconds as an integer value (use type long,or,if available, long  long) and that then displays the equiva- lent time in days,hours,minutes,and seconds.Use symbolic constants to represent the number of hours in the day,the number of minutes in an hour,and the number of seconds in a minute.The output should look like this:
> Enter the number of seconds: 31600000\
31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds

```c++
// convert_time.cpp -- displays the equivalent time in days,hours,minutes,and seconds.
#include <iostream>
int main()
{
    using namespace std;
    long long Sec;
    int secs, mins, hours, days;
    const int Con_to_time = 60;
    const int Con_to_days = 24;
    
    cout << "Enter the number of seconds: ";
    cin >> Sec;
    
    secs = Sec % Con_to_time;
    mins = Sec / Con_to_time % Con_to_time;
    hours = Sec / Con_to_time / Con_to_time % Con_to_days;
    days = Sec / Con_to_time / Con_to_time / Con_to_days;
    
    cout << Sec << " seconds = " << days << " days, "
         << hours << " hours, " << mins << " minutes, "
         << secs << " seconds." << endl;
    return 0;
}
```
5. Write a program that requests the user to enter the current world population and the current population of the U.S.(or of some other nation of your choice).Store the information in variables of type long  long.Have the program display the per- cent that the U.S.(or other nation’s) population is of the world’s population.The output should look something like this:
> Enter the world's population: 6898758899 \
Enter the population of the US: 310783781\
The population of the US is 4.50492% of the world population.


6. Write a program that asks how many miles you have driven and how many gallons of gasoline you have used and then reports the miles per gallon your car has gotten. Or,if you prefer,the program can request distance in kilometers and petrol in liters and then report the result European style,in liters per 100 kilometers.


7. Write a program that asks you to enter an automobile gasoline consumption figure in the European style (liters per 100 kilometers) and converts to the U.S.style of miles per gallon.Note that in addition to using different units of measurement,the U.S.approach (distance / fuel) is the inverse of the European approach (fuel / dis- tance).Note that 100 kilometers is 62.14 miles,and 1 gallon is 3.875 liters.Thus,19 mpg is about 12.4 l/100 km,and 27 mpg is about 8.7 l/100 km. 
