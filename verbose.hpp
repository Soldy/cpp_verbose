#ifndef __CPP_VERBOSE_HPP_
#define __CPP_VERBOSE_HPP_
#include <string>
#include <iostream>

namespace cpp_verbose{
    void msg(std::string msg, std::string element, int level){
        if(cppConfig::getInt("verbose", 0) >= level)
            std::cout << msg << " : " << element << std::endl;
    };
    void msg(
      std::string msg,
      std::string element,
      std::string error,
      int level
    ){
        if(cppConfig::getInt("verbose", 0) >=  level)
            std::cout <<
                msg << " : " <<
                element <<
                " - " <<
                error <<
                std::endl;
    };
    void msg(std::string msg, std::string element){
        cpp_verbose::msg(msg,element,1);
    };
    void msg(
      std::string msg,
      std::string element,
      std::string error
    ){
        cpp_verbose::msg(msg,element,error,1);
    };
};
#endif
