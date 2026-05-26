import std;

using namespace std;

struct Point {
    int x;
    int y;
};

void print_point(const Point& p)
{
    cout << "(" << p.x << "," << p.y << ")" << endl;
}

int main()
{
    int x = 2;
    int y = 3;
    x = y;	// x becomes 3
    // Note: x == y

    Point p1 {1,2};
    Point p2 = p1;	// Unlike Java, p2 is a copy of p1. They don't refer to the same object!
    print_point(p1);	// (1,2)
    print_point(p2);	// (1,2)

    p1.x = 3;
    print_point(p1);	// (3,2)
    print_point(p2);	// (1,2)

    cout << "===== Pointers =====" << endl;
    // If we want different objects to refer to the same (shared) value, we can use pointers.

    x = 2;
    y = 3;
    int* p = &x;
    int*q = &y;		// now p != q and *p != *q
    cout << p << " and " << q << endl;		// 0x16fa7325c and 0x16fa73258
    cout << *p << " and " << *q << endl;	// 2 and 3

    p = q;	// p becomes &y; now p == q, so (obviously) *p = *q;
    cout << p << " and " << q << endl;		// 0x16fa73258 and 0x16fa73258
    cout << *p << " and " << *q << endl;	// 3 and 3

    p1 = {1,2};
    p2 = {3,4};
    Point* pointer1 = &p1;
    Point* pointer2 = &p2;
    print_point(p1);	// (1,2)
    print_point(p2);	// (3,4)

    pointer1 = pointer2;
    print_point(p1);	// (1,2)
    print_point(p2);	// (3,4)

    pointer1->x = 30;	// points to p2
    print_point(p1);	// (1,2)
    print_point(p2);	// (30,4)

    pointer2->x = 300;	// also points to p2
    print_point(p1);	// (1,2)
    print_point(p2);	// (300,4)


    cout << "===== References =====" << endl;
    // A reference and a pointer both refer/point to an object and both are represented
    // in memory as a machine address.
    // Assignment to a reference does not change what the reference refers to but
    // assigns to the referenced object.

    x = 2;
    y = 3;
    int& xr = x;	// xr refers to x
    int& yr = y;	// yr refers to y
    cout << x << " and " << y << endl;		// 2 and 3
    cout << xr << " and " << yr << endl;	// 2 and 3

    xr = yr;	// read through yr, write through xr; x becomes 3
    cout << x << " and " << y << endl;		// 3 and 3
    cout << xr << " and " << yr << endl;	// 3 and 3

    yr = 30;
    cout << x << " and " << y << endl;		// 3 and 30
    cout << xr << " and " << yr << endl;	// 3 and 30

    p1 = {1,2};
    p2 = {3,4};
    Point& p1ref = p1;
    Point& p2ref = p2;
    print_point(p1);	// (1,2)
    print_point(p2);	// (3,4)

    p1ref = p2ref;	// copy the value of p2 into p1,
    			// but p1 and p2 still remain independent objects
    print_point(p1);	// (3,4)
    print_point(p2);	// (3,4)

    p2ref.y = 40;
    print_point(p1);	// (3,4)
    print_point(p2);	// (3,40)

    p1ref.y = 400;
    print_point(p1);	// (3,400)
    print_point(p2);	// (3,40)
}
