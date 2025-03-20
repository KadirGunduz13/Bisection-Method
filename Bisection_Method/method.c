#include <stdio.h>
#include <math.h>

#define EPSILON 0.0001  // Hata toleransı

// Örnek fonksiyon: f(x) = x^3 - x - 2
// Kendi fonksiyonunu değiştirebilirsin
double func(double x) {
    return x*x*x - x - 2;
}

// İkiye bölme yöntemi
double bisection(double a, double b) {
    if (func(a) * func(b) >= 0) {
        printf("Bu aralikta kok bulunmamaktadir!\n");
        return -1;
    }

    double c;
    while ((b - a) >= EPSILON) {
        c = (a + b) / 2;

        if (func(c) == 0.0)  // Kök bulundu
            break;
        else if (func(c) * func(a) < 0)
            b = c;
        else
            a = c;
    }
    return c;
}

int main() {
    double a = 1, b = 2; // Kökün içinde olduğu bilinen aralık
    double root = bisection(a, b);
    if (root != -1)
        printf("Kok yaklasik olarak: %.4lf\n", root);
    return 0;
}
