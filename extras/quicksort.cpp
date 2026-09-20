#include <bits/stdc++.h>
using namespace std;

void QuickSort(char vet[], int esq, int dir) {
    int i = esq, j = dir;
    char x, y;
    x = vet[(esq + dir) / 2];

    do {
        while ((vet[i] < x) && (i < dir)) i++;
        while ((x < vet[j]) && (j > esq)) j--;

        if (i <= j) {
            y = vet[i];
            vet[i] = vet[j];
            vet[j] = y;
            i++;
            j--;
        }
    } while (i <= j);

    if (esq < j) QuickSort(vet, esq, j);
    if (i < dir) QuickSort(vet, i, dir);
}

int main() {
    return 0;  //
}
