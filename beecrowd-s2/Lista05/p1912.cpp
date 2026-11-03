#include <bits/stdc++.h>
using namespace std;

double Area(vector<int> &vet, double h) {
    double a = 0;
    for (int i = 0; i < (int)vet.size(); i++) {
        if (vet[i] > h)
            a += vet[i] - h;
    }
    return a;
}

double BinarySearch(vector<int> &vet, int dado, double inic, double fim, int passos) {
    double meio = (inic + fim) / 2;

    if (passos == 0)
        return meio;

    if (Area(vet, meio) > dado)
        return BinarySearch(vet, dado, meio, fim, passos - 1);
    else
        return BinarySearch(vet, dado, inic, meio, passos - 1);
}

int main() {
    int n, a;

    while (cin >> n >> a && (n || a)) {
        vector<int> tiras(n);
        long long soma = 0;
        int maior = 0;
        for (int i = 0; i < n; i++) {
            cin >> tiras[i];
            soma += tiras[i];
            maior = max(maior, tiras[i]);
        }

        if (soma == a) {
            cout << ":D\n";
        } else if (soma < a) {
            cout << "-.-\n";
        } else {
            double h = BinarySearch(tiras, a, 0, maior, 60);
            cout << fixed << setprecision(4) << h << "\n";
        }
    }

    return 0;
}
