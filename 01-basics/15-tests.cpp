import std;

using namespace std;

int main()
{}

// if statement example
bool accept()
{
    cout << "Do you want to proceed (y or n)?\n";	// write question
    char answer = 0;	// initialize to a value that will not appear on input
    cin >> answer;	// read answer

    if (answer == 'y')
	return true;
    return false;
}

// switch statement example
bool accept2()
{
    cout << "Do you want to proceed (y or n)?\n"; 	// write question
    char answer = 0;	// initialize to a value that will not appear on input
    cin >> answer;	// read answer

    switch (answer) {
    case 'y':
	return true;
    case 'n':
	return false;
    default:
	cout << "I'll take that for a no.\n";
	return false;
    }
}

// switch example 2
void action()
{
    while (true) {
	cout << "Enter action:\n";	// request action
	string act;
	cin >> act;		// read characters into a string
	Point delta {0,0};	// Point holds an {x,y} pair

	for (char ch : act) {
	    switch (ch) {
	    case 'u':	// up
	    case 'n':	// north
		++delta.y;
		break;
	    case 'r':	// right
	    case 'e':	// east
		++delta.x;
		break;
	    // ... more actions ...
	    default:
		cout << "I freeze!\n";
	    }
	    // move(current + delta * scale);
	    // update_display();
	}
    }
}

// Like a for-statement, an if-statement can introduce a variable and test it.
void do_something(vector<int>& v)
{
    if (auto n = v.size(); n != 0) {
	// ... we get here if n != 0
    } else {
	// n can be used here too!
    }

    // The idiomatic way to test against 0 or nullptr.
    // Prefer to use this terser and simpler form when you can.
    if (auto n = v.size()) {
	// ... we get here if n != 0
    }
}
