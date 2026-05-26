import std;

using namespace std;

int main()
{
    double d;
    cout << d << endl;	// some garbage value

    double d1 = 2.3;
    double d2 {2.3};
    double d3 = {2.3};	// the = is optional with {..}
    cout << d1 << ", " << d2 << ", " << d3 << endl;

    complex<double> z = 1;	// a complex number with double-precision floating-point scalars
    complex<double> z2 {d1,d2};
    complex<double> z3 = {d1,d2};	// the = is optional with {..}
    cout << z << ", " << z2 << ", " << z3 << endl;

    vector<int> v {1,2,3,4,5,6};	// a vector of ints
    cout << v[0] << endl;

    int i1 = 7.8;	// i1 becomes 7 (surprise?)
    // int i2 {7.8};	// error: floating-point to integer conversion

    auto b = true;	// a bool
    auto ch = 'x';	// a char
    auto i = 123;	// an int
    auto dd = 1.2;	// a double
    auto z1 = sqrt(dd);	// z1 has the type of whatever sqrt(dd) returns
    auto bb {true};	// bb is a bool
}

