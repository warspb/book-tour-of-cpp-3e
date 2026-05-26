import std;

using namespace std;

int main()
{
    int x = 10, y = 3;

    cout << "x=" << x << ", y=" << y << endl;

    cout << "x+y = " << (x+y) << endl;	// plus
    cout << "+y = " << (+y) << endl;	// unary plus
    cout << "x-y = " << (x-y) << endl;	// minus
    cout << "-y = " << (-y) << endl;	// unary minus
    cout << "x*y = " << (x*y) << endl;	// multiply
    cout << "x/y = " << (x/y) << endl;	// divide
    cout << "x%y = " << (x%y) << endl;	// remainder (modulus) for integers

    x+=y;	// x = x+y
    ++x;	// increment: x = x+1
    x-=y;	// x = x-y
    --x;	// decrement: x = x-1
    x*=y;	// scaling: x = x*y
    x/=y;	// scaling: x = x/y
    x%=y;	// x = x%y
}

