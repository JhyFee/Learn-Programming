1. if.cpp

    ```c++
    // if.cpp -- using the if statement
    #include <iostream>
    int main()
    {
        using std::cin;
        using std::cout;
        char ch;
        int spaces;
        int total = 0;
        cin.get(ch);
        while (ch != '.')   // quit at end of sentence
        {
            if (ch == ' ')  // check if ch is a space
                ++spaces;
            ++total;        // done every time
            cin.get(ch);
        }
        cout << spaces << " spaces, " << total;
        cout << " characters total in sentence\n";
        return 0;
    }
    ```
    >Output:\
    If more people valued home above gold, this world would be a merrier place.\
    13 spaces, 74 characters total in sentence
2. ifelse.cpp

    ```c++
    // ifelse.cpp -- using the if else statement
    #include <iostream>
    int main()
    {
        char ch;
        
        std::cout << "Type, and I shall repeat.\n";
        std::cin.get(ch);
        while (ch != '.')
        {
            if (ch == '\n')
                std::cout << ch;        // done if newline
            else
                std::cout << ++ch;      // done otherwise
            std::cin.get(ch);
        }
    // try ch + 1 instead of ++ch for interesting effect
        std::cout << "\nPlease excuse the slight confusion.\n"
            // std::cin.get();
            // std::cin.get();
        return 0;
    }
    ```
    >Output:\
    Type, and I shall repeat.\
    If more people valued home above gold\
    Jg!npsf!qfpqmf!wbmvfe!ipnf!bcpwf!hpme\
    this world would be a merrier place.\
    uijt!xpsme!xpvme!cf!b!nfssjfs!qmbdf\
    Please excuse the slight confusion.
3. ifelseif.cpp

    ```c++
    // ifelseif.cpp -- using if else if else
    #include <iostream>
    const int Fave = 27;
    int main()
    {
        using namespace std;
        int n;
        
        cout << "Enter a number in the range 1-100 to find ";
        cout << "my favorite number: ";
        do
        {
            cin >> n;
            if (n < Fave)
                cout << "Too low -- guess again: ";
            else if (n > Fave)
                cout << "Too high -- guess again: ";
            else
                cout << Fave << " is right!\n";
        } while (n !=Fave);
        return 0;
    }
    ```
    >Output:\
    Enter a number in the range 1-100 to find my favorite number: 50\
    Too high -- guess again: 25\
    Too low -- guess again: 35\
    Too high -- guess again: 30\
    Too high -- guess again: 27\
    27 is right!
4. or.cpp

    ```c++
    // or.cpp -- using the logical OR operator
    #include <iostream>
    int main()
    {
        using namespace std;
        cout << "This program may reformat your hard disk\n"
             "and destroy all your data.\n"
             "Do you wish to continue?<y/n> ";
        
        char ch;
        if (ch == 'y' || ch == 'Y')
            cout << "You were warned!\a\a\n";
        else if (ch == 'n' || ch == 'N')
            cout << "A wise choice ... bye\n";
        else
        cout << "That wasn't a y or n! Apparently you "
             "can't follow\ninstructions, so "
             "I'll trash your disk anyway.\a\a\a\n";
        return 0;
    }
    ```
5. and.cpp

    ```c++
    // and.cpp -- using the logical AND operator
    #include <iostream>
    const int ArSize = 6;
    int main()
    {
        using namespace std;
        float naaq[ArSize];
        cout << "Enter the NAAQs (New Age Awareness Quotients) "
             << "of\nyour neighbors. Program terminates "
             << "when you make\n" << ArSize << " entries "
             << "or enter a negative value.\n"
         
        int i = 0;
        float temp;
        cout << "First value: ";
        cin >> temp;
        while (i < Arsize && temp >= 0)     // 2 quitting criteria
        {
            naaq[i] = temp;
            ++i;
            if (i < ArSize)                 // room left in array
            {
                cout << "Next value: ";
                cin >> temp;                // so get next value
            }
        }
        if (i == 0)
            cout << "No data-bye\n";
        else
        {
            cout << "Enter your NAAQ: ";
            float you;
            cin >> you;
            int count = 0;
            for (int j = 0; j < i; j++)
                if (naaq[j] > you)
                    ++count;
            cout << count;
            cout << " of your neighbors have greater awareness of\n"
                 << "the New Age than you do.\n";
        }
        return 0;
    }
    ```
6. more_and.cpp

    ```c++
    // more_and.cpp -- using the logical AND operator
    #include <iostream>
    const char * qualify[4] =           // an array of pointers
    {                                   // to strings
        "10,000-meter race.\n",
        "mud tug-of-war.\n",
        "masters canoe jousting.\n",
        "pie-throwing festival.\n"
    };
    int main()
    {
        using namespace std;
        int age;
        cout << "Enter your age in years: ";
        cin >> age;
        int index;
        
        if (age > 17 && age < 35)
            index = 0;
        else if (age >= 35 && age < 50)
            index = 1;
        else if (age >= 50 && age < 65)
            index = 2;
        else
            index = 3;
        cout << "You qualify for the " << qualify[index];
        return 0;
    }
    ```
7. not.cpp

    ```c++
    // not.cpp -- using the not operator
    #include <iostream>
    #include <climits>
    bool is_int(double);
    int main()
    {
        using namespace std;
        double num;
        
        cout << "Yo, dude! Enter an interger value: ";
        cin >> num;
        while (!is_int(num))    // countinue while num is not int-able
        {
            cout << "Out of range -- please try again: ";
            cin >> num;
        }
        int val = int (num);    // type cast
        cout << "You've enterd the interger " << val << "\nBye\n";
        return 0;
    }
    
    bool is_int(double x)
    {
        if (x <= INT_MAX && x >= INT_MIN)   // using climits values
            return true;
        else
            return false;
    }
    ```
    >Output:\
    Yo, dude! Enter an interger value: 777777777777777777777777777\
    Out of range -- please try again: -21311111123123123\
    Out of range -- please try again: 1233456789\
    You've enterd the interger 1233456789\
    Bye
8. cctypes.cpp

    ```c++
    // cctypes.cpp -- using the ctype.h library
    #include <iostream>
    #include <cctype>               // prototypes for character functions
    int main()
    {
        using namespace std;
        cout << "Enter text for analysis, and type @"
                " to terminate input.\n"
        char ch;
        int whitespace = 0;
        int digits = 0;
        int chars = 0;
        int punct = 0;
        int others = 0;
        
        cin.get(ch);                // get first character
        while (ch != '@')           // test for sentinel
        {
            if (isalpha(ch))        // is it an alphabetic character?
                chars++;
            else if (isspace(ch))   // is it a whitespace character?
                whitespace++;
            else if (isdigit(ch))   // is it a digit?
                digits++;
            else if (ispunct(ch))   // is it punctuation?
                punct++;
            else
                others++;
            cin.get(ch);            // get next character
        }
        cout << chars << " letters, "
             << whitespace << " whitespaces, "
             << digits << " digits, "
             << punct << " punctuations, "
             << others << " others.\n";
        return 0;
    }
    ```
9. condit.cpp

    ```c++
    // condit.cpp -- using the conditional operator
    #include <iostream>
    int main()
    {
        using namespace std;
        int a, b;
        cout << "Enter two integers: ";
        cin >> a >> b;
        cout << "The larger of " << a << " and " << b;
        int c = a > b ? a : b;      // c = a if a > b, else c = b
        cout << " is " << c << endl;
        return 0;
    }
    ```
    >Output:\
    Enter two integers: 25 30\
    The larger of 25 and 30 is 30
10. switch.cpp

    ```c++
    // switch.cpp -- using the switch statement
    #include <iostream>
    using namespace std;
    void showmenu();        // function prototype
    void report();
    void comfort();
    int main()
    {
        showmenu();
        int choice;
        cin >> choice;
        while (choice != 5)
        {
            switch(choice)
            {
                case 1  :   cout << "\a\n";
                            break;
                case 2  :   report();
                            break;
                case 3  :   cout << "The boss was in all day.\n";
                            break;
                case 4  :   comfort();
                            break;
                default :   cout << "That's not a choice.\n";
            }
            showmenu();
            cin >> choice;
        }
        cout << "Bye!\n";
        return 0;
    }
    
    void showmenu()
    {
        cout << "Please enter 1, 2, 3, 4, or 5:\n"
                "1) alarm           2) report\n"
                "3) alibi           4) comfort\n"
                "5) quit\n";
    }
    void report()
    {
        cout << "It's been an excellent week for business.\n"
                "Sales are up 120%. Expenses are down 35%.\n"
    }
    void comfort()
    {
        cout << "Your employees think you are the finest CEO\n"
                "in the industry. The board of directors think\n"
                "you are the finest CEO in the industry.\n"
    }
    ```
11. enum.cpp

    ```c++
    // enum.cpp -- using enum
    #include <iostream>
    // create named constants for 0 - 6
    enum {red, orange, yellow, green, blue, violet, indigo};
    
    int main()
    {
        using namespace std;
        cout << "Enter color code (0-6): ";
        int code;
        cin >> code;
        while (code >= red && code <= indigo)
        {
            switch(code)
            {
                case red    : cout << "Her lips were red.\n"; break;
                case orange : cout << "Her hair was orange.\n"; break;
                case yellow : cout << "Her shoes were yellow.\n"; break;
                case green  : cout << "Her nails were green.\n"; break;
                case blue   : cout << "Her sweatsuit were blue.\n"; break;
                case violet : cout << "Her eyes were violet.\n"; break;
                case indigo : cout << "Her mood was indigo.\n"; break;
            }
            cout << "Enter color code(0-6): ";
            cin >> code;
        }
        cout << "Bye\n";
        return 0;
    }
    ```
    >Output:\
    Enter color code (0-6): 3\
    Her nails were green.\
    Enter color code(0-6): 9\
    Bye
12. jump.cpp

    ```c++
    // jump.cpp -- using continue and break 
    #include <iostream>
    const int ArSize = 80;
    int main()
    {
        using namespace std;
        char line[ArSize];
        int spaces = 0;
        
        cout << "Enter a line of text:\n";
        cin.get(line, ArSize);
        cout << "Complete line:\n" << line << endl;
        cout << "Line through first period:\n";
        for (int i = 0; line[i] != '\0'; i++)
        {
            cout << line[i];	// display character
            if (line[i] == '.') // quit if it's a period
                break;
            if (line[i] != ' ') // skip rest of loop
                continue;
            spaces++;
        }
        cout << "\n" << spaces << " spaces\n";
        cout << "Done.\n";
        return 0;
    }
    ```
    >Output:\
    Enter a line of text:\
    **There's a hope that's waiting for you in the dark. You should know you're beautiful just the way you are.**\
    Complete line:\
    There's a hope that's waiting for you in the dark. You should know you're beaut\
    Line through first period:\
    There's a hope that's waiting for you in the dark.\
    9 spaces\
    Done.
13. cinfish.cpp

    ```c++
    // cinfish.cpp -- non-numeric input terminates loop
    #include <iostream>
    const int Max = 5;
    int main()
    {
        using namespace std;
    // get data
        double fish[Max];
        cout << "Please enter the weights of your fish.\n";
        cout << "You may enter up to " << Max
                << " fish <q to terminate>.\n";
        cout << "fish #1: ";
        int i = 0;
        while (i < Max && cin >> fish[i]) {
            if (++i < Max)
                cout << "fish #" << i+1 << ": ";
        }
    // calculate average
        double total = 0.0;
        for (int j = 0; j < i; j++)
            total += fish[j];
    // report results
        if (i == 0)
            cout << "No fish\n";
        else
            cout << total / i << " = average weight of "
                 << i << " fish\n";
        cout << "Done.\n";
        return 0;
    }
    ```
    >Output:\
    Please enter the weights of your fish.\
    You may enter up to 5 fish \<q to terminate>.\
    fish #1: 44\
    fish #2: 55\
    fish #3: 33\
    fish #4: qa\
    44 = average weight of 3 fish\
    Done.
14. cingolf.cpp

    ```c++
    // cingolf.cpp -- non-numeric input skipped
    #include <iostream>
    const int Max = 5;
    int main()
    {
        using namespace std;
    // get data
        int golf[Max];
        cout << "Please enter your golf scores.\n";
        cout << "You must enter " << Max << " rounds.\n";
        int i;
        for (i = 0; i < Max; i++)
        {
            cout << "round #" << i+1 << ": ";
            while (!(cin >> golf[i])) {
                cin.clear();        // reset input
                while (cin.get() != '\n')
                    continue;       // get rid of bad input
                cout << "Please enter a number: ";
            }
        }
    // calculate average
        double total = 0.0;
        for (i = 0; i < Max; i++)
            total += golf[i];
    // report results
        cout << total / Max << " = average score "
             << Max << " rounds\n";
        return 0;
    }
    ```
    >Output:\
    Please enter your golf scores.\
    You must enter 5 rounds.\
    round #1: 88\
    round #2: 87\
    round #3: ?\
    Please enter a number: 111\
    round #4: 55\
    round #5: 77\
    83.6 = average score 5 rounds
15. outfile.cpp

    ```c++
    // outfile.cpp -- writing to a file
    #include <iostream>
    #include <fstream>              // for file I/O
    
    int main()
    {
        using namespace std;
        
        char automobile[50];
        int year;
        double a_price;
        double d_price;
        
        ofstream outFile;               // create object for output
        outFile.open("carinfo.txt");    // associate with a file
        
        cout << "Enter the make and model of automobile: ";
        cin.getline(automoble, 50);
        cout << "Enter the model year: ";
        cin >> year;
        cout << "Enter the original asking price: ";
        cin >> a_price;
        d_price = 0.913 * a_price;
    
    // display information on screen with cout
    
        cout << fixed;
        cout.precision(2);
        cout.setf(ios_base::showpoint);
        cout << "Make and model: " << automobile << endl;
        cout << "Year: " << year << endl;
        cout << "Was asking $" << a_price << endl;
        cout << "Now asking $" << d_price << endl;
        
    // now do exact same things using outFile instead of cout 
        
        outFile << fixed;
        outFile.precision(2);
        outFile.setf(ios_base::showpoint);
        outFile << "Make and model: " << automobile << endl;
        outFile << "Year: " << year << endl;
        outFile << "Was asking $" << a_price << endl;
        outFile << "Now asking $" << d_price << endl;
        
        outFile.close();            // done with file
        return 0;
    }
    ```
    >Output:\
    Enter the make and model of automobile: Flitz Perky\
    Enter the model year: 2009\
    Enter the original asking price: 13500\
    Make and model: Flitz Perky\
    Year: 2009\
    Was asking $13500.00\
    Now asking $12325.50
16. sumafile.cpp

    ```c++
    // sumafile.cpp -- functions with an array argument
    #include <iostream>
    #include <fstream>          // file I/O support
    #include <cstdlib>          // support for exit()
    const int SIZE = 60;
    int main()
    {
        using namespace std;
        char filename[SIZE];
        ifstream inFile;        // object for handling file input
        cout << "Enter name of data file: ";
        cin.getline(filename, SIZE);
        inFile.open(filename);  // associate inFile with a file
        if (!inFile.is_open())  // failed to open file
        {
            cout << "Could not open the file " << filename << endl;
            cout << "Program terminating.\n";
            exit(EXIT_FAILURE);
        }
        double value;
        double sum = 0.0;
        int count = 0;          // number of items read
        
        inFile >> value;        // get first value
        while (inFile.good())   // while input good and not at EOF
        {
            ++count;            // one more item read
            sum +=value;        // calculate running total
            inFile >> value;    // get next value
        }
        if (inFile.eof())
            cout << "End of file reached.\n";
        else if (inFile.fail())
            cout << "Input terminated by data mismatch.\n";
        else
            cout << "Input terminated for unknown reason.\n";
        if (count == 0)
            cout << "No data processed.\n";
        else
        {
            cout << "Items read: " << count << endl;
            cout << "Sum: " << sum << endl;
            cout << "Average: " << sum / count << endl;
        }
        inFile.close();         // finished with the file
        return 0;
    }
    ```
    >Output:\
    Enter name of data file: scores.txt\
    End of file reached.\
    Items read: 12\
    Sum: 204.5\
    Average: 17.0417
