#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

void exibirMatriz(const vector<vector<double>>& M) {
    int n = M.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << fixed << setprecision(2) << M[i][j] << "\t";
        }
        cout << "| " << fixed << setprecision(2) << M[i][n] << endl;
    }
    cout << "---------------------------------------" << endl;
}

vector<double> eliminacaoDeGauss(vector<vector<double>> Aumentada) {
    int n = Aumentada.size();

    for (int k = 0; k < n; k++) {
        if (abs(Aumentada[k][k]) < 1e-9) {
            cerr << "Erro: Pivo e zero. O sistema pode ser singular ou instavel." << endl;
            return {};
        }

        for (int i = k + 1; i < n; i++) {
            double fator = Aumentada[i][k] / Aumentada[k][k];
            
            for (int j = k; j < n + 1; j++) {
                Aumentada[i][j] -= fator * Aumentada[k][j];
            }
        }
    }

    cout << "Matriz apos Escalonamento:" << endl;
    exibirMatriz(Aumentada);

    vector<double> x(n);
    
    for (int i = n - 1; i >= 0; i--) {
        double soma = 0.0;
        
        for (int j = i + 1; j < n; j++) {
            soma += Aumentada[i][j] * x[j];
        }
        
        x[i] = (Aumentada[i][n] - soma) / Aumentada[i][i];
    }

    return x;
}

int main() {
    
    vector<vector<double>> MatrizAumentada = {
        {1.0, 2.0, 1.0, 1.0},
        {3.0, 4.0, -1.0, 0.0},
        {-1.0, 0.0, 2.0, 2.0}
    };
    
    cout << "Sistema Original (Matriz Aumentada):" << endl;
    exibirMatriz(MatrizAumentada);

    vector<double> solucao = eliminacaoDeGauss(MatrizAumentada);

    if (!solucao.empty()) {
        cout << "Solucao do Sistema:" << endl;
        for (size_t i = 0; i < solucao.size(); i++) {
            cout << "x[" << i + 1 << "] = " << fixed << setprecision(4) << solucao[i] << endl;
        }
    }

    return 0;
}