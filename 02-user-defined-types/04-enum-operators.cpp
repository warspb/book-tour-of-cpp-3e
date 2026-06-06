import std;

using namespace std;

enum class Traffic_light { green, yellow, red };

Traffic_light& operator++(Traffic_light& t)	// prefix increment: ++
{
    switch (t) {
    case Traffic_light::green: return t=Traffic_light::yellow;
    case Traffic_light::yellow: return t=Traffic_light::red;
    case Traffic_light::red: return t=Traffic_light::green;
    }
}

// we can define operators for enums
std::ostream& operator<<(std::ostream& os, Traffic_light t)
{
    // If the repetition of the enumeration name Traffic_light becomes too tedious,
    // we can abbreviate it in a scope:
    using enum Traffic_light;	// here, we are using Traffic_light

    switch (t) {
    case green: os << "green"; break;
    case yellow: os << "yellow"; break;
    case red: os << "red"; break;
    }
    return os;
}

int main()
{
    auto signal = Traffic_light::red;
    Traffic_light next = ++signal;	// next becomes Traffic_light::green
    cout << next << endl;
}
