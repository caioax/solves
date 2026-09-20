#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    float e, f, g, h;
    char v[10];
    int x;

    a = 10;
    b = 20;
    c = 30;
    d = 40;
    e = 1.1;
    f = 2.2;
    g = 3.3;
    h = 4.4;
    for (int i = 0; i < 10; i++) v[i] = 'A' + i;
    x = 99;

    void* enderecos[] = {&a, &b, &c, &d, &e, &f, &g, &h, v, &x};
    char nomes[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'v', 'x'};

    int* ptr = &a;

    for (int i = 0; i < 20; i++) {
        cout << "ptr = " << ptr << "  conteudo = " << *ptr;

        for (int j = 0; j < 10; j++) {
            if ((void*)ptr == enderecos[j]) {
                cout << "  -> mesmo endereco de '" << nomes[j] << "'";
            }
        }

        cout << endl;
        ptr++;
    }

    return 0;
}
