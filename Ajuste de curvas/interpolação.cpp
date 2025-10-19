#include <iostream>
using namespace std;

float L0(float x0, float x1, float x2, float x) {
    return ((x - x1) * (x - x2)) / ((x0 - x1) * (x0 - x2));
}
float L1(float x0, float x1, float x2, float x) {
    return ((x - x0) * (x - x2)) / ((x1 - x0) * (x1 - x2));
}
float L2(float x0, float x1, float x2, float x) {
    return ((x - x0) * (x - x1)) / ((x2 - x0) * (x2 - x1));
}

int main() {
    float x, x0, x1, x2, y0, y1, y2, l0, l1, l2;

    cout << "Digite o ponto1 (x0 y0): ";
    cin >> x0 >> y0;
    cout << "Digite o ponto2 (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Digite o ponto3 (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Digite o valor de x que você pretende predizer: ";
    cin >> x;

    l0 = L0(x0, x1, x2, x);
    l1 = L1(x0, x1, x2, x);
    l2 = L2(x0, x1, x2, x);

    float px;
    px = y0 * l0 + y1 * l1 + y2 * l2;

    cout << "\nValor de x para predicao: " << x << endl;
    cout << "Valor do polinomio P(x): " << px << endl;

    return 0;
}