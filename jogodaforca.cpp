#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>



using namespace std;

void limpaTela (){
 system ("CLS");

}

string retornaPalavraAleatoria (){

string palavras [20] = {"Abacate","Abacaxi","Abiu","Abrico","Abrunho","Acai","Acerola","Akee","Alfarroba","Ameixa","Amendoa","Amora","Ananas","Anona","Araca","Arando","Araticum","Ata","Atemoia","Avela"};

int indiceAleatorio = rand() % 20;

cout << palavras [indiceAleatorio];

return palavras [indiceAleatorio];

}

void jogarSozinho (){

string palavra  = retornaPalavraAleatoria ();
cout << "\nA PALAVRA SECRETA E:\n" << palavra;

}

void menuInicial(){

int opcao = 0;

while(opcao < 1 || opcao >3){
    limpaTela ();


 cout << "BEM VINDO AO JOGO\n";
 cout << "\n1 - JOGAR";
 cout << "\n2 - SOBRE";
 cout << "\n3 - SAIR\n";
 cout << "\nESCOLHA UMA OPCAO E TECLE - ENTER -";

 cin >> opcao;

    switch(opcao){
    case 1 :
      jogarSozinho (); //cout << "JOGO INICIADO";
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

    srand ((unsigned)time(NULL));

  menuInicial();
  return 0;

}

