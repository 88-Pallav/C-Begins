/***************************************************************************************************************
Basic Architecture of computer: Memory --> bus --> CPU
BUS - allows movement of data between CPU and memory.
RAM - Random Access memory is contiguos block of storage used by the computer to store information.
This 'info' can be computer information or data.
- RAM can be imagined as having memory cells where each cell has an associated location.
If we have to program using specific memory location we are prone to getting errors.
Eg. move 21 to memory location 1002 (This is done in low level languages)
- But most programming languages allow you to associate a name with memory location. 
Eg. Memory location 1002 is associated with name age. This called 'BINDING'.
Here we can move 21 to age. We dont have to worry what exact memory location age is associated with.
If we run the program again age might be associated with a different memory location which is OK
as we never knew what it's actual location is. 

Variable is an abstraction for a memory location
Allows programmers to use meaninful names and not memory addresses
Variable have types(category i.e. integer, real_number, string, Person, Account,...) 
and values(contents like 10, 3.14, "Rank"....)

Varaible must be declared befoer they are used i.e. 
int age;
age = 21;

simply writing age = 21; without declaration will give a compiler error.

***************************************************************************************************************

Declaring variables: Variable_Type Variable_Name;

int age;                // integer/whole_number
double rate;            // floating_point_number
string name;            // Sequence of Characters 

Account My_acount;      // Here we are declaring variables of non-C++ built-in types (Object Oriented Programming)
Person Jabra;                 

*****************************************************************************************************************

Naming Rules:
- can contain letters/numbers/Underscores
- Must begin with a letter or underscore (_)
- Cannot begin with a number.
- Cannot use C++ reserved keywords.
- Cannot re-declare a name in the same scope.
- C++ is case-sensitive.
Eg.    Legal                  Illegal
        Age                     int
        age                    $age
       _age                   2014_age
       My_age                  My age
    your_age_in_2014            Age+1
        INT                     cout
        Int                    return

Naming best preactices:
- Be consistent with your naming conventions (choose between underscore_type or CamelCase)
- Use meaningful names 
- Never use variables before initializing them
- Declare variables close to when you need them in your code.

*******************************************************************************************************************

Initializing Variables: C++ allows 3 types of initializing. 

int age;          // uninitialialized 

int age = 21;    // C-like initalizing 
int age (21);    // Constructor intializing

int age {21};    // C++11 list intializing syntax 

*/

#include <iostream>
#include <climits>

using namespace std;

// This program will calculate the area of a room in square feet

int main() {
    /*
    int age;
    cout << age << endl;        // This will print a random value bcz it's uninitialized.
    
    Correct way:
    int age {21};
    cout << age << endl;        // now we get Output: 21 becz it's initialized.
    */
   
   /* int room_width;              - We have not initialized bcz we are going to read input here
    But the best practice is to initialize it 0 in such a case.
   */
    int room_width{0};
    int room_length{0};

    cout << "Enter the width of the room: ";
    cin >> room_width;

    cout << "Enter the lenth of the room: ";
    cin >> room_length;

    cout << "The area of the room is " << room_width*room_length << " Sq.ft" << endl;

    // return 0;

    /* Note (Best Practice): Variables can be declared (int room_length/width{0};) 
       just above where input (cin >> room_length/width) is being taken.
    */    


/************************************** Local and Global varaibles *************************************************************

Local Scope: Variables declared within the curly braces of main function. Their scope/visibility is limited 
to the statements in the main function that follow the decalaration of the variable.

Global Scope: variables declared outside the any funtion. And can be accessed from any part of the program.

Note - Unlike local variables, global variables are automatically initialized to 0.

Problem with Global variables - Bcz they can be accessed from any part of the program, they can be changed 
from any part of the program. This can make debugging difficult.

int age {18};       // Declared outside main fucntion means 'Global' variable

int main() {
    
    int age{18};    // Decalared inside main function means 'Local' variable
    cout << age << endl;

    return 0;
}   
 Note - if we have different value of same local and global varaiable then local value will be considered.
 i.e. if local value is {16} and global value is {18}. Then 16 will be considered.
*/

/***********************************************************************************************************
Primitive Data Types:
 * Fundamental data types bcz they are implemented directly by C++ language:
    - character types
    - Integer types (Signed and unsighed)
    - Floating-point types
    - Boolean types

 * Size and precision is often compiler-dependent 
    - #include <climit>  

 * Type sizes:
    - Expressed in bits
    - more bits means more value can be represented.
    - more bits means more storage required.
        
        Size          Representable Value
        8 bits - 256                        - 2^8 (2^bits)
       16 bits - 65,536                     - 2^16
       32 bits - 4,294,967,296              - 2^32
       64 bits - 18,446,744,073,709,551,615 - 2^64

 * Character Types:
    - Used to represent single characters: 'A', 'X', '@'
    - Wider type are used to represent wide character sets

        Type_Name                   Size/Precision
          char                   Exactly one byte. At least 8 bits 
        char16_t                 At least 16 bits 
        char32_t                 At least 32 bits 
        wchar_t                Can represent largest available cahracter set.

 * Integer types:
    - Used to represent whole numbers
    - Signed and unsigned version

        Type name                  Size/Precison 
    signed short int             At least  16 bits
    signed int                   At least 16 bits
    signed long int              At least 32 bits 
    signed long long int         At least 64 bits

        Type name                   Size/Precison 
    unsigned short int             At least  16 bits        // eg. ages
    unsigned int                   At least 16 bits
    unsigned long int              At least 32 bits 
    unsigned long long int         At least 64 bits         // kms' b/w planets

    Note - By default all integers are signed.
    unsigned integers are 0 or positive values only.

 * Floating-point Type
    - Used to represent non-integer numbers (real numbers like 1.2, 0.5, etc)
    - Represented by mantissa and exponent (scientific notaion)
    - Precision is the number of digits in mantissa 
    - Precision and size are compiler dependent 

    Type_Name       Size/Typical_Precison                       Typical_Range
      float              /7 decimal digits                1.2*10^-38 to 3.4*10^38
      double      No less than float/15 decimal digits    2.2*10^-308 to 1.8*10^308
    long double   No less than float/19 decimal digits    3.3*10^-4932 to 1.2*10^4932

 * Boolean Type
    - Used to represent true and false
    - Zero is false 
    - Non-zero is true

    Type Name         Size/Precision
      bool             Usually 8 bits
                  true or false (C++ keywords)

*/

    /********************************
    * Charaacter type
    ********************************/
   char middle_initial {'J'};               // Single quotes are being used.
   cout << "My middle initial is " << middle_initial << endl;

    /********************************
    * Integer type
    ********************************/
   unsigned short int exam_score {55};      // same as unsigned short exam_score {55};
   cout << "My exam score was " << exam_score  << endl;

   int countries_represented {65};
   cout << "There were " << countries_represented << " countries represented in my meeting." << endl;

   long people_in_florida {20610000};
   cout << "There are about " << people_in_florida << " people in Florida." << endl;

   long long people_on_earth {7600000000};
   cout << "There are about " << people_on_earth << " people_on_earth." << endl;

   /*
   long people_on_earth = 7600000000;
   If we use long with assignment sign (=), then we get a negative random number, 
   illustrating a case of OVERFLOW. But if we use list initialialization i.e. {7600000000} then it automatically catches problem. 
   */

   long long distance_to_alfa_centauri {9461000000000};
   cout << "The distance to alpha centauri is " << distance_to_alfa_centauri << " kilometers." << endl;

    /********************************
    * Floating point type
    ********************************/

   float car_payment {401.23};
   cout << "My car payment is " << car_payment << endl;

   double pi {3.141599};
   cout << "PI is " << pi << endl;

   long double large_amount {2.7e120};
   cout << large_amount << " is a very big number" << endl;

    /********************************
    * Boolean type
    ********************************/

   bool game_over {false};
   cout << "The value of game_over is " << game_over << endl;

    /********************************
    * Overflow example
    ********************************/

   short value_1 {30000};
   short value_2 {1000};
   int product {value_1*value_2};     // Each of the values can fit but the product will not leading to OVERFLOW if we use short. 

   cout << "The sum of " << value_1 << " and " << value_2 << " is " << product << endl;

   


   /***********************************************************************************************************
    * sizeof operator: determines the size in bytes of a type or variable. Eg.
      
      sizeof(int)
      sizeof(double) 

      sizeof(some-variable)

      sizeof some_variable
      
    * <climits> and <cfloat>
        - The climits and cfloat are includes files which contain size and precision information about your implementation of C++

            INT_MAX
            INT_MIN
            LONG_MIN
            LONG_MAx
            FLT_MIN
            FLT_MAX
            ....... 
   */

    cout << "sizeof information" << endl;
    cout << "=============================================================" << endl;

    cout << "char: " << sizeof(char) << " bytes." << endl;
    cout << "int: " << sizeof(int) << " bytes." << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " bytes." << endl;
    cout << "short: " << sizeof(short) << "bytes" << endl;
    cout << "long: " << sizeof(long) << " bytes." << endl;
    cout << "long long: " << sizeof(long long) << " bytes." << endl;

    cout << "=============================================================" << endl;
    cout << "float: " << sizeof(float) << " bytes." << endl;
    cout << "double: " << sizeof(double) << " bytes." << endl;
    cout << "long double: " << sizeof(long double) << " bytes." << endl;
    
    // use values defined in <climits>
    cout << "=============================================================" << endl;

    cout << "Minimum values: " << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "char: " << CHAR_MIN << endl;
    cout << "short: " << SHRT_MIN << endl;
    cout << "long: " << LONG_MIN << endl;
    cout << "long long: " << LLONG_MIN << endl;


    // use values defined in <climits>
    cout << "=============================================================" << endl;

    cout << "Minimum values: " << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "char: " << CHAR_MIN << endl;
    cout << "short: " << SHRT_MIN << endl;
    cout << "long: " << LONG_MIN << endl;
    cout << "long long: " << LLONG_MIN << endl;

    // use values defined in <climits>
    cout << "=============================================================" << endl;

    cout << "Maximum values: " << endl;
    cout << "int: " << INT_MAX << endl;
    cout << "char: " << CHAR_MAX << endl;
    cout << "short: " << SHRT_MAX << endl;
    cout << "long: " << LONG_MAX << endl;
    cout << "long long: " << LLONG_MAX << endl;

    // sizeof can also be used with variables names
    cout << "=============================================================" << endl;

    cout << "sizeof using varaible names" << endl;
    int age{21};
    cout << "age is " << sizeof(age) << " bytes." << endl;
                    // or
    cout << "age is " << sizeof age << " bytes." << endl;       // Here age is without parethesis 

    double wage {22.48};
    cout << "wage is " << sizeof(wage) << " bytes." << endl;
                    // or
    cout << "wage is " << sizeof wage << " bytes." << endl;

    /*********************************************************************************************************
     * Constant: Are like variables
        - have names
        - occupy storage
        - Are usually typed

        Their value cannot be changed once declaration.
     
     * Types of constant: 
        - Literal constants 
        - Declared constants 
            const keyword
        - Constant Expressions
            constexpr keyword 
        - Enumerated constants 
            enum keyword
        - Defined constants  
            #define
    
     * Literal Constants: 
               x = 12;
               y = 15.6
            name = "frank";
        middle_inital = 'J';

        Integer literal constants: 
            12  - an integer
            12U - an unsigned integer 
            12L - a long integer
            12LL - a long long integer

        Floating-point literal constants 
            12.1  - a double
            12.1F - a float
            12.1l - a long float
        
        Character Literal constants 
            \n  - newline
            \r  - return
            \t  - tab
            \b  - backspace
            \'  - single quote
            \"  - double quote
            \\  - backslash
  
        cout << "Hello\tthere\nmy friend\n";    Hello       there 
                                                my friend 

     * Declared constants:
          const double pi {3.14926}
          const int months_in_year {12};

          pi = 2.5;     // Compiler error when you change the value fo a decalred constant 

    
      * Defined constants: using preprocessor directive

            constants decalared using the const keyword
            #define  pi 3.1415926

            This acts like a blind find & replace which makes it difficult to find errors.

    **************************************************************************************************************************************
    Carpet Cleaning Estimate: 

    Number of rooms: 2
    Price per room: $ 30 
    Tax: 3.6
    Cost: $ 60

    Total estimate: $63.6 
    (Estimate validity for 30 days)
    */

   cout << "How many small rooms do you want? " << endl; 
   int number_of_small_rooms {0};
   cin >> number_of_small_rooms;

   cout << "How many large rooms do you want? " << endl; 
   int number_of_large_rooms {0};
   cin >> number_of_large_rooms;

   const int cost_per_small_room {30};
   const int cost_per_large_room {35};
   int rent_cost = (number_of_small_rooms*cost_per_small_room)+(number_of_large_rooms*cost_per_large_room);
   cout << "Your rent cost comes out to be " << rent_cost << endl;

   const double sales_tax_per_room {0.06};
   double total_taxes = rent_cost*sales_tax_per_room;
   cout <<  "Your taxes comes out to be " << total_taxes << endl;
   cout << "==========================================================" << endl;
   cout << "Your total cost comes out to be " << rent_cost + total_taxes << endl;
   cout << "This estimate is valid for " << 30 << " days only." << endl;
   
    return 0;
}
