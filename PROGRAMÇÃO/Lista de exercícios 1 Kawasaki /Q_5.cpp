#include <iostream>
using namespace std;

int main()
{
    float Saco, Ração, Gramas,Q_Final ; 

    cout << "Digite o peso do saco em kg"; 
    cin >> Saco ; 
    cout << "Digite a quantidade "; 
    cin >> Ração ;
    Ração= Ração * 2 ;
    Gramas= Saco * 1000;
    Q_Final= Gramas  - (Ração * 5 );
    cout <<  "A quantidade restante será "<< Q_Final<< "gramas de ração";
    return 0;

}
