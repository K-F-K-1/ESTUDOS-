#include <iostream>
using namespace std;

int main()
{

    float preço, novo_preço;
 cout<< "Digite o preço";
 cin >> preço ;
 novo_preço = preço - (preço * 0.12);
 cout << "Preço com desconto aplicado: " <<novo_preço;
 return 0 ;

}