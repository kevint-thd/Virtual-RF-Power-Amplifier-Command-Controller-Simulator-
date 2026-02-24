


#include "ICommand.hpp" // line telsl complier that you want to use this interface iconmmad

namespace rf {// all the classes are goruped under one name space

class PowerGetCommand : public ICommand { //defining your concrete class PowerGetCommand, which inherits from the ICommand interface. public Icommand  
    //ans this fucntion inherting Icommand  and implement execute function
public:

    std::string execute() const override  { //const says function wont change state of the object 
        return "[RESP] Power = 29.8 dBm";
    }

};


}