#include "Vector.h"		// get Vector's interface
#include <cmath>		// get the standard-library math function interface including sqrt()
#include <iostream>

using namespace std;

double sqrt_sum(Vector& v)
{
    double sum = 0;
    for (int i=0; i!=v.size(); ++i)
	sum += std::sqrt(v[i]);	// sum of square roots
    return sum;
}

int main()
{
    Vector v(3);
    v[0] = 1.0;
    v[1] = 4.0;
    v[3] = 9.0;

    auto result = sqrt_sum(v);
    cout << result << endl;
}

// compile: g++ Vector.cpp user.cpp
