// problem: 1040 - Média 3

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double media = 0, n1, n2, n3, n4;
    vector<int> pesos = {2, 3, 4, 1};
    int p1 = 2, p2 = 3, p3 = 4, p4 = 1;

    cin >> n1 >> n2 >> n3 >> n4;

    media += n1 * p1;
    media += n2 * p2;
    media += n3 * p3;
    media += n4 * p4;
    media /= 10;

    cout << fixed << setprecision(1);
    cout << "Media: " << media << endl;

    if (media >= 7) {
        cout << "Aluno aprovado." << endl;
        return 0;
    }

    if (media < 5) {
        cout << "Aluno reprovado." << endl;
        return 0;
    }

    cout << "Aluno em exame." << endl;
    double exame;

    cin >> exame;

    cout << "Nota do exame: " << exame << endl;

    media = (media + exame) / 2;

    if (media >= 5) {
        cout << "Aluno aprovado." << endl;
    } else {
        cout << "Aluno reprovado." << endl;
    }

    cout << "Media final: " << media << endl;

    return 0;
}
