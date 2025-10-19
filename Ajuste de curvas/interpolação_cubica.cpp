#include <iostream>
using namespace std;
float L0(float x0, float x1, float x2, float x3, float x){
    float retorno = ((x-x1)*(x-x2)*(x-x3))/((x0-x1)*(x0-x2)*(x0-x3));
    return retorno;
}
float L1(float x0, float x1, float x2, float x3, float x){
    float retorno = ((x-x0)*(x-x2)*(x-x3))/((x1-x0)*(x1-x2)*(x1-x3));
    return retorno;
}
float L2(float x0, float x1, float x2, float x3, float x){
    float retorno = ((x-x0)*(x-x1)*(x-x3))/((x2-x0)*(x2-x1)*(x2-x3));
    return retorno;
}
float L3(float x0, float x1, float x2, float x3, float x){
    float retorno = ((x-x0)*(x-x1)*(x-x2))/((x3-x0)*(x3-x1)*(x3-x2));
    return retorno;
}

int main(){
    float x0,x1,x2,x3,y0,y1,y2,y3,x,px;
    cout << "Digite o valor do primeiro ponto: ";
    cin >> x0 >> y0;
    cout << endl;
    cout << "Digite o valor do segundo ponto: ";
    cin >> x1 >> y1;
    cout << endl;
    cout << "Digite o valor do terceiro ponto: ";
    cin >> x2 >> y2;
    cout << endl;
    cout << "Digite o valor do quarto ponto: ";
    cin >> x3 >> y3;
    cout << endl;
    cout << "Digite o valor de x que você deseja predizer em p(x): ";
    cin >> x;
    float l0,l1,l2,l3;
    l0 = L0(x0,x1,x2,x3,x);
    l1 = L1(x0,x1,x2,x3,x);
    l2 = L2(x0,x1,x2,x3,x);
    l3 = L3(x0,x1,x2,x3,x);

    px = (y0*l0) + (y1*l1) + (y2*l2) + (y3*l3);

    cout << "Valor de (x): " << x << endl;
    cout << "Valor de P(x): " << px << endl;
    exit(0);
}