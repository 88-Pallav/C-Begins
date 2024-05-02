/*
 * Arrays: Arrays allows you to tell the compiler to give you collection of as many elements you want and give the 
    entire colection of single name so you dont have to name each individual element.
    - Compund data type and structure
    - Collection of elements
    - All elements are of same type
    - Each elelment can be accessed directly
    eg. We need to give a 100 test scores then we can go on declaring and initializing each one of them.
    Arrays allows you to tell the compiler to give you collection of as many elements you want and give the 
    entire colection of single name so you dont have to name each individual element.  

    Characteristics 
        - Fixed size 
        - All elements are same type - stored contiguously in memory 
        - individual elements can be accessed by their position and index 
        - First element is at index 0 - Last index is at index-size - 1
        - No check for outofbound i.e. whether it is within the size from 0 to size of arrray or not
        - Always initialize arrays - Very efficient 
        - Iteration (looping) is often used to process.
    
 * Declaring an array:

        Element_type array_name [constant number of elements];
        Eg.
            int test_scores [5];                    // array named 'test scores' of 5 integers 
            int high_score_per_level [10];               

            const int days_in_year {365};
            double hi_temperatures [days_in_years];

 * Initialization:

        Element_type array_name [number of elements] {init list}

        int test_scores [5] {100, 95, 99, 8, 88};
        int high_score_per_level [10] {3, 5};           // initializing first two to 3, 5 and remaining to 0.
        const double days_in_year {365};                 
        double hi_temperatues [days_in_years] {0};      // initializing all elements to 0   
        int another_array [] {1,2,3,4,5};               // size automatically calculated 

 * Accessing array elements: 
        array_name  [element_index]
            test_scores [1]
    */    
    
    #include <iostream>
    #include <vector>
   
    using namespace std;

    int main() {
/* 
    int test_scores [5] {100, 95, 99, 87, 88};

    cout << "First score at index 0: " << test_scores[0] << endl;       // test_scores[0] is called Array subscripting. 
    cout << "Second score at inedx 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;

    // Changing the contents of array elements:
    test_scores[0] = 90;        // Assignment statement
    cout << "=================================================" << endl; 
    cout << "New first score at index 0 is: " << test_scores[0] << endl;
  


 - Name of arrray represents the location of first element in the array (index 0).
 - The [index] represents the offset from the beginning of the array.
 - C++ performs a calculation to find the correct element. 
 - Alert! There's no bound checking in C++.

    char vowels[] {'a', 'e', 'i', 'o', 'u'};        // empty [] means it'll figure out itself how big the array is
    cout << "\nThe first vowels is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;

    double hi_temp[] {90.1, 89.8, 77.5, 81.6};
    cout << "\nThe first high temperature is: " << hi_temp[0] << endl;

    hi_temp[0] = 100.7;     // set the first element in hi_temps to 100.7
                        
    cout << "The first high temperature is now: " << hi_temp[0] << endl;

    int test_score[5];      // bcz uninitialized this'll either create garbage value or junk
    // if we do int test_score[5] {100, 90} rest are initialized to 0.
    
    cout << "\nFirst score at index 0: " << test_score[0] << endl;      // Bcz un-iniitalized all will give garbage values  
    cout << "Second score at index 1: " << test_score[1] << endl;
    cout << "Third score at index 2: " << test_score[2] << endl;
    cout << "Fourth score at index 3: " << test_score[3] << endl;
    cout << "Fifth score at index 4: " << test_score[4] << endl;

    cout << "\nEnter 5 test scores: ";

    cin >> test_score[0];       // taking input from user of test scores
    cin >> test_score[1];
    cin >> test_score[2];
    cin >> test_score[3];
    cin >> test_score[4];

    cout << "The updated array is: " << endl;
    cout << "First score at index 0: " << test_score[0] << endl;
    cout << "Second score at index 1: " << test_score[1] << endl;
    cout << "Third score at index 2: " << test_score[2] << endl;
    cout << "Fourth score at index 3: " << test_score[3] << endl;
    cout << "Fifth score at index 4: " << test_score[4] << endl;

    cout << "\nNotice what the value of the array name is: " << test_score << endl;   
    // this will give memory address of the first element i.e. address of the array

    /* Declaring multi-dimentional arrays:

        Element_type array_name [dim1_size][dim2_size]

            int movie_rating [3][4];
  
    const int rows {3};                  // Movie reviewer
    const int cols {4};                  // Movie
    int movie_rating [rows][cols];

    cin >> movie_rating [1][2];      
    cout << movie_rating [1][2];

 *Initializing multi-dimentional arrays: 

    int movie_rating [3][4] {
        {0, 4, 3, 5},
        {2, 3, 3, 5},
        {1, 4, 4, 5}
    };
  
    ***********************************************************************************************************************************************
 * Vectors: An array that grow in size and shrink in size at execution time.
    - Container in C++ STL
    - Similar symantics and syntax as arrays 
    - very efficient
    - Bound checking available 
    - Several functions available like sort, reverse, find and more

 * Declaring a Vector: 
    
    #include <vector>
    using namespace std;

    vector <char> vowels;       // vowels is a vector of characters
    vector <int> test_scores;   // int is a vector of integers 

    vector <char> vowels (5);       // '(5)' this is a constructor initialization syntax i.e. you need 10 characters 
    vector <int> test_scores (10);
    
 * Initializing a Vector:
    
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
    vector <int> test_scr {100, 98, 89, 85, 93};
    vector <double> hi_temperatures (365, 80.0);        
    (Here '365' is all the elements and '80.0' is what we have initialized all the elements to)

 * Characteristics:
    - Dynamic size
    - Elements are all the same type like arrays
    - Stored contiguously in memory like arrays
    - Individual elements can be accessed by their position or index
    - First elementis at index 0.
    - Last element at index size-1.
    - [] - no checking to see if you are out of bounds
    - Provides many useful function that do bounds check 
    - Elements initialized to zero
    - Very efficient 
    - Iteration (looping) is often used to process. 
 
 * Accessing vector elements - array syntax

    vector_name [element_index]
    test_scr [1]

    vector <int> test_scr {100, 95, 99, 8, 88};

    cout << "First score at index 0: " << test_scr[0] << endl;      // vector subscripting is same as in arrays 
    cout << "First score at index 1: " << test_scr[1] << endl;
    cout << "First score at index 2: " << test_scr[2] << endl;
    cout << "First score at index 3: " << test_scr[3] << endl; 
    cout << "First score at index 4: " << test_scr[4] << endl; 

* Accessing vector elements - vector syntax

    vector_name.at(element_index)
    test_scr.at(1)

    cout << "First score at index 0: " << test_scr.at(0) << endl;      // vector subscripting is same as in arrays 
    cout << "First score at index 1: " << test_scr.at(1) << endl;
    cout << "First score at index 2: " << test_scr.at(2) << endl;
    cout << "First score at index 3: " << test_scr.at(3) << endl; 
    cout << "First score at index 4: " << test_scr.at(4) << endl; 

* Changing the contents of vector elements - vector syntax
    
    vector_name.at(element_index)

    vector <int> test_scr {100, 95, 99, 8, 88};

    cin >> test_scr.at(0);
    cin >> test_scr.at(1);
    cin >> test_scr.at(2);
    cin >> test_scr.at(3);
    cin >> test_scr.at(4);

    test_scores.at(0) = 90;     // assignment statement

* vector_name.push_back(element)

    vector <int> test_scr {100, 95, 99};        // size is 3
    test_scr.push_back(80);                     //  100, 95, 99, 80
    test_scr.push_back(90);                     // 100, 95, 90, 80, 90

    - vector will automatically allocate the required space 
    - Vector provides many bound checking methods 


        // vector <char> vowls;       - empty
        // vector <char> vowls(5);    - 5 elements initialized to 0
        vector <char> vowls {'a', 'e', 'i', 'o', 'u'};

        cout << vowls[0] << endl;
        cout << vowls[4] << endl;

        // vector <int> test_scr(3);           - 3 elements all initialized to zero
        // vector <int> test_scr(3, 100);      - 3 elements all initialized to 100

        vector <int> test_scr{100, 98, 99};

        cout << "\nTest scores using array syntax: " << endl;
        cout << test_scr[0] << endl; 
        cout << test_scr[1] << endl;
        cout << test_scr[2] << endl;

        cout << "==================================" << endl;

        cout << "\nTest scores using vector syntax: " << endl;
        cout << test_scr.at(0) << endl; 
        cout << test_scr.at(1) << endl;
        cout << test_scr.at(2) << endl;

        cout << "\nThere are " << test_scr.size() << " scores in the vector." << endl;

        cout << "\nEnter 3 test scores: ";
        cin >> test_scr.at(0);
        cin >> test_scr.at(1);
        cin >> test_scr.at(2);

        cout << "\nUpdated test scores: " << endl;
        cout << test_scr.at(0) << endl; 
        cout << test_scr.at(1) << endl;
        cout << test_scr.at(2) << endl;

        cout << "\nEnter a test score to add to the vector: "; 

        int score_to_add {0};
        cin >> score_to_add;

        test_scr.push_back(score_to_add);

        cout << "\nEnter one more test score to add to the vector: ";
        cin >> score_to_add;

        test_scr.push_back(score_to_add);
        
        cout << "\n Test scores are now: " << endl;

        cout << test_scr.at(0) << endl; 
        cout << test_scr.at(1) << endl;
        cout << test_scr.at(2) << endl;
        cout << test_scr.at(3) << endl;
        cout << test_scr.at(4) << endl;

        cout << "This should cause an exeception !!" << test_scr.at(10) << endl;        // This will give out of bound message 

        // Eg: 2D Vector
        vector <vector<int>> movie_ratings {
            {1, 2, 3, 4},
            {1, 2, 4, 4},
            {1, 3, 4, 5}
        };

        cout << "\n Here are the movie ratings for reviewer #1 using array syntax: " << endl;
        cout << movie_ratings[0][0] << endl;
        cout << movie_ratings[0][1] << endl;
        cout << movie_ratings[0][2] << endl;
        cout << movie_ratings[0][3] << endl;    

        cout << "\n Here are the movie ratings for reviewers #1 using vector syntax: " << endl;
        cout << movie_ratings.at(0).at(0) << endl;
        cout << movie_ratings.at(0).at(1) << endl;
        cout << movie_ratings.at(0).at(2) << endl;
        cout << movie_ratings.at(0).at(3) << endl;
*/  

        vector<int> vector_1;
        vector<int> vector_2;

        vector_1.push_back(10);
        vector_1.push_back(20);

        cout << "Displaying value at index 0 at vector_1: " << vector_1.at(0) << endl;
        cout << "Displaying value at index 1 at vector_1: " << vector_1.at(1) << endl;

        cout << "The size of vector_1 is: " << vector_1.size() << endl;

        cout << "=====================================================================" << endl;

        vector_2.push_back(100);
        vector_2.push_back(200);

        cout << "Displaying value at index 0 at vector_1: " << vector_2.at(0) << endl;
        cout << "Displaying value at index 1 at vector_1: " << vector_2.at(1) << endl;

        cout << "The size of vector_1 is: " << vector_2.size() << endl;

        cout << "======================================================================" << endl;

        vector <vector<int>> vector_2d; 

        vector_2d.push_back(vector_1);
        vector_2d.push_back(vector_2);

        cout << "Value at 1st row, 1st column: " << vector_2d.at(0).at(0) << endl;
        cout << "Value at 1st row, 2nd column: " << vector_2d.at(0).at(1) << endl;
        cout << "Value at 2nd row, 1st column: " << vector_2d.at(1).at(0) << endl;
        cout << "Value at 2nd row, 2nd column: " << vector_2d.at(1).at(1) << endl;

        cout << "======================================================================" << endl;
        vector_1.at(0) = 1000;
        cout << " Values of Vector_1: " << vector_1.at(0) << endl;
        cout << " Values of Vector_2: " << vector_1.at(1) << endl;

        cout << "=======================================================================" << endl;
        cout << "Value at 1st row, 1st column: " << vector_2d.at(0).at(0) << endl;
        cout << "Value at 1st row, 2nd column: " << vector_2d.at(0).at(1) << endl;
        cout << "Value at 2nd row, 1st column: " << vector_2d.at(1).at(0) << endl;
        cout << "Value at 2nd row, 2nd column: " << vector_2d.at(1).at(1) << endl;
        

    return 0;

}