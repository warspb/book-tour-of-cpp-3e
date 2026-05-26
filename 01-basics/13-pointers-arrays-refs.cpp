import std;

using namespace std;

int main()
{
    // In declarations, [ ] means "array of" and * means "pointer to".
    char v[6];	// array of 6 characters
    char* p;	// pointer to character

    // In an expression, prefix unary * means "contents of"
    // and prefix unary & means "address of".
    char* p1 = &v[3];	// p1 points to v's fourth element
    char x = *p1;	// *p1 is the object that p1 points to

    /*
    Declaration --> Type
    T a[n]	--> T[n]: a is an array of n Ts
    T* p	--> T*: p is a pointer to T
    T& r	--> T&: r is a reference to T
    T f(a)	--> T(A): f is a function taking an argument of type A returning a result of type T
    */
}

// print the elements of an array
void print()
{
    int v[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto i=0; i!=10; ++i)	// print elements
	cout << v[i] << '\n';
}

// copy ten elements from one array to another:
void copy_fct()
{
    int v1[10] = {0,1,2,3,4,5,6,7,8,9};
    int v2[10];		// to become a copy of v1

    for (auto i=0; i!=10; ++i)	// copy elements
	v2[i]=v1[i];
}

// print elements of an array using range-for loop
void print2()
{
    int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};	// array bound not required when we initialize array with a list

    for (auto x : v)	// for each x in v (x is a copy of v's element)
	cout << x << '\n';

    for (auto x : {10, 21, 32, 43, 54, 65})	// for each integer in the list
	cout << x << '\n';
}

// for loop where the loop variable isn't a copy of the sequence's elements, but just a reference to them
void increment()
{
    int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // In a declaration, the unary suffix & means "reference to". A reference is similar to
    // a pointer, except that you don't need to use a prefix * to access the value referred
    // to by the reference. Also, a reference cannot be made to refer to a different object
    // after its initialization.
    for (auto& x : v)	// add 1 to each x in v (x refers to the element, it's not a copy)
	++x;
}

// References are particularly useful for specifying function arguments:
void sort(vector<double>& v) {}	// sort v (v is a vector of doubles)
// For a call sort(my_vec), we do not copy my_vec. Therefore, it really is my_vec that is sorted
// and not a copy of it.

// When we don't want to modify an argument but still don't want the cost of copying,
// we use a const reference:
double sum(const vector<double>&) {}
