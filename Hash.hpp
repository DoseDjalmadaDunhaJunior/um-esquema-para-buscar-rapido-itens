//
// Created by djalma cunha on 2019-01-07.
//

#ifndef MATRIZ_RAPIDA_HASH_HPP
#define MATRIZ_RAPIDA_HASH_HPP
#include "StringChar.hpp"
#include <math.h>

class Hash {
public:
    void insere(int n){
        int aux, aux2;
        StringChar oi;
        string temp = oi.converte(n);
        char* arr = oi.converte(temp);
        int size = static_cast<int>(temp.size() - 1);
        aux2 = arr[size];
        if(size == 0){
            vet[0][n] = n;
        }
        else{
            int pri,seg;
            linhaColuna(n,&pri,&seg);
            vet[pri][seg] = n;
        }
    }

    int busca(int n){
        int pri,seg;
        linhaColuna(n,&pri,&seg);
        if(vet[pri][seg] == n){
            int ver = vet[pri][seg];
            return vet[pri][seg];
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

    void linhaColuna(int n,int* lin, int* col){
        int pri,seg;
        StringChar oi;
        string temp = oi.converte(n);
        char* arr = oi.converte(temp);
        char* morre = arr;
        int size = static_cast<int>(temp.size() - 1);
        seg = oi.converte(morre[size]);
        morre[size] = '\n';
        string str = oi.converte(morre);
        pri = stoi(str);
        *lin = pri;
        *col = seg;
    }

};


#endif //MATRIZ_RAPIDA_HASH_HPP
