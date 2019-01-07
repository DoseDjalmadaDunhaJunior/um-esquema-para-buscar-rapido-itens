//
// Created by djalma cunha on 2019-01-07.
//

#ifndef MATRIZ_RAPIDA_HASH_HPP
#define MATRIZ_RAPIDA_HASH_HPP
#include <iostream>
#include <math.h>
using namespace std;

class Hash {
public:
    void insere(int n){
        int aux, aux2 = (digitos(n) - 1);
        aux = pow(10,aux2);
        vet[aux2][(n/aux)] = n;
    }

    int busca(int n){
        int aux, aux2 = (digitos(n) - 1);
        aux = pow(10,aux2);
        if(vet[aux2][(n/aux)] == n){
            return vet[aux2][(n/aux)];
        }
        else{
            puts("numero nao encontrado");
            return 0;
        }
    }

private:
    int vet[][10];

    int digitos(int valor){
        int contaDigitos = 0;
        if (valor == 0) contaDigitos = 1;
        else
            while (valor != 0)
            {
                contaDigitos = contaDigitos + 1;
                valor = valor / 10;
            }
        return contaDigitos;
    }

};


#endif //MATRIZ_RAPIDA_HASH_HPP
