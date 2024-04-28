#include <iostream>     // Pre-processor directive

// using namespace std;    

int main() {            // main function (Executin begins here)
    
    int favourite_number;   // declaring the type and name of the variable 
    std::cout << "Enter your favourite number between 1 and 100: ";    
    // 'cout' writes to the console where '<<' is extraction operator  
    
    std::cin >> favourite_number;    
    // 'cin' reads from the console where '>>' is insertion operator. 
    std::cout << "Wow, that's my favourite number too! " << std::endl;  
    // 'endl' moves the cursor to the next line
    std::cout << "No really, " << favourite_number << " is my favourite number. ";   
    // Here we insert int in a string
    return 0;
}

/* Runnning code in terminal: When gcc isn't able to compile 
Compiling the file: g++ file_name.cpp -o file_name.exe
Running the file: .\file_name.exe 
*/

/* Building a program: When compiling a program we are converting a source code (cpp file) 
into object (machine language) which will create .o/.obj file. As projects are compiled 
you many of these object files 

1. Clean: Clean process removes all those object files and puts the project in clean state
          i.e. source code only no object files.This a non-issue if you have only one 
          cpp file but if you have 1000s' of them this becomes very important as it'll
          take significant amount of time to build a project.
2. Build: It'll go through all the c++ files and build only what needs to be built.
3. Re-built: It's combination of build and clean. It's gonna clean everything and then build again.
*/

/* Compiler Errors
Syntax Error: Something wrong with the structure eg. 
            std::cout << "Error << std::endl;  // Here second interverted comma is missing 
            return 0                           // here semi-clon is missing 

Semantic Error: Something wrong with the meaning 
            a + b;      // When it doesn't make sense to add a and b
                           Eg. if 'a' is a char and 'b' is an int 

Note: When fixing error start with the first one. This might help subsequent errors resolve automatically.
*/

/* Compiler warning: Complier points a potention problem. Eg.
        int miles_driven;
            std::cout << miles_driven;

    warning: 'miles_driven' is used uninitialized which means no value assigned.
              This may lead to any random thing being printed. 
    
    Have a no warnings, clean compiles policy when you code.
*/

/* Linker Error: Trouble in linking all object together to create an executable file.
                 Usually a library or object file is missing
*/

/* Runtime Error: Error when the program is running. Eg. 
                  - Divide by zero
                  - File not found 
                  - Out of memory
    Can cause program crash
    - Exception handling can help deal with runtime errors   
*/

/* Logic errors: Error or bugs that cause your program to run incorrectly, mistakes made by programmers. Eg.
                 To program for a person to be 18 or older to vote 
        
        if (age > 18) {         // Here it should be '>=' or '>17'
            std::cout << "Yes, you can vote!";
        }
*/

