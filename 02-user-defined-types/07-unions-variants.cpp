import std;

using namespace std;

// Maintaining the correspondence between a type field, sometimes called a discriminant
// or a tag (t in the following example), and the type held in a union is error-prone. 
/*
struct Entry {
    string name;
    Type t;	// tag or discriminant
    Value v;	// union type
}
*/

// The standard library type, variant, can be used to eliminate most direct use of
// unions. A variant stores a value of one of a set of alternative types.
// For example, a variant<Node*,int> can hold either a Node* or an int.
struct Node {};
    
struct Entry {
    string name;
    variant<Node*,int> v;
};

void f(Entry* pe)
{
    if (holds_alternative<int>(pe->v)) // does *pe hold an int?
	cout << get<int>(pe->v);       // get the int
    // ...
}

int main()
{
    
}
