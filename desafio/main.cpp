#include <string>
#include <iostream>
#include "Identidade.hpp"


int main(){
    Identidade p1("wenderson", std::string("12345678912"), 18);

    p1.get_identidade();
    return 0;
}