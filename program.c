#include <stdio.h>
#include <math.h>

#define N 10           // Jumlah segmen (harus genap untuk Simpson's 1/3 Rule)
#define T 1.0          // Periode (dalam detik)
#define PI 3.141592653589793

// Fungsi arus: i(t) = 3*sin(2*pi*t)
double current(double t) {
    return 3.0 * sin(2.0 * PI * t);
}

int main() {
    double h = T / N;
    double sum = 0.0;
    double t, it, it2;
    int i;

    // Simpson's 1/3 Rule
    for (i = 0; i <= N; i++) {
        t = i * h;
        it = current(t);
        it2 = it * it;

        if (i == 0 || i == N) {
            sum += it2;                // Titik awal dan akhir
        } else if (i % 2 == 1) {
            sum += 4 * it2;            // Indeks ganjil
        } else {
            sum += 2 * it2;            // Indeks genap (selain awal/akhir)
        }
    }

    double integral = (h / 3.0) * sum;
    double rms = sqrt(integral);

    printf("Nilai RMS Current (Simpson's Rule) = %.6f\n", rms);

    return 0;
}