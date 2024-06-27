/* 
*KEYWORDS: *Reserved for specific functionality cannot be redefined or overloaded.
- C++ has 90 
- Java has 50 
- C has 32 
- Python has 33 
- More the keywords, more the complexity of language but not all are frequently used.

**************************************************************************************
Indentifiers are created by programmers. Eg. cin, cout, endl main(), #include
Operators are +, *, /, << (Insertion Operator), >> (Extraction Operator), :: (Scope Resolution), "", {}, ;
- All this together is syntax of a program

**************************************************************************************
*Pre-processor: * A program that processes your source code before compiler sees it.
It first strips all comments from source code and replaces each comment with a single space.
Then it looks for pre-processor directives and then executes them. 

*Pre-processor Directives: * Lines in the source code which start from '#'. Eg.
#include, When it sees this, it replaces it with file it is refering to and then recursively
processes the file.
Pre-processor are used to conditionally compile code.

Note: Pre-processor doesn't understand C++. It simply follows the pre-processor directives
and gets the source code ready for compiler. Compiler does understand pre-processor.

******************************************************************************************
*Comments: *Programmer readable explanations/notes/anotations of the source code.
Comments never make it to the compiler, it never sees them. Only human readable.

// - Single line comment
And we have multi-line comment which we are currently using.
Use to explain complicated code and keep the style consistent.

********************************************************************************************
*main() function: * Starting point of program execution.
return 0 indicated successful program execution.
eg. 1 No. info expected from OS
int main() {
    // code
    return 0;
}

eg. 2 Info expected in terms of arguments in terms of arguments 
int main (int argc, char *argv[]) {  // 'argc' is argument count & 'argv' is argument vector  
    // code
    return 0;
}

**********************************************************************************************
*NameSpaces: *To avoid naming conflict, namespaces are used as containers to group their code identity
as their name space into a namespace scope i.e. we create a namespace 'any_name' and define cout in that namespace
So if another programmer wants to use namespace then he can say any_name::cout
*'::' scope resolution operator; *Used to resolve which name we wanna use. 

Note: To avoid again and again typing namespace: using namespace any_name;      // We are using 'std' in this course

Qualified using Namespace Standard: There are many names defined but specify which one's we need to use to avoid naming conflict.   
using std::cout 
using std::cin
using std::endl;

So from using std::cout or std::cin we can simply script cout << or cin >>

************************************************************************************************

*Basic Input Output (I/O) using cin and cout: *C++ uses a stream abstraction to handle I/O devices like 
console and keyboard. 

*cout *standard output stream, defaults to console
                &
*>> *insertion Operator, output stream

1. Used to insert data in cout stream 
cout << data;
2. Can be chained: 
cout << "data 1 is " << data1;
3. Does not automaticaly add line breaks
cout << "data 1 is " << data1 << endl;
                or
cout << "data 1 is " << data1 << "\n"; 

Note - When 'endl' manipulator is used, it also flushes the stream. 
Since it the stream is buffered, it may not get written to the console until flushed. 
Flushing the stream here means - All data that has been written to that stream is Output,
includng any that may have been buffered. 
Buffering means - Some temporary storage of data that can be modified 
non-sequentially before read sequentially. It attempts to reduce difference between 
input speed and output speed. 

*cin *standard input stream, defaults to keyboard
                    &
*>> *extraction operator, input stream

1. Extract data from cin stream based on data's type
cin >> data;
2. Can be chained 
cin >> data1 >> data2; 
3. Can fail if the entered data cannot be interpreted
data could've an undetermined value.

*cerr *standard error stream, output stream
*clog *standard log stream, output stream

Note - To use these you must use I/O stream

*/
#include <iostream>

using namespace std;

int main() {

    cout << "Hello, World!";    
    // Output: Hello, world! to console and advaces cursor to next line.

    cout << "Hello";
    cout << "World!" << endl;
    // Ouput: HelloWorld because there's no end, it'll not advance to the next line. 

    cout << "Hello world!" << endl;         // Output: Hello World! Then will advance to next line.
    cout << "Hello" << "world!" << endl;    // Output: Helloworld! Then will advance to the next line.
    cout << "Hello" << "world!\n";          // Output: Helloworld! Then will advance to the next line, without flushing buffer. 
    cout << "Hello\nOut\nThere\n";          // '\n' is for next line 
    /* Output: Hello
               Out
               There 
    */

    int num1;
    int num2;
    double num3;

    cout << "Enter an integer: ";
    cin >> num1;
    cout << "You entered: " << num1 << endl;
    
    /*
    cin is tied to the keyboard and are not directly read by the cin, they are stored in a buffer.
    It will read whatever makes sense like 123 makes sense for int num1 and gets stored in num1.
    Also the white space is ignored. if we enter space before '123' that will be ignored and after 
    3 of 123 everything is not considered an integer.  
    */
     
    cout << "Enter a first integer: ";
    cin >> num1;

    cout << "Enter a second integer: ";
    cin >> num2;
    
    cout << "You entered " << num1 << " and " << num2 << endl;

    /*
    If you enter both of them together with a space in between like '100' and '200' when first integer is asked
    It'll still read both of them and output statement will work.
    When we enter 100 space 200, extraction operator realises num1 is an integer and when it observes whitespace 
    it realises num1 is done, it'll store it in num1. 
    Now it's going to Output another integer, it'll start to read from input stream but there's already data in buffer
    So it's going Output 200.  
    */

   cout << "Enter 2 integers seperated with a space: ";
   cin >> num1 >> num2;                         // Chaining the insertion operator
   cout << "You entered " << num1 << " and " << num2 << endl;
   

   cout << "Enter a double: ";
   cin >> num3;

   cout << "You entered: " << num3 << endl;

   cout << "Enter an integer: ";
   cin >> num1;

   cout << "Enter a double: ";
   cin >> num3;

   cout << "The integer is: " << num1 << endl;
   cout << "And the double is " << num3 << endl;

   /* If we enter a double i.e. 10.5 as first input here, it automatically gives integer and double as 10 and .5
   Becasue after decimal it'll consider it input for double and give output accordingly.  

   Note: If we enter a string here then it'll give output integer as 0 and double as smthng random.
   As it when saw the first char, it got a failed state.
   */
   return 0;
}