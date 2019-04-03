1. arrayone.cpp

```c++
// arrayone.cpp     -- small arrays of integers
#include <iostream>
int main()
{
    using namespace std;
    int yams[3];        // creates array with three elements
    yams[0] = 7;        // assign value to first element
    yams[1] = 8;
    yams[2] = 6;
    
    int yamcosts[3] = {20, 30, 5}; // create, initialize array
    // NTOE: if your C++ compiler or translator can't initialize
    // this array, use static int yamcosts[3] instead of 
    // int yamcosts[3]
    
    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << " yams costs ";
    cout << yamcosts[1] << " cents per yam.\n";
    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    cout << "The total yam expense is " << total << " cents.\n";
    
    cout << "\nSize of yams array = " << sizeof yams;
    cout << " bytes.\n";
    cout << "Size of one element = " << sizeof yams[0];
    cout << " bytes.\n";
    return 0;
}
```
> 输出：\
Total yams = 21\
The package with 8 yams costs 30 cents per yam.\
The total yam expense is 380 cents.\
\
Size of yams array = 12 bytes.\
Size of one element = 4 bytes.

2. strings.cpp

```c++
// strings.cpp -- storing strings in an array
#include <iostream>
#include <cstring>      // for the strlen() function
int main()
{
    using namespace std;
    const int Size = 15;
    char name1[Size];           // empty array
    char name2[Size] = "C++owboy";           // initialized array
    // NOTE: some implementation may require the static keyword
    // to initialized the array name2
    
    cout << "Howdy! I'm " << name2;
    cout << "! What's your name?\n";
    cin >> name1;
    cout <<"Well, " << name1 << ", your name has ";
    cout << strlen(name1) << " letter and is stored\n"
    cout << "in an array of " << sizeof(name1) << "bytes.\n";
    cout << "Your initial is " << name1[0] << ".\n";
    name2[3] = '\0';            // set to null character
    cout << "Here are the first 3 character of my name: ";
    cout << name2 << endl;
    return 0;
}
```
> 输出：\
Howdy! I'm C\++owboy! What's your name?\
JhyFee\
Well, JhyFee, your name has 6 letter and is stored\
in an array of 15bytes.\
Your initial is J.\
Here are the first 3 character of my name: C++

3. instr1.cpp

```c++
// instr1.cpp   -- reading more than one string
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];
    
    cout << "Enter your name:\n";
    cin >> name;
    cout << "Enter your favorite dessert:\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}
```
> 输出：\
Enter your name:\
Jhy Fee\
Enter your favorite dessert:\
I have some delicious Fee for you, Jhy.

4. instr2.cpp

```c++
// instr2.cpp   -- reading more than one word with getline
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];
    
    cout << "Enter your name:\n";
    cin.getline(name, ArSize);  // reads through newline
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, ArSize);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}
```
> 输出：\
Enter your name:\
Jhy Fee\
Enter your favorite dessert:\
raisin cake\
I have some delicious raisin cake for you, Jhy Fee.

5. instr3.cpp

```c++
// instr3.cpp   -- reading more than one word with get() & get()
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];
    
    cout << "Enter your name:\n";
    cin.get(name, ArSize).get();  // reads string, newline
    cout << "Enter your favorite dessert:\n";
    cin.get(dessert, ArSize).get();
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}
```
> 输出：\
Enter your name:\
Jhy Fee\
Enter your favorite dessert:\
raisin cake\
I have some delicious raisin cake for you, Jhy Fee.

6. numstr.cpp

```c++
// numstr.cpp   -- following number input with line input
#include <iostream>
int main()
{
    using namespace std;
    cout << "What year was your house built?\n";
    int year;
    cin >> year;
    cin.get();
    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address, 80);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";
    return 0;
}
```
> 输出：\
What year was your house built?\
1888\
What is its street address?\
345\
Year built: 1888\
Address: 345\
Done!

7. strtype1.cpp

```c++
// strtype.cpp  -- using the C++ string class
#include <iostream>
#include <string>               // make string class available
int main()
{
    using namespace std;
    char charr1[20];            // create an empty array
    char charr2[20] = "jaguar"; // create an initialized array
    string str1;                // create an empty string object
    string str2 = "panther"     // create an initialized string
    
    cout << "Enter a kind of feline: ";
    cin >> charr1;
    cout << "Enter another kind of feline: ";
    cin >> str1;                // use cin for input
    cout << "Here are some felines:\n";
    cout << charr1 << " " << charr2 << " "
         << str1 << " " << str2 // use cout for output
         << endl;
    cout << "The third letter in " << charr2 << " is "
         << charr2[2] << endl;
    cout << "The third letter in " << str2 << " is "
         << "str2[2]" << endl;  // use array notation
 
    return 0;
}
```
> 输出：\
Enter a kind of feline: ocelot\
Enter another kind of feline: tiger\
Here are some felines:\
ocelot jaguar tiger panther\
The third letter in jaguar is g\
The third letter in panther is n

8. stetype2.cpp

```c++
// strtype2.cpp --  assigning, adding and appending
#include <iostream>
#include <string>               // make string class available
int main()
{
    using namespace std;
    string s1 = "penguin";
    string s2, s3;
    
    cout << "You can  assign on string object to another: s2 = s1\n";
    s2 = s1;
    cout << "s1: " << s1 << " , s2: " << s2 << endl;
    cout << "You can assign a C-type string to a string object.\n";
    cout << "s2 = \"buzzard\"\n";
    s2 = "buzzard";
    cout << "s2: " << s2 << endl;
    cout << "You can concatenate strings: s3 = s1 + s2\n";
    s3 = s1 + s2;
    cout << "s3: " << s3 << endl;
    cout << "You can append strings.\n";
    s1 += s2;
    cout << "s1 += s2 yields s1 = " << s1 << endl;
    s2 += " for a day";
    cout << "s2 += \" for a day\" yields s2 = " << s2 << endl;
    
    return 0;
} 
```
> 输出：\
You can  assign on string object to another: s2 = s1\
s1: penguin , s2: penguin\
You can assign a C-type string to a string object.\
s2 = "buzzard"\
s2: buzzard\
You can concatenate strings: s3 = s1 + s2\
s3: penguinbuzzard\
You can append strings.\
s1 += s2 yields s1 = penguinbuzzard\
s2 += " for a day" yields s2 = buzzard for a day

9. strtype.cpp



