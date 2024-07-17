#include <iostream>
#include <cstring>      // for c-style string fucntions 
#include <cctype>       //  for character based fucntions

using namespace std;

int main() {

/*
    Charaters and Strings:
    
    'Characters' are basially integers that are mapped to a char set like the ASCII char set
    'Strings' are sequence of characters 

    Note: C++ supports two type of strings i.e. c style strings and C++ strings


    'Character functions' 

        #include <cctype>
        function_name(char)
    
    - Functions for testing characters: They evaluate to 'true' or 'false' 
    - Functions for converting character case: convert the character

    // Testing Characters:

    isalspha(c) : true if c is a letter
    isalnum (c) : true if c is a letter or digit
    isdigit (c) : true if c is a digit 
    islower (c) : true if c is lowercase letter 
    isprint (c) : true if c is a printable character 
    ispunct (c) : true if c is a punctuation character 
    isupper (c) : true if c is an uppercase letter
    isspace (c) : true if c is whitespace

    // Character conversion: 

    tolower (c) : return lowercase of c
    toupper (c) : return uppercase of c


    // c-style strings: 

    Sequence_of_characters:
        - contiguous in memory 
        - implemented as an array of characters
        - terminated by a null character (null)
            * null-character with a value of zero 
        - Also Reffered to (aka) as 'zero or null terminated' strings i.e '\0'
    
    String literal 
        - sequence of characters in double quotes, eg. "Frank"
        - constant 
        - teminated with null character

    eg. 
        "C++ is Fun"    // These are 10 chars but 11 will be allocated in the memory (1 extra for null character)
        C++ is Fun\0 

    
    eg. Declaring c style string variables

        char my_name[] {"Frank"};           // Using initialiser list syntax where complier will allocate 6 char for "Frank\0"
        Frank\0                             

        my_name[5] = 'y';               // problem bcz size of the array is fixed if we add a 'y' it'll not terminate with a null char

        - compiler will allocate 6 characters for the variable, 
            5 for Frank & 1 for '\0' i.e. null character
    
    
    eg. Allocating pre-determined value while declaring my_name

        char my_name[8] {"Frank"};

        my_name[5] = 'y';               // This will be ok now 

    
    eg.  Asking compiler to alocate 8 chars and not iniitalizing them:

        char my_name[8];

            

    -  If you use this array as a string, all c-style string expect to find a null character 
        and here there may or maynot be one. It might appear at once or after a very long time 
        because we don't know what the data in the array is.
        To display a string, compiler iterates over each char and searches for a null character 
        where it stops to display a string.

        my_name = "Frank";              // Error

    -  In the example above, if we try to assign c style string using assignment operator (=),
        this wont work. If we try to assgin c-style literal "frank" to my_name we get a compiler
        error. array_names and literals evaluate to their location in memory so we are assigning 
        one location to another which is illegal.

        strcpy(my_name, "Frank");       // ok  

    - In order to assign one string to another we need to use a function called (strcpy)
        this copies the c style literal "Frank" to the my_name array


    // Functions for c-style array ( #include<cstring> )

    - Copying 
    - Concatenation
    - Comparison 
    - Searching 
    - and others 

    They all rely on one factor that the sequence you are searching for ends with null char.
    Eg. To check lenght of the c style string we'll start counting from the first element 
    increment the longest until you see the null char (\0)

    Eg. A few examples 

        char str[80];

        strcpy(str, "Hello ");      // copy
        strcat(str, "there ");      // cocatenation
        cout << strlen(str);        // 11
        strcmp(str, "Another ");    // 0

    
    // #include <cstdlib> : Functions to convert C-Style strings to other types 

    - integer
    - float
    - long 
    - etc
*/  
    char first_name[20] {};     // if we dont initialize '{}' we get garbage value 
    char last_name[20] {};
    char full_name[50] {};
    char temp[50] {};

    // cout <<  first_name << endl;             // will likely display garbage value, if remains uninitialized. 

    cout << "Please enter your first name: ";
    cin >> first_name;

    cout << "Please enter your last name: ";
    cin >> last_name;
    cout << "------------------------------" << endl;

    cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters " << endl;
    cout << "end for last name " << last_name << " has " << strlen(last_name) << " characters" << endl;

    // strlen() fucntion returns a size_t type it could be unsigned int/unsigned long  


    strcpy(full_name, first_name);      // copy first_name to full_name, it'l keep copying untill it encounters null character       
    strcat(full_name, " ");             // concatenate full_name and a space, followed by \0 (null character)
    strcat(full_name, last_name);       // concatenate last_name to full_name 

    cout << "Your full name is " << full_name << endl;

    cout << "-----------------------------" << endl;
    cout << "Enter your full : ";
    cin >> full_name;                   // This will only display name before whitespace 

    // To read the full name i.e. the name after space we use 'getline':

    cout << "Enter your full name: ";
    cin.getline(full_name, 50);         // '50' is limit here, how many characters maximum you gonna read. 
    cout << "Your full name is: " << full_name << endl;

    cout << "---------------------" << endl;


    // copying one array of characters to another array and comapring them:

    cout << "-----------------------------" << endl;
    strcpy(temp, full_name);
    if (strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same" << endl;
    else 
        cout << temp << " and " << full_name << " are different " << endl;
    cout << "---------------------------" << endl;

    
    //*************************  Using for-loop to convert lowercase to uppercase  ****************************************************

    for (size_t i {0}; i < strlen(full_name); ++i) {
        if (isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);
    }
    cout << "Your full name is " << full_name << endl;


    cout << "----------------------------------------" << endl;
    if (strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same " << endl;
    else 
        cout << temp << " and " << full_name << " are different " << endl;

    
    cout << "--------------------------" << endl;
    cout << "Result of comparing " << temp << " and " << full_name << ": " << strcmp(temp, full_name) << endl;
    cout << "Result of comparing " << full_name << " and " << temp << ": " << strcmp(full_name, temp) << endl;

    /* 
        Note: Characters are compared lexically, so if first string comes before second it'll return greater than 0
              and if it comes lexically afterwards it'll return less than 0
    
    */


    /* 
        ******************************************  C++ Strings ****************************************************************

        std::string is a class in the standard template Library 
        #include <string>
        - std namespace
        - contiguous in memory
        - dynamic_size
        - work with input and output streams
        - lots of useful member functions 
        - our familiar operators can be (+, =, <, <=, >, >=, +=, ==, !=, []...)
        - can be easily converted to c style string if needed 
        - safer  

        // Declaring and initializing C++ strings:

        #include <string>
        using namespace std;

        string s1;                  // Empty, unlike c style strings C== strings are always initialized 
        string s2 {"Frank"};        // Frank
        string s3 {s2};             // Frank
        string s4 {"Frank", 3};     // Fra
        string s5 {s3, 0, 2};       // Fr
        string s6 (3, x);           // XXX


        // Assignmnet Operator:

        string s1;
        s1 = "C++ Rocks!";

        string s2 {"Hello!"};
        s2 = s1;                    // copy s1 i.e. C++ rocks 


        // Concatenation of strings 

        string part1 {"C++"};
        string part2 {"is a powerful"}

        string sentence;

        sentence = part1 + " " + part2 + " language";   // C++ is a powerful language 

        sentence = "C++" + " is powerful";      // Illegal, you can't concatenate two c style literals
                                                   only works with c++ strings 


        ******************************* Accessing characters '[]' and 'at' methods akin to vectors ********************************

        string s1;
        string s2 {"Jhabra"};

        cout << s2[0] << endl;      // J
        cout << s2.at(0) << endl;   // J

        s2[0] = 'j';                // jhabra 
        s2.at[0] = 'k'              // khabra


        // Using for-loop using a 'char' type

        string s1 {"Jhabra"};

        for (char c: s1)
            cout << c << endl;

        Output:
            F   
            r
            a 
            n
            k

        
        // for loop using 'int' type 

        string s1;

        for (int c: s1)
            cout << c << endl;
        
        Output: It wil display ascii codes of these characters if we use 'int' as type 
          70    // J
         114    // h
          97    // a
         110    // b
         107    // r
          97    // a
          0     // null character 


        ****************************************** Comparing C++ Strings **********************************************

        Comapring 
                    ==  !=  >   >=  < <=

        The objects are compared character by character lexically. Capitals come before lowercase in ASCII table
        A < Z but A > a and so on 

        Can compare:
            two std::string objects 
            std::string object and C-style string literals
            std::string object and c-style string variable   


        eg.
            string s1 {"Apple"};
            string s2 {"Banana"};
            string s3 {"Kiwi"};
            string s4 {"apple"};
            string s5 {s1};             // Apple

            s1 == s5            // True
            s1 == s2            // False 
            s1 != s2            // True 
            s1 < s2             // True 
            s2 > s1             // True 
            s4 < s5             // False 
            s1 == "Apple";      // True 


        ************************************** Substrings - substr () ************************************************

        Extracts a substring from a std::string 

            object.substr(start_index, length)

        string s1   {"This is a test"};

        cout << s1.substr(0, 4);    // This 
        cout << s1.substr(5, 2);    // is 
        cout << s1.substr(10, 4);   // test


        ******************************************  Searching - find()  *******************************************
        
        Works with characters and strings. Returns the index of a substring in a std::string

            object.find(search_string)

        string s1 {"This is a test"};

        cout << s1.find("This");    // 0
        cout << s1.find("is");      // 2
        cout << s1.find("test");    // 10 
        cout << s1.find('e');       // 11
        cout << s1.find("is", 4);   // 5
        cout << s1.find("XX");      // string::npos     


        ******************************************  Searching - find()  *******************************************

        Removing characters - erase() and clear()

        Removes a subscript of characters from a std::string

            object.erase(start_index, length)

        string s1 {"This is a test"};

        cout << s1.erase(0, 5);     // is a test
        cout << s1.erase(5, 4);     // is a 

        s1.clear();                 // empties string s1


        ***************************************** Other methods ******************************************************

        string s1 {"Jhabra"};

        cout << s1.length() << endl;        // 6

        s1 += " Chicha ";                   // Compound concatenation
        cout << s1 << endl;                 // Jhabra Chicha 


        ************************************** Input >> and getline() *************************************************
        
        Reading std::string from cin

        string s1;                  
        cin >> s1;                  // Hello there 
                                    // only accepts up to the first place

        cout << s1 << endl;         // Hello

        getline(cin, s1);           // Read entire line until \n
        cout << s1 << endl;         // Hello there 

        getline(cin, s1, 'x');      // this isx ('x' is a delimiter where you want the compiler to stop reading at)
        cout << s1 << endl;         // this is x 

    
    
    */



   


    cout << endl;
    return 0;
}