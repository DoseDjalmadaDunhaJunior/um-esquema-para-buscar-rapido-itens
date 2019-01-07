#include "Hash.hpp"
#include "StringChar.hpp"
#include <exception>
int main() {

    Hash oi;
    oi.insere(1000);
    cout<<oi.busca(1000)<<endl;


    return 0;
}