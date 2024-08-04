/* Functions: Allows us to devide our functions into modular units of executable code 
              and call and resuse these units as you wish.
    - Functions are very strong abstraction mechanism.

    C++ Programs 
        - C++ standard libraries (functions and classes)
        - Third-party libraris (functions and classes)
        - Our own functions and classes
    
    Functions allow modularization of a program
        - Separate code into logical self contaned units
        - These units can be re-used.

    Example: Without function:

    int main() {
    
        // read input 
            statement_1;
            statement_2;
            statement_3;
            statement_4;

        // process input 
            statement_5;
            statement_6;
            statement_7;
        
        // provide output
            statement_8;
            statement_9;
            statement_10;
    
            return 0;
    }   

    Example: With function (Modularization):

    int main () {

        // read_input           
            read_input();       // Here we are simply using function calls 
        
        // process_input 
            process_input();

        // provide output
            provide_output();

            return 0;
    }

    // read_input() {       - Eg of function being called 

        statement_1;
        statement_2:
        statement_3:
    }

    // Boss-worker analogy

    - Write your code to the function specified
    - Understand what the function does
    - Understand the information the function needs 
    - Understand what the function returns
    - Understand any error the function may provide
    - Understand any performance constraints 

    // Example: <cmath>

    - C'mon mathematical calculations
    - Global functions i.e. availbale to the entire program  

        function_name (argument);
        function_name (argument1, argument2. ...);

        cout << sqrt(400.00) << endl;       // 20.0
        double result;
        result = pow (2.0, 3.0);            // 2.0 ^ 3.0


    // User defined functions:

    Below mentioned function expects two integers a and b
    Calculates sum of a and b and returns it to caller
    we expect return as an int 

    int add_number(int a, int b) {

        return a + b;
    }

    cout << add_numbers(20, 40);        // Calling the function and using the value that it returns

    // Return 0 if any of the argument are negative:

    int add_numbers (int a, int b) {

        if (a < 0 || b < 0)
            return 0;
        else 
            return a + b;
    }
*/

#include <iostream>
#include <cmath>     // required for maths functions
#include <cstdlib>   // requirted for rand()
#include <ctime>     // required for time()

using namespace std;

const double pi {3.1415};
double calc_area_circle(double radius) {

    return pi * radius * radius;
}

double calc_volume_cylinder (double radius, double height) {
    
    //return pi * radius * radius * height;
    return calc_area_circle(radius) * height;
}

void area_circle() {

    double radius {};

    cout << "\n Enter the radius of the circle: ";
    cin >> radius;
    cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
    }

void volume_cylinder () {

    double radius {};
    double height {};
    cout << "Enter the radius of the  cylinder " << endl;
    cin >> radius;
    cout << "Enter the height of the cylinder " << endl;
    cin >> height;
    cout << "Volume of the cylinder with radius " << radius << " and height " << height << " is: " << calc_volume_cylinder(radius, height) << endl;

}

int main() {

    double num {};

    cout << "Enter a number (double): ";    
    cin >> num;

    cout << "The square root of " << num << " is: " << sqrt(num) << endl;
    cout << "The cubed root of " << num << " is: " << cbrt(num) << endl;  

    cout << "The sine of " << num << " is: " << sin(num) << endl;
    cout << "The cosine of " << num << " is: " << cos(num) << endl;

    cout << "The ceil of " << num << " is: " << ceil(num) << endl;
    cout << "The floor of " << num << " is: " << floor(num) << endl;
    cout << "The round of " << num << " is: " << round(num) << endl;


    double power {};
    cout << "\nEnter a power to raise " << num << " to: ";
    cin >> power;
    cout << num << " rasied to the " << power << " power is: " << pow(num, power) << endl;

    
    int random_number {};

    size_t count {10};       // random numbers to be generated 
    int min {1};             // lower bound (inclusive)
    int max {6};             // upper bound (inclusive)

    /* 
    - computers are bad with random numbers, numbers generated are random but there sequence is not.
    - So we seed the random number gernerator, each time with a different value each time   
    - if we don't seed the number, we'll keep getting the same random number 

    */
    cout << "RAND_MAX on system is: " << RAND_MAX << endl;
    srand(time(nullptr));       // seeding the random number generator

    for (size_t i{1}; i <= count; ++i) {
        random_number = rand() % max + min;     // generate a random number [min, max]
        cout << random_number << endl;
    }


    /*  Function Definitions:

    - Name of the function 
        - same rules as variables
        - Should be meaningful
        - Verb or verb phrase)
    - Parameter lsit
        - The variables passed into the function
        - their types must be specified 
    - return type
        - the type of data that is returned from the function
        - 'void' is used if we don't expect much from the  function 
    - body 
        - the statements that are executed when the fucntion is called 
        - in curly braces {}

    Example: No parameters 

        int function_name () {      

            statement(s);       ------> Body within '{}'
            return 0;
        }
        'int' return type
        '()' parameters go in here 
    

    Example: One parameters 'int a'

        int function_name (int a) {      

            statement(s);      
            return 0;
        }

    Example: no return type

        void function_name (int a) {      

            statement(s);      
            return ;        // optional
        }

    Example: multiple parameters 

        void function_name (int a, string b) {      

            statement(s);      
            return ;        // optional
        }

        - When the fucntion is called these two paramters must be provided as arguments
          in the same the order as specified in parameter list 

    Example: a fucntion with no return type no parameters 

    void say_hello () {
    
        cout << "Hello " << endl;
    }

    // Calling teh say_hello function: 

    int main () {

        say_hello();
        return 0;
    }

    // Calling the say hello function '10' times 

    int main() {
        for (int i{1}; i <= 10; ++i)
            say_hello();
        return 0;
    }

    // Calling a function

    void say_world () {
        cout << " World" << endl;
    }

    void say_hello () {
        cout << "Hello " << endl;
        say_world ();
    }

    int main() {

        say_hello();
        return 0;
    
    }

    // Ouput: Hello 
              World

    *********************************************************************

    void say_world () {

        cout << "World" << endl;
        cout << "Bye from say_world" << endl;  
    }

    void say_hello () {
        cout << "Hello " << endl;
        say_world();
        cout << " Bye from say_hello" << endl;
    }

    int main () {

        say_hello();
        cout << " Bye from main" << endl;
        return 0;
    }

    *********************************************************************

    - Function can call other functions 
    - Compiler must know the fucntions details before it is called !

    int main () {

        say_hello();    // called before it is defined -- ERROR
    }

    void say_hello () {

        cout << "Hello" << endl;
    }
 
    // 
    */

    // Program to calculate the area of a circle and volume of a cylinder:

    area_circle();
    volume_cylinder();

    

    /* 
        *************************************  Function prototypes  ********************************************** 
    
    
    
    */








    cout << endl;
    return 0;


} 