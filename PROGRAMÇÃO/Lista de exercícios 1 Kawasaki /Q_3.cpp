#include <iostream>
using namespace std;

int main()
{
 float N1,N2,N3;
 int P1,P2,P3 ; 
 cout << "Digite as notas"; 
 cin >> N1 >> N2 >> N3 ; 
 cout << "Agora diga os pesos" ;
 cin >>P1 >> P2 >> P3;
 cout << (N1*P1 + N2*P2 + N3*P3) / (P1+P2+P3) ; 



}