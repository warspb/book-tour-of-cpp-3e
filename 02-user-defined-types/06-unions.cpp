import std;

using namespace std;

// A union is a struct in which all members are allocated at the same address
// so that the union occupies only as much space as its largest member.
// Naturally, a union can hold a value for only one member at a time.

/*
// ===== Example without using union =====
//
// For example, consider a symbol table entry that holds a name and a value.
// The value can either be a Node* or an int.

enum class Type { ptr, num };   // a Type can hold values ptr and num

struct Entry {
    string name;    // string is a standard-library type
    Type t;
    Node* p;    // use p if t==Type::ptr
    int i;      // use i if t=Type::num
};

void f(Entry* pe)
{
    if (pe->t == Type::num)
        cout << pe->i;
    // ...
}

// The members p and i are never used at the same time, so space is wasted.
*/

// ===== Example with union =====
enum class Type { ptr, num };  // a Type can hold values ptr and num 

struct Node {};

union Value {
    Node* p;
    int i;
};

// Now Value::p and Value::i are placed at the same address of memory of
// each Value object. The language doesn't keep track of which kind of value
// is held by a union, so the programmer must do that:

struct Entry {
    string name;
    Type t;
    Value v;    // use v.p if t==Type::ptr; use v.i if t==Type::num
};

void f(Entry* pe)
{
    if (pe->t == Type::num)
        cout << pe->v.i;
    // ...
}

int main()
{

}
