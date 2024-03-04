#include <string>

class Livro
{
private:
    std::string nome;
    std::string autor;
    int paginas;
    bool disponibilidade = true;
public:
    Livro(std::string nome, std::string autor, int paginas);
    ~Livro();
    void emprestar();
    void devolver();
    std::string get_disponibilidade();

};

