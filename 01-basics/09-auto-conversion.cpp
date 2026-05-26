import std;

using namespace std;

int main()
{
    double d = 2.2;
    int i = 7;
    d = d*i;	// i automatically converted to double
    i = d*i;	// beware: truncating the double d*i to an int
}
