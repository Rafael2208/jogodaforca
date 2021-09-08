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

string retornaPalavraComMascara(string palavra, int tamanhoDaPalavra){

int  cont = 0;
string palavraComMascara;

while (cont < tamanhoDaPalavra){
        palavraComMascara += "*";
        cont++;
   }
   return palavraComMascara;
}

void jogarSozinho (){

string palavra = retornaPalavraAleatoria ();

int tamanhoDaPalavra = palavra.size();

string palavraComMascara = retornaPalavraComMascara(palavra, tamanhoDaPalavra);


    cout << "\nA PALAVRA SECRETA E FRUTA COM A LETRA A :\n" << palavra << "(Tamanho:" << tamanhoDaPalavra << ")\n";
    cout << "\nMascara:" << palavraComMascara;
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
      jogarSozinho ();
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

