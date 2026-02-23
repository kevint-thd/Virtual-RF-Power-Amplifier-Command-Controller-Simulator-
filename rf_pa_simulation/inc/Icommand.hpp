#pragma once //Prevents the header file from being included multiple times.
# include<string> // if you want o use std::string

namespace rf { //a unique folder for class name , namespace prevents name cconflicts

class ICommand {
public:
    virtual ~ICommand() = default;

    virtual std::string execute() const = 0;
    //virtual → supports polymorphism //= 0 → pure virtual → must override
//const → this function does NOT modify object
// hello

};
}
//This fle is An interface inside a namesapce 
//safe from multiple inclusion designed for polymorpism
//or other words: “Any command in namespace rf must implement 
//a function called execute() that returns a string and does not modify the object */

// virtual ~ICommand() = default;:The destructor is virtual because ICommand is an interface. This ensures that when a derived class is deleted through a base class pointer, the derived class destructor is called correctly. = default tells the compiler to generate the default destructor, which is fine for an interfac