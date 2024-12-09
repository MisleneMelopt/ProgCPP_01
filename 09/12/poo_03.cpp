#include <iostream>
#include <string>

using namespace std;

class Utilizador {
    private:
        string nome = "Mislene";
        string palavraPasse = "abc123def456";

    public:
        void set(string nome, string palavraPasse){
            this -> nome = nome;
            this -> palavraPasse = palavraPasse;
        }
        void get(){
            cout << nome << " " << palavraPasse << endl;
        }
};

int main() (
    Utilizador novo_obj;
    novo obj.get();
    novo_obj.set("Melo", "def123abc456");
    novo_obj.get();
    return 0;
)