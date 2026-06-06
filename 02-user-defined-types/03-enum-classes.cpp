import std;

using namespace std;

enum class Color { red, blue, green };
enum class Traffic_light { green, yellow, red };

int main()
{
    Color col = Color::red;
    Traffic_light light = Traffic_light::red;

    // Enumerations are strongly typed
    // Also, cannot mix Traffic_light and Color values
    // Color x1 = red;		// error: which red?
    // Color y2 = Traffic_light::red;	// error: that red is not a Color
    Color z3 = Color::red;	// OK
    auto x4 = Color::red;	// OK: Color::red is a Color

    // Similarly, cannot mix Color and integer values:
    // int i = Color::red;	// error: Color::red is not an int
    // Color c = 2;		// initialization error: 2 is not a Color

    // Explicitly initializing an enum with an int is allowed
    Color x = Color{5};		// OK, but verbose
    Color y {6};		// also OK

    // Similarly, can explicitly convert an enum to underlying int:
    int x1 = int(Color::red);
    cout << "x1 = " << x1 << endl;
}
