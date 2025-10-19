#include <iostream> 
using namespace std;

float L0(float x0,float x1,float x2,float x3,float x4 ,float x5,float x){
    float retorno;
    retorno  = ((x-x1)*(x-x2)*(x-x3)*(x-x4)*(x-x5))/((x0-x1)*(x0-x2)*(x0-x3)*(x0-x4)*(x0-x5));
    return retorno;
}
float L1(float x0,float x1,float x2,float x3,float x4 ,float x5, float x){
    float retorno;
    retorno  =((x-x0)*(x-x2)*(x-x3)*(x-x4)*(x-x5))/((x1-x0)*(x1-x2)*(x1-x3)*(x1-x4)*(x1-x5));
    return retorno;
}
float L2(float x0,float x1,float x2,float x3,float x4 ,float x5, float x){
    float retorno;
    retorno  = ((x-x0)*(x-x1)*(x-x3)*(x-x4)*(x-x5))/((x2-x0)*(x2-x1)*(x2-x3)*(x2-x4)*(x2-x5));
    return retorno;
}
float L3(float x0,float x1,float x2,float x3,float x4 ,float x5, float x){
    float retorno;
    retorno  = ((x-x0)*(x-x1)*(x-x2)*(x-x4)*(x-x5))/((x3-x0)*(x3-x1)*(x3-x2)*(x3-x4)*(x3-x5));
    return retorno;
}
float L4(float x0,float x1,float x2,float x3,float x4 ,float x5, float x){
    float retorno;
    retorno  = ((x-x0)*(x-x1)*(x-x2)*(x-x3)*(x-x5))/((x4-x0)*(x4-x1)*(x4-x2)*(x4-x3)*(x4-x5));
    return retorno;
}
float L5(float x0,float x1,float x2,float x3,float x4 ,float x5,float x){
    float retorno;
    retorno  = ((x-x0)*(x-x1)*(x-x2)*(x-x3)*(x-x4))/((x5-x0)*(x5-x1)*(x5-x2)*(x5-x3)*(x5-x4));
    return retorno;
}

int main(){
    float x0,x1,x2,x3,x4,x5,y0,y1,y2,y3,y4,y5,x,px;
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
    cout << "Digite o valor do quinto ponto: ";
    cin >> x4 >> y4;
    cout << endl;
    cout << "Digite o valor do sexto ponto: ";
    cin >> x5 >> y5;
    cout << endl;
    cout << "Digite o valor de x que você deseja predizer em p(x): ";
    cin >> x;
    float l0,l1,l2,l3,l4,l5;
    l0 = L0(x0,x1,x2,x3,x4,x5,x);
    l1 = L1(x0,x1,x2,x3,x4,x5,x);
    l2 = L2(x0,x1,x2,x3,x4,x5,x);
    l3 = L3(x0,x1,x2,x3,x4,x5,x);
    l4 = L4(x0,x1,x2,x3,x4,x5,x);
    l5 = L5(x0,x1,x2,x3,x4,x5,x);
    px = (l0*y0)+(l1*y1)+(l2*y2)+(l3*y3)+(l4*y4)+(l5*y5);
    cout << "O valor de (x): " << x << endl;
    cout << "O valor de P(x): " << px << endl;
    exit(0);
}