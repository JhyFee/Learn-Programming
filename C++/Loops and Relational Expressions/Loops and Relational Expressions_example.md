1. forloop.cpp

    ```c++
    // forloop.cpp  -- introducing the for loop
    #include <iostream>
    int main()
    {
        using namespace std;
        int i;      // create a counter
    //      initialize; test; update
        for (i = 0; i < 5; i++)
            cout << "C++ knows loops.\n";
        cout << "C++ konws when to stop.\n";
        return 0;
    }
    ```
    > Output:\
C++ knows loops.\
C++ knows loops.\
C++ knows loops.\
C++ knows loops.\
C++ knows loops.\
C++ konws when to stop.

2. num_test.cpp
    
    ```c++
    // num_test.cpp -- use numeric test in for loop
    #include <iostream>
    int main()
    {
        using namespace std;
        cout << "Enter the starting countdown value: ";
        int limit;
        cin >> limit;
        int i;
        for (i = limit; i; i--)     // quits when i is 0
            cout << "i = " << i << "\n";
        cout << "Done now that i = " << i << "\n";
        return 0;
    }
    ```
    > Output:\
    Enter the starting countdown value: 4\
    i = 4\
    i = 3\
    i = 2\
    i = 1\
    Done now that i = 0

3. express.cpp

    ```c++
    // express.cpp -- values of expressions
    #include <iostream>
    int main()
    {
        using namespace std;
        int x;
        
        cout << "The expression x = 100 has the value ";
        cout << (x = 100) << endl;
        cout << "Now x = " << x << endl;
        cout << "The expression x < 3 has the value ";
        cout << (x < 3) << endl;
        cout << "The expression x > 3 has the value ";
        cout << (x > 3) << endl;
        cout.self(ios_base::boolalpha);     // a newer C++ feature
        cout << "The expression x < 3 has the value ";
        cout << (x < 3) << endl;
        cout << "The expression x > 3 has the value ";
        cout << (x > 3) << endl;
        return 0;
    }
    ```
    > Output:\
    The expression x = 100 has the value 100\
    Now x = 100\
    The expression x < 3 has the value 0\
    The expression x > 3 has the value 1\
    The expression x < 3 has the value false\
    The expression x > 3 has the value true

4. formore.cpp

    ```c++
    // formore.cpp  -- more looping with for
    #include <iostream>
    const int ArSize = 16;      // example of external declaration
    int main()
    {
        long long factorials[ArSize];
        factorials[1] = factorials[0] = 1LL;
        for (int i = 2; i < ArSize; i++)
            factorials[i] = i * factorials[i-1];
        for (int i = 0; i < ArSize; i++)
            std::cout << i << "! = " << factorials[i] << std::endl;
        return 0;
    }
    ```
    > Output:\
    0! = 1\
    1! = 1\
    2! = 2\
    3! = 6\
    4! = 24\
    5! = 120\
    6! = 720\
    7! = 5040\
    8! = 40320\
    9! = 362880\
    10! = 3628800\
    11! = 39916800\
    12! = 479001600\
    13! = 6227020800\
    14! = 87178291200\
    15! = 1307674368000

5. bigstep.cpp
    
    ```c++
    // bigstep.cpp  -- count as directed
    #include <iostream>
    int main()
    {
        using std::cout;    // a using declaration
        using std::cin;
        using std::endl;
        cout << "Enter an integer: ";
        int by;
        cin >> by;
        cout << "Counting by " << by << "s:\n";
        for (int i = 0; i < 100; i = i + by)
            cout << i << endl;
        return 0;
    }
    ```
    > Output:\
    Enter an integer: 16\
    Counting by 16s:\
    0\
    16\
    32\
    48\
    64\
    80\
    96

6. forstr1.cpp

    ```c++
    // forstr1.cpp  -- using for with a string
    #include <iostream>
    #include <string>
    int main()
    {
        using namespace std;
        cout << "Enter a word: ";
        string word;
        cin >> word;
        
        // display letters in reverse order
        for (int i = word.size() - 1; i >= 0; i--)
            cout << word[i];
        cout << "\nBye.\n";
        return 0;
    }
    ```
    > Output:\
    Enter a word: expression\
    noisserpxe\
    Bye.

7. plus_one.cpp

    ```c++
    // plus_one.cpp -- the increment operator
    #include <iostream>
    int main()
    {
        using std::cout;
        int a = 20;
        int b = 20;
        cout << "a   = " << a << ":   b = " << b << "\n";
        cout << "a++ = " << a++ << ": ++b = " << ++b << "\n";
        cout << "a   = " << a << ":   b = " << b << "\n";
        return 0;
    }
    ```
    > Output:\
    a   = 20:   b = 20\
    a++ = 20: ++b = 21\
    a   = 21:   b = 21

8. block.cpp

    ```c++
    // block.cpp -- use a block statement
    #include <iostream>
    int main()
    {
        using namespace std;
        cout << "The Amazing Accounto will sum and average ";
        cout << "five numbers for you.\n";
        cout << "Please enter five values:\n";
        double number;
        double sum = 0.0;
        for (int i = 1; i <=5; i++)
        {                               // block starts here
            cout << "Value " << i << ": ";
            cin >> number;
            sum +=number;
        }                               // block ends here
        cout << "Five exquisite choices indeed! ";
        cout << "They sum to " << sum << endl;
        cout << "and average to " << sum / 5 << ".\n";
        cout << "The Amazing Accounto bids you adieu!\n";
        return 0;
    }
    ```
    > Output:\
    The Amazing Accounto will sum and average five numbers for you.\
    Please enter five values:\
    Value 1: 1111\
    Value 2: 1112\
    Value 3: 1111\
    Value 4: 1117\
    Value 5: 1111\
    Five exquisite choices indeed! They sum to 5562\
    and average to 1112.4.\
    The Amazing Accounto bids you adieu!

9. forstr2.cpp
    
    ```c++
    // forstr2.cpp -- reversing an array
    #include <iostream>
    #include <string>
    int main()
    {
        using namespace std;
        cout << "Enter a word: ";
        string word;
        cin >> word;
        
        // physically modify string object
        char temp;
        int i, j;
        for (j = 0, i = word.size() - 1; j < i; --i, ++j)
        {
            temp = word[i];
            word[i] = word[j];
            word[j] = temp;
        }
        cout << word << "\nDone\n";
        return 0;
    }
    ```
    > Output:\
    Enter a word: intersting\
    gnitsretni\
    Done

10. equal.cpp

    ```c++
    // equal.cpp    -- equality vs assignment
    #include <iostream>
    int main()
    {
        using namespace std;
        int quizscores[10] =
            { 20, 20, 20, 20, 20, 19, 20, 18, 20, 20 };
        
        cout << "Doing it right:\n";
        int i;
        for (i = 0; quizscores[i] == 20; i++)
            cout << "quiz " << i << " is a 20\n";
        // warning: you may prefer reading about this program
        // to actually running it.
        /*
        cout << "Doing it dangerously wrong:\n";
        for (i = 0; quizscores[i] = 20; i++)
            cout << "quiz " << i << " is a 20\n";
        */
        return 0;
    }
    ```
    > Output:\
    Doing it right:\
    quiz 0 is a 20\
    quiz 1 is a 20\
    quiz 2 is a 20\
    quiz 3 is a 20\
    quiz 4 is a 20

11. compstr1.cpp

    ```c++
    // compstr1.cpp -- comparing strings using arrays
    #include <iostream>
    #include <cstring>      // prototype for strcmp()
    int main()
    {
        using namespace std;
        char word[5] = "?ate";
        for (char ch = 'a'; strcmp(word, "mate"); ch++)
        {
            cout << word << endl;
            word[0] = ch;
        }
        cout << "After loop ends, word is " << word << endl;
        return 0;
    }
    ```
    > Output:\
    ?ate\
    aate\
    bate\
    cate\
    date\
    eate\
    fate\
    gate\
    hate\
    iate\
    jate\
    kate\
    late\
    After loop ends, word is mate

12. compstr2.cpp

    ```c++
    // compstr2.cpp -- comparing strings using arrays
    #include <iostream>
    #include <string>      // string class
    int main()
    {
        using namespace std;
        string word = "?ate";
        for (char ch = 'a'; word != "mate"; ch++)
        {
            cout << word << endl;
            word[0] = ch;
        }
        cout << "After loop ends, word is " << word << endl;
        return 0;
    }
    ```

13. while.cpp

    ```c++
    // while.cpp    -- introducing the while loop
    #include <iostream>
    const int ArSize = 20;
    int main()
    {
        using namespace std;
        char name[ArSize];
        cout << "Your first name pleas: ";
        cin >> name;
        cout << "Here is your name, verticalized and ASCIIized:\n";
        int i = 0;                  // start at beginning of string
        while (name[i] != '\0')     // process to end of string
        {
            cout << name[i] << ": " << int(name[i]) << endl;
            i++;                    // don't forget this step
        }
    }
    ```
    > Output:\
    Your first name pleas: Jhy\
    Here is your name, verticalized and ASCIIized:\
    J: 74\
    h: 104\
    y: 121

14. wating.cpp

    ```c++
    // waiting.cpp  -- using clock() in a time-delay loop
    #include <iostream>
    #include <ctime>    // describes clock() function, clock_t type
    int main()
    {
        using namespace std;
        cout << "Enter the delay time, in seconds: ";
        float secs;
        cin >> secs;
        clock_t delay = secs * CLOCKS_PER_SEC;  // convert to clock ticks
        cout << "starting\a\n";
        clock_t start = clock();
        while (clock() - start < delay)     // wait until time elapses
            ;
        cout << "done \a\n";                // note the semicolon
        return 0;
    }
    ```

15. dowhile.cpp
    
    ```c++
    // dowhile.cpp  -- exit-condition loop
    #include <iostream>
    int main()
    {
        using namespace std;
        int n;
        
        cout << "Enter numbers in the range 1-10 to find ";
        cout << "my favorite number\n";
        do
        {
            cin >> n;       // execute body
        } while (n != 7);   // then test
        cout << "Yes, 7 is my favorite.\n";
        return 0;
    }
    ```
    > Output:\
    Enter numbers in the range 1-10 to find my favorite number\
    8\
    9\
    3\
    7\
    Yes, 7 is my favorite.

16. textin1.cpp

    ```c++
    // textin1.cpp  -- reading chars with a while loop
    #include <iostream>
    int main()
    {
        using namespace std;
        char ch;
        int count = 0;      // use basic input
        cout << "Enter characters; enter # to quit:\n";
        cin >> ch;          // get a character
        while (ch != '#')   // test the character
        {
            cout << ch;     // echo the character
            ++count;        // count the character
            cin >> ch;      // get the next character
        }
        cout << endl << count << " characters read\n";
        return 0;
    }
    ```
    > Output:\
    Enter characters; enter # to quit:\
    test 123 # ccc vvv# \
    test123\
    7 characters read

17. textin2.cpp

    ```c++
    // textin2.cpp  -- using cin.get(char)
    #include <iostream>
    int main()
    {
        using namespace std;
        char ch;
        int count = 0;      
        cout << "Enter characters; enter # to quit:\n";
        cin.get(ch);        // use the cin.get(ch) function
        while (ch != '#')
        {
            cout << ch;
            ++count;
            cin.get(ch);      // use it again
        }
        cout << endl << count << " characters read\n";
        return 0;
    }
    ```
    > Output:\
    Enter characters; enter # to quit:\
    test 123 # ccc vvv#\
    test 123 \
    9 characters read

18. textin3.cpp

    ```c++
    // textin3.cpp  -- reading chars to end of file
    #include <iostream>
    int main()
    {
        using namespace std;
        char ch;
        int count = 0;      
        cout << "Enter characters; enter # to quit:\n";
        cin.get(ch);        // attempt to read a char
        while (ch.fail() == false) // test for EOF
        {
            cout << ch;
            ++count;
            cin.get(ch);
        }
        cout << endl << count << " characters read\n";
        return 0;
    }
    ```

19. textin4.cpp

    ```c++
    // testin4.cpp -- reading chars with cin.get()
    #inculde <iostream>
    int main(viod)
    {
        using namespace std;
        int ch;                 // should be int, not char
        in count = 0;
        
        while ((ch = cin.get()) != EOF) // test for end-of-file
        {
            cout.put(char(ch));
            ++count;
        }
        cout << endl << count << " characters read\n"
        return 0;
    }
    ```

20. nested.cpp

    ```c++
    // nested.cpp -- nested loops and 2-D array
    #include <iostream>
    const int Cities = 5;
    const int Years = 4;
    int main()
    {
        using namespace std;
        const char * cities[Cities] =   // array of pointers
        {
            "Gribble City",
            "Gribbletown",
            "New Gribble",
            "San Greibble",
            "Gribble Vista"
        };
        
        int maxtemps[Years][Cities] =   // 2-D array
        {
            {96, 100, 87, 101, 105},
            {96, 98, 91, 107, 104},
            {97, 101, 93, 108, 107},
            {98, 103, 95, 109, 108}
        };
        
        cout << "Maximum temperatures for 2008 - 2011\n\n";
        for (int city = 0; city < Cities; ++city)
        {
            cout << cities[city] << ":\t";
            for (int year = 0; year < Years; ++year)
                cout << maxtemps[year][city] << "\t";
            cout << endl;
        }
            // cin.get();
        return 0;
    }
    ```
    > Output:\
    Maximum temperatures for 2008 - 2011\
    \
    Gribble City:   96  96	97	98\
    Gribbletown:	100	98	101	103\
    New Gribble:	87	91	93	95\
    San Greibble:	101	107	108	109\
    Gribble Vista:	105	104	107	108	
