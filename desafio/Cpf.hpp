#include <iostream>
#include <string>

class Cpf
{
private:
    std::string cpf;
public:
    Cpf(std::string cpf);
    ~Cpf();
    void Cpf_check();
    std::string get_Cpf();
};



