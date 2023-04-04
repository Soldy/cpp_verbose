#include <string>

namespace cpp_verbose{
    void msg(std::string msg, std::string element, int level){
        if(cppConfig::getInt("verbose") >= level)
            std::cout << msg << " : " << element << std::endl;
    };
    void msg(
      std::string msg,
      std::string element,
      std::string error,
      int level
    ){
        if(cppConfig::getInt("verbose") >  level)
            std::cout <<
                msg << " : " <<
                element <<
                " - " <<
                error <<
                std::endl;
    };
};
