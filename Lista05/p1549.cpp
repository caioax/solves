#include <bits/stdc++.h>
using namespace std;

double CalcularVolume(double h, double r, double R) {
    return (M_PI * h / 3) * ((R * R) + (R * r) + (r * r));
}

bool Dado(double h, double r, double R, double volume) {
    return CalcularVolume(h, r, R) == volume;
}

double BinarySearch(double r, double R, double volume, double H, double inicio,
                    double final) {
    double h;
    for (int i = 0; i < 100; i++) {
        h = inicio + (final - inicio) / 2;
        double raio = r + (R - r) * h / H;

        if (Dado(h, r, raio, volume)) {
            return h;
        }

        if (CalcularVolume(h, r, raio) < volume) {
            inicio = h;
        } else {
            final = h;
        }
    }
    return h;
}

int main() {
    int c;
    cin >> c;
    cout << fixed << setprecision(2);

    while (c--) {
        double n, l, b, B, H;
        cin >> n >> l >> b >> B >> H;

        cout << BinarySearch(b, B, (l / n), H, 0, H) << "\n";
    }

    return 0;
}
