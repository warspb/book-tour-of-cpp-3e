import std;

using namespace std;

/*
const: roughly "I promise not to change this value". The value of a const can be calculated at run time.
constexpr: roughly "to be evaluated at compile time". (pure function?)
*/

int main()
{
    constexpr int dmv = 17;	// dmv is a named constant
    int var = 17;		// var is not a constant
    const double sqv = sqrt(var);	// sqv is a named constant, possibly computed at run time

    double sum(const vector<double>&);	// sum will not modify its argument

    vector<double> v {1.2, 3.4, 4.5};	// v is not a constant
    // const double s1 = sum(v);		// OK: sum(v) is evaluated at run time

    // constexpr double s2 = sum(v);	// ERROR: sum(v) is not a constant expression
}

/*
For a function to be usable in a constant expression, it must be defined constexpr or consteval.
To be constexpr/consteval, a function must be rather simple and cannot have side-effects and
can only use information passed to it as arguments. In particular, it cannot modify
non-local variables, but it can have loops and use its own local variables.
*/
constexpr double square(double x) { return x*x; }

void main2()
{
    int var = 17;
    
    constexpr double max1 = 1.4*square(17);		// OK: 1.4*square(17) is a constant expression
    // constexpr double max2 = 1.4*square(var);		// ERROR: var is not a constant expression
    const double max3 = 1.4*square(var);		// OK: may be evaluated at run time    
}

// A constexpr function can be used for non-constant arguments, but when that is done the result
// is not a constant expression. We allow a constexpr function to be called with non-constant-expression
// arguments in contexts that do not require constant expressions. That way, we don't have to define
// essentially the same function twice: once for constant expressions and once for variables.
// When we want a function to be used only for evaluation at compile time, we declare it consteval
// rather than constexpr.
consteval double square2(double x) { return x*x; }

void main3()
{
    int var = 17;
    
    constexpr double max1 = 1.4*square2(17);	// OK: 1.4*square(17) is a constant expression
    // const double max3 = 1.4*square2(var);		// ERROR: var is not a constant    
}

constexpr double nth(double x, int n)	// assume 0<=n
{
    double res = 1;
    int i = 0;
    while (i<n) {	// while-loop: do while the condition is true
	res *= x;
	++i;
    }
    return res;
}
