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

    - (expr) is control expression statement which must evaluate to boolean true/false value
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
      cout << "Statement 1 and Statement 2 are true and are displayed";
   }

   if (num == min || num == max)  {
      cout << "\n================ if statement 4 =======================" << endl; 
      cout << num << " is right on a boundary " << endl;
      cout << "This means all 4 statements display";
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
   















   cout << endl;
   return 0;
}