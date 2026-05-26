import std;

using namespace std;

int main()
{
    int x = 1, y = 0;

    cout << "x=" << x << ", y=" << y << endl;

    cout << "x&y = " << (x&y) << endl;		// bitwise and
    cout << "x|y = " << (x|y) << endl;		// bitwise or
    cout << "x^y = " << (x^y) << endl;		// bitwise exclusive or (xor)
    cout << "~x = " << (~x) << endl;		// bitwise complement

    cout << "x&&y = " << (x&&y) << endl;	// logical and
    cout << "x||y = " << (x||y) << endl;	// logical or
    cout << "!x = " << (!x) << endl;		// logical not (negation)
}

