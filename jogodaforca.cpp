#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>



using namespace std;

void limpaTela (){
 system ("CLS");
}

void menuInicial(){

int opcao = 0;

while(opcao < 1 || opcao >3){
    limpaTela ();


 cout << "BEM VINDO AO JOGO";
 cout << "\n1 - JOGAR";
 cout << "\n2 - SOBRE";
 cout << "\n3 - SAIR";
 cout << "\nESCOLHA UMA OPCAO E TECLE - ENTER -";

 cin >> opcao;

    switch(opcao){
    case 1 :
      cout << "JOGO INICIADO";
    break;
    case 2 :
      cout << "INFORMACOES DO JOGO";
    break;
    case 3 :
      cout << "ATE MAIS!!";
    break;
   }

  }

}

int main(){

  menuInicial();
  return 0;

}

