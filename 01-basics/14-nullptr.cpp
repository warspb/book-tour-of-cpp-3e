import std;

using namespace std;

int main()
{
    // there is only one nullptr shared by all pointer types
    double* pd = nullptr;
    // Link<Record>* lst = nullptr;	// pointer to a Link to a Record
    // int x = nullptr;	// error: nullptr is a pointer not an integer
}

// count the number of occurrences of x in p[]
// p is assumed to point to a zero-terminated array of char (or to nothing)
// The characters in a string literal are immutable, so to handle
// count_x("Hello!", 'e'), we declare p as a `const char*` argument.
int count_x_for(const char* p, char x)
{
    if (p==nullptr)
	return 0;

    int count = 0;
    for (; *p!=0; ++p)
	if (*p==x)
	    ++count;

    return count;
}

// count the number of occurrences of x in p[]
// p is assumed to point to a zero-terminated array of char (or to nothing)
int count_x_while(const char* p, char x)
{
    if (p==nullptr)
	return 0;

    int count = 0;
    // A test of a numeric value (e.g. while(*p)) is equivalent to comparing the
    // value to 0 (e.g. while (*p!=0)). A test of a pointer value (e.g. if(p))
    // is equivalent to comparing the value to nullptr (e.g. if (p!=nullptr))
    while (*p) {
	if (*p==x)
	    ++count;
	++p;
    }

    return count;
}

// There is no "null reference". A reference must refer to a valid object (and
// implementations assume that it does). There are obscure and clever ways to
// violate that rule; don't do that.

