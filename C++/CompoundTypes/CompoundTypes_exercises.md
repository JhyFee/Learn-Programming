### Programing Exercises
1. Write a C++ program that requests and displays information as shown in the following example of output:
    > What is your first name? Betty Sue\
What is your last name? Yewe\
What letter grade do you deserve? B\
What is your age? 22\
Name: Yewe, Betty Sue\
Grade: C\
Age: 22

    Note that the program should be able to accept first names that comprise more than one word.Also note that the program adjusts the grade downward--that is,up one letter. Assume that the user requests an A,a B,or a C so that you don’t have to worry about the gap between a D and an F.
    ```c++
    // str_exe1.cpp
    #include <iostream>
    int main()
    {
        using namespace std;
        const int ArSize = 20;
        char fn[ArSize];
        char ln[ArSize];
        char gd;
        int age;

        cout << "What is your first name? ";
        cin.getline(fn, ArSize);
        cout << "What is your last name? ";
        cin.getline(ln, ArSize);
        cout << "What letter grade do you deserve? ";
        cin >> gd;
        cin.get();
        cout << "What is your age? ";
        cin >> age;

        cout << "Name: " << ln << ", " << fn << "\n"
             << "Grade: " << char (gd + 1) << "\n"
             << "Age: " << age << endl;
        return 0;
    }
    ```
2. Rewrite Listing 4.4,using the C++ string class instead of char arrays.

    ```c++
    // str_exe2.cpp
    #include <iostream>
    #include <string>
    int main()
    {
        using namespace std;
        string name, dessert;
        
        cout << "Enter your name:\n";
        getline(cin, name);  // reads through newline
        cout << "Enter your favorite dessert:\n";
        getline(cin, dessert);
        cout << "I have some delicious " << dessert;
        cout << " for you, " << name << ".\n";
        return 0;
    }
    ```
3. Write a program that asks the user to enter his or her first name and then last name,and that then constructs,stores,and displays a third string,consisting of the user’s last name followed by a comma,a space,and first name. Use char arrays and functions from the cstring header file. A sample run could look like this:
    > Enter your first name: Flip\
Enter your last name: Fleming\
Here’s the information in a single string: Fleming, Flip

    ```c++
    // str_exe3.cpp
    #include <iostream>
    #include <cstring>
    int main()
    {
        using namespace std;
        char fn[20], ln[20];

        cout << "Enter your first name: ";
        cin >> fn;
        cout << "Enter your last name: ";
        cin >> ln;

        int Size = strlen(fn) + strlen(ln) + strlen(", ") + 1;
        char name[Size];
        strcpy(name, ln);
        strcat(name, ", ");
        strcat(name, fn);
        cout << "Here’s the information in a single string: "
             << name << endl;
        //cout << Size << endl;
        return 0;
    }
    ```
4. Write a program that asks the user to enter his or her first name and then last name,and that then constructs,stores,and displays a third string consisting of the user’s last name followed by a comma,a space,and first name. Use string objects and methods from the string header file. A sample run could look like this:
    > Enter your first name: Flip\
Enter your last name: Fleming\
Here’s the information in a single string: Fleming, Flip

    ```c++
    // str_exe4.cpp
    #include <iostream>
    #include <string>
    int main()
    {
        using namespace std;
        string fn, ln, name;
        
        cout << "Enter your first name: ";
        getline(cin, fn);
        cout << "Enter your last name: ";
        getline(cin, ln);
        name = ln + ", " + fn;
        cout << "Here’s the information in a single string: "
             << name << endl;
        return 0;
    }
    ```
5. The CandyBar structure contains three members.The first member holds the brand name of a candy bar.The second member holds the weight (which may have a fractional part) of the candy bar,and the third member holds the number of calories
(an integer value) in the candy bar.Write a program that declares such a structure and creates a CandyBar variable called snack,initializing its members to "Mocha Munch", 2.3,and 350,respectively.The initialization should be part of the declaration for snack.Finally,the program should display the contents of the snack variable.

    ```c++
    // struct_exe1.cpp
    #include <iostream>
    #include <string>
    using namespace std;
    struct CandyBar             // declar
    {
        string name;
        float weight;
        int calories;
    };
    
    int main()
    {
        CandyBar snack =        // initialized
        {
            "Mocha Munch",
            2.3,
            350
        };
        
        cout << "snack = {" << snack.name << ", " << snack.weight 
             << ", " << snack.calories << "}" << endl;
        // cout << snack << endl;  // error 
        return 0;
    }
    ```
6. The CandyBar structure contains three members,as described in Programming Exercise 5. Write a program that creates an array of three CandyBar structures,initializes them to values of your choice,and then displays the contents of each structure.

    ```c++
    // struct_exe2.cpp
    #include <iostream>
    #include <string>
    using namespace std;
    struct CandyBar             // declar
    {
        string name;
        float weight;
        int calories;
    };
    
    int main()
    {
        CandyBar snack[3] =        // initialized
        {
            {"Mocha Munch", 2.3, 350},
            {"cake", 5.5, 650},
            {"pancake", 6.6, 333}
        };
        
        cout << "snack[0] = {" << snack[0].name << ", " << snack[0].weight 
             << ", " << snack[0].calories << "}" << endl;
        cout << "snack[1] = {" << snack[1].name << ", " << snack[1].weight 
             << ", " << snack[1].calories << "}" << endl;
        cout << "snack[2] = {" << snack[2].name << ", " << snack[2].weight 
             << ", " << snack[2].calories << "}" << endl;
        return 0;
    }
    ```
7. William Wingate runs a pizza-analysis service.For each pizza,he needs to record the following information:
    - The name of the pizza company,which can consist of more than one word
    - The diameter of the pizza
    - The weight of the pizza

    Devise a structure that can hold this information and write a program that uses a structure variable of that type.The program should ask the user to enter each of the preceding items of information,and then the program should display that information.Use cin (or its methods) and cout.
    ```c++
    // struct_exe3.cpp
    #include <iostream>
    #include <string>
    using namespace std;
    struct Pizza_analy
    {
        string name;
        float diameter;
        float weight;
    };
    
    int main()
    {
        Pizza_analy pizza;
        
        cout << "Enter the name of the pizza company: ";
        getline(cin, pizza.name);
        cout << "Enter the diameter of the pizza: ";
        cin >> pizza.diameter;
        cout << "Enter the weight of the pizza: ";
        cin >> pizza.weight;
        
        cout << "\nCompany: " << pizza.name << "\n"
             << "Diameter: " << pizza.diameter << "\n"
             << "Weight: " << pizza.weight << endl;
        return 0;
    }
    ```
8. Do Programming Exercise 7 but use new to allocate a structure instead of declaring a structure variable. Also have the program request the pizza diameter before it requests the pizza company name.

    ```c++
    // struct_exe4.cpp
    #include <iostream>
    #include <string>
    using namespace std;
    struct Pizza_analy
    {
        string name;
        float diameter;
        float weight;
    };
    
    int main()
    {
        Pizza_analy * pizza = new Pizza_analy;
        
        cout << "Enter the diameter of the pizza: ";
        cin >> (*pizza).diameter;       // method 1
        cin.get();                      // discard the newline character
        cout << "Enter the name of the pizza company: ";
        getline(cin, pizza->name);      // method 2
        cout << "Enter the weight of the pizza: ";
        cin >> pizza->weight;
        
        cout << "\nCompany: " << pizza->name << "\n"
             << "Diameter: " << pizza->diameter << "\n"
             << "Weight: " << pizza->weight << endl;
        delete pizza;
        return 0;
    }
    ```
9. Do Programming Exercise 6,but instead of declaring an array of three CandyBar structures,use new to allocate the array dynamically.

    ```c++
    // struct_exe5.cpp
    #include <iostream>
    #include <string>
    using namespace std;
    struct CandyBar             // declar
    {
        string name;
        float weight;
        int calories;
    };

    int main()
    {
        CandyBar * snack = new CandyBar [3];
        //CandyBar snack[3] =
        //{
        //    {"Mocha Munch", 2.3, 350};
        //    {"cake", 5.5, 650};
        //    {"pancake", 6.6, 333};
        //};
        snack[0] = {"Mocha Munch", 2.3, 350};
        snack[1] = {"cake", 5.5, 650};
        snack[2] = {"pancake", 6.6, 333};

        cout << "snack[0] = {" << snack[0].name << ", "
             << snack[0].weight << ", " << snack[0].calories
             << "}" << endl;
        cout << "snack[1] = {" << snack[1].name << ", "
             << snack[1].weight << ", " << snack[1].calories
             << "}" << endl;
        cout << "snack[2] = {" << snack[2].name << ", "
             << snack[2].weight << ", " << snack[2].calories
             << "}" << endl;
        delete [] snack;
        return 0;
    }
    ```
10. Write a program that requests the user to enter three times for the 40-yd dash (or 40-meter,if you prefer) and then displays the times and the average. Use an array object to hold the data.(Use a builtin array if array is not available.)

    ```c++
    // array_exe.cpp
    #include <iostream>
    int main()
    {
        using namespace std;
        float grade[3];
        
        cout << "The first time 40-yd dash grade: ";
        cin >> grade[0];
        cout << "The scond time 40-yd dash grade: ";
        cin >> grade[1];    
        cout << "The third time 40-yd dash grade: ";
        cin >> grade[2];
        
        cout << "The three times of 40-yd dash grade average is: "
             << (grade[0] + grade[1] + grade[2]) / 3 << endl;
        return 0;
    }
    ```
