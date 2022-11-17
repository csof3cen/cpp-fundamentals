#include <iostream>

int main(){
    int a = 6;
    double b = 6.78;
    std::string text = "Hello World";
    std::cout << "Value of a : " << a << std::endl;
    std::cout << "Memory adress of a : " << &a << std::endl;

    int * aPointer;
    aPointer = &a;
    // We can declare multiple pointers on the same line, each preceded with a *
    int * cPointer,  * dPointer;
    auto * bPointer = &b;

    std::string * textReference = &text;

    // If we point to a pointer, we need a add another *, based on the deepness
    std::string ** referenceTextReference = &textReference;
    std::string *** referenceToReferenceTextReference = &referenceTextReference;

    // To access the value of a pointer, we can use the deference operator (*)
    std::cout << **referenceTextReference << std::endl; // Hello World
    std::cout << ***referenceToReferenceTextReference << std::endl; // Hello World
    ***referenceToReferenceTextReference = "No longer Hello World";
    std::cout << "New value : " << ***referenceToReferenceTextReference << std::endl;

    // REFERENCES
    int number = 6;
    int &numberReference = number;
    int &secondNumberReference = number; // Can define multiple references on the same object.
    // Referencers are not reassignable
    // &secondNumberReference = a;

    std::cout << numberReference << std::endl;
    numberReference++; // This modifies directly the referenced variable
    std::cout << number << std::endl;

    // CONST
    const int anotherNumber = 67;
    std::cout << anotherNumber;
    const int * constPointer = &anotherNumber;
    // consts can only be assigned once
    //anotherNumber = 6;

    return 0;
}