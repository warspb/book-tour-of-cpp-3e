import std;

using namespace std;


struct Vector {
    double* elem;	// pointer to elements
    int sz;		// number of elements
};


/* A function that initializes a vector */
void vector_init(Vector& v, int s)
{
    v.elem = new double[s];	// allocate an array of s doubles
    v.sz = s;
}


/*
new:
The new operator allocates memory from an area called the free store (also known as dynamic memory and heap).
Objects allocated on the free store are independent of the scope from which they are created and "live" until
they are destroyed using the delete operator.
 */


// an example of using vector:
double read_and_sum(int s)
	// read s integers from cin and return their sum; s is assumed to be positive
{
    Vector v;
    vector_init(v,s);	// allocate s elements for v

    for (int i=0; i!=s; ++i)
	cin >> v.elem[i];	// read into elements

    double sum = 0;
    for (int i=0; i!=s; ++i)
	sum+=v.elem[i];		// compute the sum of the elements
    return sum;
}


// We use . (dot) to access struct members through a name (and through a reference) and -> to
// access struct members through a pointer. For example:
void f(Vector v, Vector& rv, Vector* pv)
{
    int i1 = v.sz;	// access through name
    int i2 = rv.sz;	// access through reference
    int i3 = pv->sz;	// access through pointer
}


int main()
{
    // Define a variable of type Vector
    Vector v;	// not very useful since v's elem pointer doesn't point to anything.

    vector_init(v,5);
    delete v.elem;
}

