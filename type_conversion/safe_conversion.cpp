#include <iostream>

using namespace std;

int main(){

    // Type safe

    /*Every object is given a type when it is defined. 
     * A program - or a part of a program - is type-safe when objects arc used only according to the rules for their type. 
    */
    double x;	    // we forgot. . to initialize:
		    // the value of x is undefined

    double y = 1.0 + x;  // the value of y is undefined

    double l = 2.0 + x + y;    // the meaning of + and the value of z are undefined

    cout << l << "\n";

    // Safe conversion

    /*When a value always converted to an equal value or (for doubles)
    to the best approximation of an equal value - these conversions arc safe, 
    Example:
    bool to char
    bool to int
    bool to double
    char to int
    char to double
    int to double
    The most useful conversion is int to double because it allows us to mix ints and
    doubles in expressions
    */
    double d = 2.5;
    double d1 = d + 2;   // 2 is converted to 2.0 before adding
    if (d1 < 0)
	cout << "d1 is negative\n";
    else 
	cout << "d1 is positive\n";

    //Unsafe conversion
    
    /* Unsafe conversion mean, when a value can be implicitly turned into a value of another type
	that docs not equal the original value.
       
	For example: */

     int a = 10000;
     char c = a; // try to squeeze a large int into a small char
     int b = c;
    
     cout << "value of a " << a << "\n";
     cout << "value of c " << c << "\n";
     cout << "value of b " << b << "\n";

     if ( a != b)
	 cout << "a != b\n";
     else
	 cout << "a and b are equal\n";

    double n;
    cout << "Enter a number to convert into different type: \n";
    while ( cin >> n ){
	int i = n;    //put double into integer	
	char c = i;   //put an int into char
	int iv = c;   // get the integer value of character
	cout << "original double value of n ==" << n
	     << "\nconverted to int i == " << i	
	     << "\nint value of char iv == " << iv
	     << "\nchar ("<< c <<" )\n";
    }
    /* Sample input: 
     121

    Sample out put:

    original double value of n ==121
    converted to int i == 121
    int value of char iv == 121
    char (y )*/

    return 0;
}
   

