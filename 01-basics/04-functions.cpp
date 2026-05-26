/*
Function declarations
---------------------

Elem* next_elem();	// no argument; return a pointer to Elem (an Elem*)
void exit(int);		// int argument; return nothing
double sqrt(double);	// double argument; return a double

double s2 = sqrt(2);		// call sqrt() with the argument double{2}
double s3 = sqrt("three");	// error: sqrt() requires an argument of type double


// Function declarations may contain argument names. But unless the declaration is also
// a function definition, the compiler ignores such names.
double sqrt(double d);	// return the square root of d
double square(double);	// return the square of the argument
*/


/*
Type of function: consists of its return type and the sequence of its argument types.

double get(const vector<double>& vec, int index);	// type: double(const vector<double>&, int)

If the function is a member of a class (member function), the name of its class is also part 
of the function type.
char& String::operator[](int index);	// type: char& String::(int)
*/


/*
Function overloading - if two functions are defined with the same name, but with different
argument types, the compiler will choose the most appropriate function to invoke for each call.

void print(int);	// takes an integer argument
void print(double);	// takes a floating-point argument
void print(string);	// takes a string argument

void user()
{
	print(42);		// calls print(int)
	print(9.65);		// calls print(double)
	print("Barcelona");	// calls print(string)
}

If two alternative functions could be called, but neither is better than the other, the call is
deemed ambiguous and the compiler gives an error:

void print(int,double);
void print(double,int);

void user2()
{
	print(0,0);	// error: ambiguous
}
*/
