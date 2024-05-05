/*
 *  Expression: Basic building block of a program: a sequence of operators and operands that specifies a computation
                Computes a value from a number of operands.
    Eg. 
        34                  // literal
        favourite_number    // variable
        1.5 + 2.8           // addition
        2 * 5               // multiplication
        a > b               // realtional
        a = b               // assignment 

 *  Statement: Complete line of code that perfomrs an action. Terminated my semi-colon.
               Contains expressions. Types: expression | null | compound | selection | 
               iteration | declaration | jump | try blocks | others
    Eg.
        int x;                 // declaration 
        favourite_number = 12; // assignment 
        1.5+2.8;               // expression
        x = 2 * 5;             // assignment
        if (a > b) cout << "a is greater than b";   // if statement

 * Operators: Types: unary, binary & ternary
    C'mon operators: assignment | arithmetic | increment/decrement | relational |
                     logical | member access | others
    
 * Assignment Operator (=)  lhs = rhs
   - rhs is an expression that is evaluated to a value
   - The value of rhs is stored to the lhs
   - Value of rhs must be type compatible with lhs
   - lhs must be assignable
   - Assignment expression is evaluated to what was just assigned 
   - More than one variable can be assigned in a single statement
*/
    #include <iostream>

    using namespace std;

    int main() {

        int num1 {10};          // Initialization is when a variable is decalred for the first time 
        int num2 {20};

        cout << "orginal num1 is: " << num1 << endl;
        cout << "orginal num2 is: " << num2 << endl;

        num1 = 100;          // Assignment is when you change the value that already exists in a variable
        // (rhs is evaluated and then moved to lhs. num1 varaible is memory location where we assign 10 with 100.)
    
        cout << "num 1 is: " << num1 << endl;
        cout << "num 2 is: " << num2 << endl;

        num1 = num2 = 1000;     // Chainged assignment, they are asociated right to left i.e. 1000 goes to num2 then num2's 1000 goes to num1.

        cout << "num1 & num2 after chained assignment are: " << num1 << " " << num2 << endl;

/*  Note: Specific Errors:
    const int num1 = 100;    (num1 is read-only varaible) 
    int num1 = "Jack";       (type error)
    100 = num1;              (l-value required as left operand of assignment) 
     

 * Arithmatic_Operators: + (addition) | - (subtraction) | * (multiplication) | / (Division)
                         % (modulo or remainder of {operator})
    
    +, -, * and / operators are overloaded to work with multiple types such as int, double, etc
    % only for integer types 

    */

    int num3 {100};
    int num4 {200};

    cout << num3 << " + " << num4 << " = " << num1 + num2  << endl;

    int result {0};

    result = num3 + num4;
    cout << num3 << " + " << num4 << " = " << result  << endl;

    result = num3 - num4;
    cout << num3 << " - " << num4 << " = " << result  << endl;

    result = num3 * num4;
    cout << num3 << " * " << num4 << " = " << result  << endl;

    result = num3 / num4;
    cout << num3 << " / " << num4 << " = " << result  << endl;

    result = num4 / num3;
    cout << num4 << " / " << num3 << " = " << result  << endl;      //  result type is 'int' but we'll get double i.e. 0.5 so we'll get '0' only.

    result = num3 % num4;
    cout << num3 << " / " << num4 << " = " << result  << endl;      //  We'll get '0' as remainder here

    num3 = 10;        
    num4 = 3;          

    result = num3 % num4; 
    cout << num3 << " % " << num4 << " = " << result  << endl;      

    result = num3 * 10 + num4;      // BODMAS
    cout << num3 << " * 10 + " << num4 << " = " << result  << endl; 

    cout << 5/10 << endl;           // here we'll get 0 (not 0.5) bcz we're dividing int.
    cout << 5.0/10.0 << endl;       // here we'll get 0.5 bcz we're dividing doubles      

    cout << endl;


    // Converting Rupees to Dollars: 

    const double usd_per_rs {83.38};
    cout << "Welcome to Rupees to USD converter" << endl;
    cout << "Enter the value in Rupees: ";
    
    double rupees {0.0};
    double dollars{0.0};
    cin >> rupees; 

    dollars = rupees / usd_per_rs;

    cout << rupees << " Rupees is equivalent to " << dollars << " dollars " << endl;
    cout << endl;


    /*
 * Increment ++ and decrement -- Operators
    Incremetns or decrements its operands by 1 (can be used with integers, floating types and pointers)

    Prefix ++num
    Postfix num++ 

    Don't overuse this operator! Never use it twice for the same variable in the same statement !!
    */

    int counter {10};
    int rslt {0};

    // Eg. 1 - simple increment - All mean the same thing
    cout << "Counter: " << counter << endl;     // 10

    counter = counter + 1;
    cout << "Counter: " << counter << endl;     // 11

    counter++;
    cout << "Counter: " << counter << endl;     // 12

    ++counter;
    cout << "Counter: " << counter << endl;     // 13

    // Eg. 2 - pre-incrememt 

    counter = 10;
    rslt = 0;

    cout << "Counter: " << counter << endl;     // 10

    rslt = ++counter;     // Note the pre-increment
    // here we want to increment counter before I used and then assign it to rslt
    cout << "Counter: " << counter << endl;     
    cout << "result: " << rslt << endl;

    // Eg. 3 - post-incrememt 

    counter = 10;
    rslt = 0;

    cout << "Counter: " << counter << endl;     // 10

    rslt = counter++;     // Note the post-increment
    //  here rslt will be counter but afterwards we increment counter rslt = counter #10 --> counter = counter + 1 #11
    cout << "Counter: " << counter << endl;     // 11
    cout << "result: " << rslt << endl;         // 10

    // Eg. 4 - pre-incrememt 

    counter = 10;
    rslt = 0;

    cout << "Counter: " << counter << endl;     // 10

    rslt = ++counter + 10;     // Note the pre-increment: ++counter is counter + 1 --> result is new_counter + 10;
    
    cout << "Counter: " << counter << endl;     // 11
    cout << "result: " << rslt << endl;         // 21


     // Eg. 5 - post-incrememt 

    counter = 10;
    rslt = 0;

    cout << "Counter: " << counter << endl;     // 10

    rslt = counter++ + 10;     // Note the post-increment: result = counter + 1; --> counter = counter + 1;
    
    cout << "Counter: " << counter << endl;     // 11
    cout << "result: " << rslt << endl;         // 20

/*
 * Mixed type Expressions: 
    - Operations occur on same type Operands. 
    - If operands are different types, C++ wil convert one.
    - C++ will automatically convert types (coercion). If it cant, it'll give compiler error. 
 
 * Conversions: 
    - Higher Vs Lower types are based on the size of the values the type can hold.  
       - long doubl > double > float > unsigned long > long > insigned int > int 
       - short and char types 
       are always converted to int)
    - Type conversion: conversion of one operand to another data type
    - Promotion - conversion to a higher type (Used in mathematical expression)
    - Demotion - conversion to a lower type (Used with assignment to lower type) 

    Eg 1: 
        lower op higher     // the lower is promoted to a higher 
        2 * 5.2
        2 is promoted to 2.0

        lower = higher;     //  the higher is demoted to a lower
        int num {0};
        num = 100.2;        // 100.2 will demoted to 100 (Many compilers will warn you about the potential loss of precision) 
    */
    // Explicit Type casting - static_cast<type>

    int total_amount {100};
    int total_number {8};
    double average {0.0};

    average = total_amount / total_number;
    cout << average << endl;                // displays 12

    average = static_cast<double> (total_amount) / total_number;
    
    cout << average << endl;                // display 12.5


    int total{};
    int n1 {}, n2 {}, n3 {};

    const int count{3};

    cout << "Enter 3 intergers seperated by spaces: "; 
    cin >> n1 >> n2 >> n3;

    total = n1 + n2 + n3;

    double average {0.0};
    average = static_cast<double>(total) / count;       // {double)total is Old C-Type cast

    cout << "The 3 numbers were: " << n1 << ", " << n2 << ", " << n3 << endl;
    cout << "The sum of the numbers is: " << total << endl;
    cout << "The average the numbers is: " << average << endl;

    cout << endl;
    return 0;

    }



        