import std;

using namespace std;

int main()
{
    // For almost all types, the effect of reading from or writing to
    // an uninitialized variable is undefined.
    int x = 7;
    int& r {x};	// bind r to x (r refers to x)
    r = 7;	// assign to whatever r refers to

    int& r2;	// error: uninitialized reference
    r2 = 99;	// would have assigned to whatever r2 referred to
}
