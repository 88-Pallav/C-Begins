/*
 * Sequence: Ordering Statements sequentially 
 * Selection: Making decisions
 * Iteration: Looping/Repeating
  
 * Selection - Decision making
    - if statement
    - if-else statement
    - Nested if statement
    - switch statement
    - Conditional operator ?:

 * Iteration - Looping
    - for loop
    - range-based for loop
    - while loop
    - do-while loop
    - continue and break
    - infinite loops
    - nested loops

 * if statement: 
        if (expr)        
            statement;

    - (expr) is control expression statement which must evaluate to boolean 'true/false' value
    - if the expression is 'true' then 'execute' the statement 
    - if the expression is 'false' then 'skip' the statement 
    - indentation is for readability here, computer doesn't know
   Eg.
         if (num > 10)
            ++num;

         if (selection == 'A')
            cout << "You are selected";
         
         if (num > 10)
            cout << "num is greater than 10";

         if (health << 100 && player_healed)
            health = 100;
         
 * Block if-Statements: 
    - Creates a block of code by including more than one statement in block code {}
    - blocks can also contain variable declarations 
    - These variables are visible only within the block-'local' scope

         {
            // Varaible Declarations;
            statement_1;
            statement_2;
            .....
         }
   

   Eg: 
         
         if (num > 10) {
            ++num;
            cout << "this too";
         }    

*/ 

#include <iostream>
#include <vector>
using namespace std;

int main() {

   int num {};
   const int min {10};
   const int max {100};

   cout << "Enter a number between " << min << " and " << max << ": ";    
   cin >> num;

   if (num >= min) {
      cout << "\n================ if statement 1 =======================" << endl; 
      cout << num << " is greater than or equal to " << min << endl;

      int diff (num - min);      // 'diff' is a varaible with local-scope, only exists within this code block  
      cout << num << " is " << diff << " greater than " << min << endl;
   }

   if (num <= max) {
      cout << "\n================ if statement 2 =======================" << endl; 
      cout << num << " is lesser than or equal to " << max << endl;

      int diff (max - num);      // diff is a varaible with local-scope, only exists within this code block  
      cout << num << " is " << diff << " lesser than " << max << endl;
   }

   if (num >= min && num <= max) {
      cout << "\n================ if statement 3 =======================" << endl; 
      cout << num << " is in range " << endl;
      cout << "Statement 1 and Statement 2 are true and are displayed." << endl;
   }

   if (num == min || num == max)  {
      cout << "\n================ if statement 4 =======================" << endl; 
      cout << num << " is right on a boundary " << endl;
      cout << "This means all 4 statements display." << endl; 
   }

   // Note: We are only using if statement here i.e. one statement will be checked then it'll move to the next conditions sequentially

 /*
 * if-else statement:

      - if expr is true then execute statement 1 
      - if expr is false then execute statement 2

      if (expr)
         statement1;
      else 
         statement2;

   Eg. 
      if (num > 10)
         ++num;
      else
         num = 10;

      if (num > 10)
         cout << "num is greater than 10";
      else 
         cout << "num is NOT greater than 10";

      
      if (health < 100 && heal_player)
         health = 100;
      else 
         ++health;

      if (num > 10) {
         ++num;
         cout << "increment";
      } else {
         num = 10;
         cout << "Reset"; 
      }

 * Block if else-if Statement: 

      if (score > 90)
         cout << "A";
      else if (score > 80)
         cout << "B";
      else if (score > 70)
         cout << "C";
      else if (score > 60)
         cout << "D";
      else                 // All others must be fail (F)
         cout << "F";
      cout << "Done";
 */

   int nu {};
   const int target {10};

   cout << "Enter a number and I'll comapre it to: " << target << ": ";
   cin >> nu;

   if (nu >= target) {
      cout << "\n===============================================" << endl;
      cout << nu << " is greater than or equal to " << target << endl;
      int diff {nu - target};
      cout << nu << " is " << diff << " greater than " << target << endl;
   }  else {
      cout << "\n===============================================" << endl;
      cout << nu << " is less than " << target << endl;
      int diff {target - nu};
      cout << nu << " is " << diff << " less than " << target << endl;
   }

/*
 * Nested if statement: 

      if (expr1)
         if (expr2)
            statement1;
         else 
            statement2;
   
   - if statement is nested with another
   - allows testing of multiple conditions
   - 'else' belongs to the closest 'if' (dangling problem i.e. which 'if' does 'else' belong to)

   Eg.   
      if (score > 90)
         if (score > 95)
            cout << "A+";
         else 
            cout << "A";
      else 
         cout << "Sorry, No A";

      
      if (score_bla != score_blu) {
         if (score_bla > score_blu) {
            cout << "Bla wins" << endl;
         }  else {
               cout << "Blu wins" << endl;
         }
      }  else {
            cout << "Looks like a tie!" << endl;

      }
*/
   
   // Grade allocation (Post Verifiaction)
    int score {}; 
    cout << "Enter a score between 0 and 100: " << endl;
    cin >> score;

    char letter_grade {};

    if (score >= 0 && score <= 100) {
      if (score > 90)
         letter_grade = 'A';
      else if (score > 80)
         letter_grade = 'B';
      else if (score > 70)
         letter_grade = 'C';
      else if (score > 60)
         letter_grade = 'D';
      else 
         letter_grade = 'F';
      cout << " Your letter grade is: " << letter_grade << endl;

      if (letter_grade == 'F')
         cout << "Sorry, you must repeat this class." << endl;
      else 
         cout << "Congrats! You passed." << endl;
      
   } else {
      cout << "Sorry, " << score << " you entered is out of range. " << endl;
    }

   /* Shipping cost calculator:
      - Ask dimensions in length, width and height (int)
      - All dimensions must be < 10 inches or we can't ship it.
      - Base cost - $2.50 
        If package volume is greater than 100 cubic inches - 10% surchage
        If package volume is greater than 500 cubic inches - 25% surcharge 
   */

   int lenght{}, width{}, height{};
   double base_cost {2.50};

   cout << "Please enter length: " << endl;
   cin >> lenght;
   cout << "Please enter width: " << endl;
   cin >> width;
   cout << "Please enter height: " << endl;
   cin >> height;

   if (lenght > 10 || width > 10 || height > 10) {
      cout << "This shipment is not possible" << endl;
   }
   else {
      int volume = lenght * width * height;
      double cost = volume * base_cost;
      cout << "Total volume of the package comes out to be: " << volume << endl;
      cout << "Base cost of shipping the package is: " << cost << endl;

      if (volume > 500)
         cout << "Extra 25% surcharge levied, grand total is: " << cost + ((cost*25)/100) << endl;
      else if (volume > 100)
         cout << "Extra 10% surcharge levied, grand total is: " << cost + ((cost*10)/100) << endl;
      else
         cout << "Your total cost comes out to be: " << cost << endl;
   }

   /*
      Switch Statement

   switch (integer_control_expr) {
      
      case expression_1: statement_1; break;
      case expression_2: statement_2; break;
      case expression_3: statement_3; break;
         .......
      case expression_n: statement_n; break;
      
      default: statement_default;
      }
   
   // examaple-1: 

   switch (selection) {

      case '1': cout << "1 selected"; break;
      case '2': cout << "2 selected"; break;
      case '3':
      case '4': cout << "3 or 4 selected"; break;
      default: cout << "1, 2, 3, 4 NOT selected";
   }  

   Note: Once the case matches, no further cases will be matched. 
         If no case matches, default will be selected. 


   // Fall Through behaviour example of switch statement:

   switch (selection) { 

      case '1': cout << "1 selected";
      case '2': cout << "2 selected";
      case '3':
      case '4': cout << "3 or 4 selected"; break;
      default: cout << "1, 2, 3, 4 NOT selected";
   }
   Note: Here the code will stop executing after case 4, when it encounters break for the first time.
         Fall through basically means, it'll go on executing until it encounters break statement.


   // The switch statement with an enumeration:

      enum Color {
            red, green, blue
      };
      Color screen_color {green};

      switch (screen_color) {

         case red: cout << "red"; break;
         case green: cout << "green"; break;
         case blue: cout << "blue"; break;
         default: cout << "should never execute";
      
      }

      - Control expression must evaluate to an integer type.
      - The case expression must be constant expression that evaluate to integer or integer literals 
      - Once a match occurs all following case sections are executed until break is encountered which completes switch

            Best practice: * provide break for each statement
                           * default is optional but should be handled.
   */

   char ltr_grade {};

   cout << "Enter the letter grade you expect in the exam: ";
   cin >> ltr_grade;

   switch (ltr_grade) {
      case 'a':
      case 'A':
         cout << "You need a 90 or above, study hard! " << endl;
         break;
      case 'b':
      case 'B': 
         cout << "You need 80 to 89 for a B, go study! " << endl;
         break;
      case 'c':
      case 'C': 
         cout << "You need 70 to 70 for an average grade" << endl;
         break;
      case 'd':
      case 'D': 
         cout << "Hmm, you should strive for a better grade. All you need is 60-69" << endl;
         break;
      case 'f':
      case 'F': 
      {  
         char confirm {};
         cout << "Are you sure (Y/N) ? ";
         cin >> confirm;
         if (confirm == 'y' || confirm == 'Y')
            cout << "Ok, better be prepared next time." << endl;
         else if (confirm == 'n' || confirm == 'N') 
            cout << "Good, go study!" << endl;
         else 
            cout << "Illegal choice" << endl;
         break;   
      }
      default: 
         cout << "Sorry that's not a valid grade" << endl;
   }

   // Switch with enumeration

      enum Direction {
         left, right, up, down
      };

      Direction heading {left};

      switch (heading) {
         case left: 
            cout << "Going left" << endl;
            break;
         case right: 
            cout << "Going right" << endl;
            break;
         default: 
            cout << "OK" << endl;
      /* If we don't mention default or other two enum cases i.e. up and down we'll get a compiler warning
         that the other two cases have not been handled. If we mention default tehn all the cases will be
         handled. 
      */
   }

   /* Conditional Operator : Exactly like if-else statement but concise.

         (cond_expr) ? expr1 : expr2

      - cond_expr evaluates to a boolean expression
      - if cond_expr is true then the value of expr1 is returned.
      - if cond_expr is false then the value of expr2 is returned. 

      - similar to if-else construct
      - ternary operator 
      - Very useful when used inline.
      - extremely prone to abuse.

   Best practice: Never nest a conditional operator in another one,.

   // Example: Conditional Operator 
      int a{10}, b{20};
      int score {92};
      int result {};

      result = (a > b) ? a : b;
      result = (a < b) ? (b - a) : (a - b);
      result = (b != 0) ? (a/b) : 0;
      cout << ((score > 90) ? "Excellent": "Good ");

   */

   int number {};

   cout << "Enter an integer: " ;
   cin >> number;

   // if-else style: 
   if (number % 2 == 0) 
      cout << number << " is even " << endl;
   else 
      cout << number << " is odd " << endl;

   // Conditional operator style:
   cout << number << " is " << ((number % 2 == 0) ? "even" : "odd") << endl;


   int number_1{}, number_2{};

   cout << "Enter two integers seperated by a space: ";
   cin >> number_1 >> number_2;

   if (number_1 != number_2) {
      cout << "Largest is " << ((number_1 > number_2) ? number_1 : number_2) << endl;
      cout << "Smallest is " << ((number_1 < number_2) ? number_1 : number_2) << endl;

   }  else {
      cout << "The numbers are the same. " << endl;
   }

   /* Looping aka iteration: Third basic building block of programming: 
         - sequence, selection, iteration 
      
      - Iteration or repetition
      - Allows the execution of a statement or block of statements repeatedly
      - Loops are made up a loop condition and the body which contains the statement to repeat.

   Use cases of Looping: 
      - a specific number of times 
      - for each element in a collection
      - while a specific condition remains true 
      - untill  a specific condition becomes false
      - forever 
      - many, many more

   
   Looping constructs in C++: 

      for loop: 
         - iterate a specific number of times.
         
      Range-based for loop:
         - one iteration in each element in a range or collection
      
      while loop:
         - iterate while a condition remains true 
         - stop when the condition reamins false 
         - check teh condition at the beginning of every iteration 

      do-while loop:
         - iterate while a condition reamins true
         - stop when the condition becomes false
         - check teh condition at the end of every iteration
   */

  /*
   for loop: 

      for (initialization; condition; increment)      
         statement;                                // for a  single statement we use for-loop

      for (initialization; condition; increment) {     
         statement(s);                             // for multiple statements we use block-for-loop
      }
 

   int i {0};

   for (i = 1; i <= 5; ++i)
      cout << i << endl;

   Output:    
      1
      2
      3
      4
      5

   for (int i {1} ; i <= 5; ++i)       // Here we are using initialization '{}' style 
      cout << i << endl;

   for (int i = 1; i <= 5 ; ++i)       // Here we are using assignment '=' style
      cout << i << endl;

   i = 100;    // error 'i' is only visible in the loop


   // Display all even numbers between 1 and 10:

   for (int i {1}; i <= 10; ++i) {
      if (i % 2 == 0)
         cout << i << endl;
   }

   Output:       
      2
      4
      6
      8
      10 


   // Using for loop in an array

   int scores [] {100, 90, 87};

   for (int i {0}; i < 3; ++i) {
      cout << scores[i] << endl;
   }

   for (int i {0}; i <= 2; ++i) {
      cout << scores[i] << endl;
   }
   
   Note: above two same examples are to illustrate choice between '<' less than the size of array or
         '<=' less than equal to size-1. Always use one way. 
   Output: 
      100
      90
      87


   // comma operator: This operator allows to seperate expression by a comma anc both will execute.
                       Associativity is right to left and result of he comma operator is the 
                       left most expression.

   Here we have initiatialized i to '1' and j to '5' | condition is to keep iteratioon at 5 and 
   direction is to increment each one per iteration.

   for (int i {1}, j {5}; i <= 5; ++i, ++j) {
      cout << i << " * " << j << " : " << (i * j) << endl;
   }

   output: 
      1 * 5 : 5
      2 * 6 : 12
      3 * 7 : 21
      4 * 7 : 28
      5 * 9 : 45


   - The basic for loop is very clear and concise.
   - We have used integers, we can use doubles in for-loop as well
   - Here we have only counted up (i < 5), we can count down (i > 5) as well 
     and similarly decrement (--i) instead of increment (++i)  
   - All for loop's expressions are optional, it is possible to have 
         - no initialization
         - no test
         - no increment  
   
   Example: 
      
      for (;;)
         cout << "Endless loop" << endl;

   Note: Don't write for-loop with missing expressions and complicated expressions with comma operators  

   */
   for (int i{1}; i <= 10; ++i) 
      cout << i << endl;

   // Here we wanna go 1 to 10 by 2 (Incrementing by 2)
   for (int i {1}; i <= 10; i += 2)       
      cout << i << endl;
  
   // Count down 
   for (int i {10}; i > 0; --i )
      cout << i << endl;
   cout << "Blastoff" << endl;


   // Incrementing by 10 and numbers divisible by 15 from 10 to 100
   for (int i{10}; i <= 100; i += 10) {
      if (i % 15 == 0)
         cout << i << endl;
   }

   // An example of comma operator: 
   for (int i{1},j{5}; i <=5; ++i,++j)
      cout << i << " + " << j << " = " << (i + j) << endl;

   // Using condition inside the loop: New line after every multple of 10:
   for (int i{1}; i <= 100; ++i) {
      cout << i;
      if (i % 10 == 0) 
         cout << endl;
      else 
         cout << " ";
   }

   // Using condition inside the loop: New line after every multiple of 5:
   for (int i{1}; i <= 100; ++i) {
      cout << i;
      if (i % 5 == 0) 
         cout << endl;
      else 
         cout << " ";
   }

   // Using conditional opertor inside the loop
   for (int i{1}; i <= 100; ++i) {
      cout << i << ((i % 10 == 0) ? "\n" : " ");
   }

   // Using a Vector: 
   vector<int> numnss


   cout << endl;
   return 0;
}