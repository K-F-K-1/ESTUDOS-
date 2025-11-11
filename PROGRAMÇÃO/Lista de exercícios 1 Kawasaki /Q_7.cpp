#include <iostream>
#include <cmath> // Biblioteca para sqrt()
using namespace std;
int main() {
    int cateto1, cateto2;
    double hipotenusa; // Para decimais
    cout << "Digite o valor do primeiro cateto: ";
    cin >> cateto1;
    cout << "Digite o valor do segundo cateto: ";
    cin >> cateto2;
    // Calculo correto: soma os quadrados antes da raiz
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
    cout << "A medida da hipotenusa é: " << hipotenusa << endl;
    return 0;
}
