#include <bits/stdc++.h>
#include "listaCDE.h"
using namespace std;

main()
{
    listaCDE f;
    create(&f);
    insert(&f, 12);
    insert(&f, 320);
    insert(&f, 415);
    imprime(f, 'i');
    remover(&f, 320);
    imprime(f, 'f');
}