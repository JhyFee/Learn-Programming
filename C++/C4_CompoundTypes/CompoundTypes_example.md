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
> Output：\
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
> Output：\
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
> Output：\
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
> Output：\
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
> Output：\
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
> Output：\
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
> Output：\
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
> Output：\
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

9. strtype3.cpp

```c++
// strtype3.cpp -- more string class features
#include <iostream>
#include <string>               // make string class available
#include <cstring>              // C-style string library
int main()
{
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";
    
    // assignment for string objects and character arrays
    str1 = str2;                // copy str2 to str1
    strcpy(charr1, charr2);     // copy charr2 to charr1
    
    // appending for string objects and character arrays
    str1 += " paste";           // add paste to end of str1
    strcat(charr1, " juice");   // add juice to end of charr1
    
    // finding the length of string object and a C-style string
    int len1 = str1.size();     // obtain length of str1
    int len2 = strlen(charr1);  // obtain length of charr1
    
    cout << "The string " << str1 << " contains "
         << len1 << " characters.\n";
    cout << "The string " << charr1 << " contains "
         << len2 << " characters.\n";

    return 0;
}
```
> Output：\
The string panther paste contains 13 characters.\
The string jaguar juice contains 12 characters.

10. strtype4.cpp

```c++
// strsype4.cpp -- line input
#include <iostream>
#include <string>               // make string class available
#include <cstring>              // C-style string library
int main()
{
    using namespace std;
    char charr[20];
    string str;
    
    cout << "Length of string in charr before input: "
         << strlen(charr) << endl;
    cout << "Length of string in str before input: "
         << str.size() << endl;
    cout << "Enter a line of text:\n";
    cin.getline(charr, 20);     // indicate maximum length
    cout << "You entered: " << charr << endl;
    cout << "Enter another line of text:\n";
    getline(cin, str);          // cin now an argument; no length specifier
    cout << "You entered: " << str << endl;
    cout << "Length of string in charr after input: "
         << strlen(charr) << endl;
    cout << "Length of string in str after input: "
         << str.size() << endl;
    
    return 0;
}
```
> Output：\
Length of string in charr before input: 0\
Length of string in str before input: 0\
Enter a line of text:\
txt log dbf\
You entered: txt log dbf\
Enter another line of text:\
iso zip gz\
You entered: iso zip gz\
Length of string in charr after input: 11\
Length of string in str after input: 10

11. structur.cpp

```c++
// structur.cpp -- a simple structure
#include <iostream>
struct inflatable       // structure declaration
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable guest = 
    {
        "Glorious Gloria",  // name value
        1.88,               // volume value
        29.99               // price value
    };  // guest is a structure variable of type inflatable
    // It's initialized to the indicated values
    inflatable pal =
    {
        "Audacious Arthur",
        3.12,
        32.99
    };  // pal is a second variable of type inflatable
    // NOTE: some implementations require using
    // static inflatable guest =
    
    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";
    // pal.name is the name member of the pal variable
    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";
    return 0;
}
```
> Output：\
Expand your guest list with Glorious Gloria and Audacious Arthur!\
You can have both for $62.98!

12. assgn_st.cpp

```c++
// assgn_st.cpp -- assigning structures
#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatable bouquet =
    {
        "sunflowers",
        0.20,
        12.49
    };
    inflatable choice;
    cout << "bouquet: " << bouquet.name << " for $";
    cout << bouquet.price << endl;
    
    choice = bouquet;       // assign structure to another
    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl;
    return 0;
}
```
> Output：\
bouquet: sunflowers for $12.49\
choice: sunflowers for $12.49

13. arrstruc.cpp

```c++
// arrstruc.cpp -- an array of structures
#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatable guests[2] =              // initializing an array of structs
    {
        {"Bambi", 0.5, 21.99},          // first structure in array
        {"Godzilla", 2000, 565.99}      // next structure in array
    };
    
    cout << "The guests " << guests[0].name << " end " << guests[1].name
         << "\nhave a combined volume of "
         << guests[0].volume + guests[1].volume << " cubic feet.\n";
    return 0;
}
```
> Output：\
The guests Bambi end Godzilla\
have a combined volume of 2000.5 cubic feet.

14. address.cpp

```c++
// address.cpp  -- using the & operator to find address
#include <iostream>
int main()
{
    using namespace std;
    int donuts = 6;
    double cups= 4.5;
    
    cout << "donuts value = " << donuts;
    cout << " and donuts address = " << &donuts << endl;
    // NOTE: you may need to use unsigned (&donuts)
    // and unsigned (&cups)
    cout << "cups value = " << cups;
    cout << " and cups address = " << &cups << endl;
    return 0;
}
```
> Output：\
donuts value = 6 and donuts address = 0x7ffc7e12c35c\
cups value = 4.5 and cups address = 0x7ffc7e12c350

15. pointer.cpp

```c++
// pointer.cpp  -- our first pointer variable
#include <iostream>
int main()
{
    using namespace std;
    int updates = 6;            // declare a variable
    int * p_updates;            // declare pointer to an int
    p_updates = &updates;       // assign address of int to pointer
    
// express values two ways
    cout << "Values: updates = " << updates;
    cout << ", *p_updates = "<< *p_updates << endl;

// express address two ways
    cout << "Addresses: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;
// use pointer to change value
    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;
    return 0;
}
```
> Output：\
Values: updates = 6, *p_updates = 6\
Addresses: &updates = 0x7fff4716bbd4, p_updates = 0x7fff4716bbd4\
Now updates = 7

16. init_ptr.cpp

```c++
// init_ptr.cpp -- initialize a pointer
#include <iostream>
int main()
{
    using namespace std;
    int higgens = 5;
    int * pt = &higgens;
    
    cout << "Value of higgens = " << higgens
         << "; Address of higgens = " << &higgens << endl;
    cout << "Value of *pt = " << *pt
         << "; Address of pt = " << pt << endl;
    return 0;
}
```
> Output：\
Value of higgens = 5; Address of higgens = 0x7fff6d041234\
Value of *pt = 5; Address of pt = 0x7fff6d041234

17. use_new.cpp

```c++
// use_new.cpp  -- using the new operator
#include <iostream>
int main()
{
    using namespace std;
    int nights = 1001;
    int * pt = new int;             // allocate space for an int
    *pt = 1001;                     // store a value there
    
    cout << "nights value = ";
    cout << nights << ": location " << &nights << endl;
    cout << "int ";
    cout << "value = " << *pt << ": location = " << pt << endl;
    double * pd = new double;       // allocate space for a double
    *pd = 10000001.0;               // store a double there
    
    cout << "double ";
    cout << "value = " << *pd << ": location = " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;
    cout << "size of pt = " << sizeof(pt);
    cout << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof pd;
    cout << ": size of *pd = " << sizeof(*pd) << endl;
    return 0;
}
```
> Output: \
nights value = 1001: location 0x7ffd5daca744\
int value = 1001: location = 0x1ac2010\
double value = 1e+07: location = 0x1ac2030\
location of pointer pd: 0x7ffd5daca738\
size of pt = 8: size of *pt = 4\
size of pd = 8: size of *pd = 8

18. arraynew.cpp

```c++
// arraynew.cpp -- using the new operator for arrays
#include <iostream>
int main()
{
    using namespace std;
    double * p3 = new double [3];   // space for 3 doubles
    p3[0] = 0.2;                    // treat p3 like an array name
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << "p3[1] is " << p3[1] << " .\n";
    p3 = p3 + 1;                    // increment the pointer
    cout << "Now p3[0] is " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 -1;                     // point back to beginning
    delete [] p3;                   // free the memory
    return 0;
}
```
> Output: \
p3[1] is 0.5 .\
Now p3[0] is 0.5 and p3[1] is 0.8.

19. addpntrs.cpp

```c++
// addpntrs.cpp -- pointer addition
#include <iostream>
int main()
{
    using namespace std;
    double wages[3] = {10000.0, 20000.0, 30000.0};
    short stacks[3] = {3, 2, 1};
    
// Here are two ways to get the address of an array
    double * pw = wages;        // name of an array = address
    short * ps = &stacks[0];    // or use address operator
// with array element
    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw = pw + 1;
    cout << "add 1 to the pw pointer:\n";
    cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";
    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps = ps + 1;
    cout << "add 1 to the ps pointer:\n";
    cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";
    
    cout << "acess two elements with array notation\n";
    cout << "stacks[0] = " << stacks[0]
         << ", stacks[1] = " << stacks[1] << endl;
    cout << "*stacks = " << *stacks
         << ", *(stacks + 1) = " << *(stacks + 1) << endl;
    
    cout << sizeof(wages) << " = size of wages array\n";
    cout << sizeof(pw) << " = size of pw pointer\n";
    return 0;
}
```
> Output: \
pw = 0x7ffdbe62c2f0, *pw = 10000\
add 1 to the pw pointer:\
pw = 0x7ffdbe62c2f8, *pw = 20000\
\
ps = 0x7ffdbe62c2e0, *ps = 3\
add 1 to the ps pointer:\
ps = 0x7ffdbe62c2e2, *ps = 2\
\
acess two elements with array notation\
stacks[0] = 3, stacks[1] = 2\
*stacks = 3, *(stacks + 1) = 2\
24 = size of wages array\
8 = size of pw pointer

20. ptrstr.cpp

```c++
// ptrstr.cpp   -- using pointers to strings
#include <iostream>
#include <cstring>              // declare strlen(), strcpy()
int main()
{
    using namespace std;
    char animal[20] = "bear";   // animal holds bear
    const char * bird = "wren"; // bird holds address of string
    char * ps;                  // uninitialized
    
    cout << animal << " and ";  // display bear
    cout << bird << "\n";       // display wren
    // cout << ps << "\n";      // may display garbage, may cause a crash
    
    cout << "Enter a kind of animal: ";
    cin >> animal;              // ok if input < 20 chars
    // cin >> ps;  Too horrible a blunder to try; ps doesn't
    //              point to allocated space
    
    ps = animal;                // set ps to point to string
    cout << ps << "!\n";        // ok, same as using animal
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;
    
    ps = new char[strlen(animal) + 1];  // get new storage
    strcpy(ps, animal);         // copy string to new storage
    cout << "After using strcpy():\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;
    delete [] ps;
    return 0;
}
```
> Output: \
bear and wren\
Enter a kind of animal: dog\
dog!\
Before using strcpy():\
dog at 0x7ffdf66ce730\
dog at 0x7ffdf66ce730\
After using strcpy():\
dog at 0x7ffdf66ce730\
dog at 0x9dd010

21. newstrct.cpp

```c++
// newstrct.cpp -- using new with a structure
#include <iostream>
struct inflatable       // structure definition
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatable * ps = new inflatable;   // allot memory for structure
    cout << "Enter name of inflatable item: ";
    cin.get(ps->name, 20);              // method 1 for member access
    cout << "Enter volume in cubic feet: ";
    cin >> (*ps).volume;                // method 2 for member access
    cout << "Enter price: $";
    cin >> ps->price;
    cout << "Name: " << (*ps).name << endl;             // method 2
    cout << "Volume: " << ps->volume << " cubic feet\n";  // method 1
    cout << "Price: $" << ps->price << endl;            // method 1
    delete ps;                          // free memory used by structure
    return 0;
}
```
> Output: \
Enter name of inflatable item: test struct\
Enter volume in cubic feet: 13.2\
Enter price: $66.77\
Name: test struct\
Volume: 13.2 cubic feet\
Price: $66.77

22. delete.cpp

```c++
// delete.cpp   -- using the delete operator
#include <iostream>
#include <cstring>      // or string.h
using namespace std;
char * getname(void);   // function prototype
int main()
{
    char * name;        // create pointer but no storage
    
    name = getname();   // assign address of string to name
    cout << name << " at " << (int *) name << "\n";
    delete [] name;     // memory freed
    
    name = getname();   // reuse freed memory
    cout << name << " at " << (int *) name << "\n";
    delete [] name;     // memory freed again
    return 0;
}

char * getname()        // return pointer to new string
{
    char temp[80];      // temporary storage
    cout << "Enter last name: ";
    cin >> temp;
    char * pn = new char[strlen(temp) +1];
    strcpy(pn, temp);   // copy string into smaller space
    
    return pn;          // temp lost when function ends
}
```
> Output: \
Enter last name: Jhyqwertyu\
Jhyqwertyu at 0x96f010\
Enter last name: test\
test at 0x96f010

23. mixtypes.cpp

```c++
// mixtypes.cpp -- some type combinations
#include <iostream>

struct antarctica_years_end
{
    int year;
/* some really interesting data, etc. */
};

int main()
{
    antarctica_years_end s01, s02, s03;
    s01.year = 1998;
    antarctica_years_end * pa = &s02;
    pa->year = 1999;
    antarctica_years_end trio[3];   // array of 3 structures
    trio[0].year = 2003;
    std::cout << trio->year << std::endl;
    const antarctica_years_end * arp[3] = {&s01, &s02, &s03};
    std::cout << arp[1]->year << std::endl;
    const antarctica_years_end ** ppa = arp;
    auto ppb = arp;     // C++11 automatic type deduction
// or else use const antarctica_years_end ** ppb = arp;
    std::cout << (*ppa)->year << std::endl;
    std::cout << (*(ppb+1))->year << std::endl;
    return 0;
}
```
> Output:\
2003\
1999\
1998\
1999