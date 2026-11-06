// It's important to distinguish between the interface to a part and its implementation.
// At the language level, C++ represents interfaces by declarations.
double sqrt(double);		// the square root function takes a double and returns a double

class Vector {			// what is needed to use a Vector
public:
    Vector(int s);
    double& operator[](int i);
    int size();

private:
    double* elem;		// elem points to an array of sz doubles
    int sz;
};

// The function bodies, the function definitions, can be "elsewhere".
double sqrt(double d)		// definition of sqrt()
{
    // ... algorithm as found in math textbook ...
}

// For Vector, we need to define all three member functions:
Vector::Vector(int s)		// definition of the constructor
    :elem{new double[s]}, sz{s}	// initialize members
{}

double& Vector::operator[](int i) // definition of subscripting
{
    return elem[i];
}

int Vector::size()		// definition of size()
{
    return sz;
}

// Note: there can be many declarations for an entity, such as a function,
// but only one definition.

int main()
{}
