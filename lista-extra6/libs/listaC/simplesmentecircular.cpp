#include <bits/stdc++.h>
#include "listac.h"
using namespace std;

void menu(){
    cout << "------------------------------------------------------" << endl;
    cout << "Digite 1 para inserir um elemento no inicio da lista: " << endl;
}

main(){
    listaC L;
    create(&L);
    insert(&L,12);
    insert(&L,320);
    insert(&L,413);
    imprime(L);
    remover(&L,320);
    imprime(L);
}
