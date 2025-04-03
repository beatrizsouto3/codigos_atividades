//Questao avioes de papel OBI (Olimpiada Brasileira de Informatica)

#include <iostream>

using namespace std;

int main (){
  //C - Competidores, P - Quantidade de folhas de papel compradas e F - Qauntidade de folhas de papel por competidor
  int C, P, F;
  cin >> C >> P >> F;
  if (P >= C*F){
    cout << "S";
  } else {
    cout << "N";
  }
}

