import std;

using namespace std;

// If you don't ever want to explicitly qualify enumerator names and want
// enumerator values to be ints (without the need for an explicit conversion),
// you can use a "plain" enum.
enum Color { red, green, blue };

int main()
{
    // no need to scope green as Color::green
    int col = green;	// here col gets the value 1
    cout << col << endl;	//=> 1
}

