// sam104
// Pointer Basics	(Raw Pointers)
// - demonstrates declaring, initializing, and de-referencing a pointer to an int.

#include <iostream>
using namespace std;

int main()
{
    cout << "sam104 - Pointer Basics - Using a pointer to an int" << endl;

    int x = 25;

    int* p = nullptr;
    // declares a variable p as type "pointer to int"
    // "int*" is read as "pointer to int"
    // The pointer p is a variable that can store the address of an int.
    // It is good practice to assign a 'nullptr' value to the pointer initially. (unless it is directly initialized)
    // nullptr is a special value indicating that the pointer doesn't point at any memory location.

    p = &x;
    // '&x' means: get the memory address of the variable x. ('&' is the 'address-of' operator)
    // We then assign the address of x into the variable 'p'
    // So, p stores the address of the variable  (or p points to the memory space owned by x)
    // A memory address is itself an integer value (normally 8-bytes)

    cout << "x: (value in x) is : " << x << endl;		//value of x
    cout << "&x: (address of x) is : " << &x << endl;	//address of x

    cout << "p: (value in pointer p) is : " << p << endl;		//value stored in p, which is the address of x

    // To access the object that a pointer points to, we DE-REFERENCE the pointer.
    // From above, the pointer p stores the address of x, so it points at x, which contains 25.
    // To get at the value 25 using the pointer p, we dereference the pointer using "*p"
    // De-referencing means: getting access to the location that the pointer points to.

    // Here, we output what p is pointing at by de-referencing the pointer p.
    cout << "*p (de-referencing the pointer)(i.e. get value at location where p points to): *p = ";
    cout << *p << endl;

    // note that the type of the value retrieved by using "*p" is the same as the type that
    // the pointer p was declared to point at.
    // p was declared to be a pointer to an int, therefore,
    // *p is of type int (*p is the thing that p points to)

    // Above, *p was used as an r-value (right-value), so it got the value at the location that p
    // was pointing to.  Above, it retrieved teh value 25.
    //
    // Using *p as an l-value  (left-value). (i.e. on the left of an equals symbol)
    // When used as an l-value, de-referencing the pointer gives access to the location.
    // Below, we assign the number 99 to the location that p is pointing to.
    // Note the slightly different interpretation of *p (depending on whether it is an r-value or l-value)

    *p = 99;
    // put the value 99 into the location at which p is pointing.
    // p is pointing at x, so *p dereferences p, giving access to the memory space that p points to,
    // 99 will be put into that memory space (which is into variable x, as p points at x)
    // The value in x will be changed by use of the pointer.

    cout << "... after assigning the value 99 into x using pointer p \"*p = 99;\"" << endl;
    cout << "Getting the value from x by de-referencing pointer p   *p = " << *p << endl;
    cout << "x: (value in x) is : " << x << endl;	//value of x was changed using pointer p

    cout << "\nThe size of pointer p on this machine is : " << sizeof(p) << " bytes." << endl;

    //TODO in class -- complete in class and confirm your output
    // Q1.
    // - declare a variable of type double called 'height' and assign it your height in meters (e.g. 1.56)
    //    - declare a variable pHeight of type 'pointer to double';
    //    - get the address of the height variable and assign it to the pointer pHeight;
    //    - print out the height variable
    //    - print out the address of the height variable using '&'
    //    - print out the value of the pointer pHeight
    //    - print out the value of the height variable by de-referencing the pHeight pointer variable
    //    - assign a new value to the height variable e.g. 1.88
    //    - print out the value
    //    - assign a new value the height variable using the pointer pHeight  (dereference as an l-value)
    //    - DRAW a memory diagram on paper to show the state of all variables just before end of main()

    //TODO
    // Q.2 Declare and initialize a double d initialized with the value 3.14.
    //     Declare a pointer pd and set it to point at the variable d.
    //     Using the pointer, set the value of d to 3.14159, and output
    //     the new value of d using the pointer.

    //TODO
    // Q.3 Declare a pointer to a char called pc, but don't assign it a value.
    //     Print out the value of pc.  Look at the value. What does the value represent?
    //     Output *pc (that is, the thing that pc is pointing at)
    //     -- did it run?, if so, study the output. What has happened?  Explain!

    return 0;
}