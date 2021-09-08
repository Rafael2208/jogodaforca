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

string palavras [20] = {"abacate","abacaxi","abiu","abrico","abrunho","acai","acerola","akee","alfarroba","ameixa","amendoa","amora","ananas","anona","araca","arando","araticum","ata","atemoia","avela"};

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



void exibeStatus(string palavraComMascara, int tamanhoDaPalavra, int tentativasRestantes, string letrasJaArriscadas){

cout << "\nPALAVRA :\n" << palavraComMascara << "(Tamanho:" << tamanhoDaPalavra << ")\n";
cout << "\nTENTATIVAS RESTANTES:" << tentativasRestantes;
cout << "\nLETRAS ARRISCADAS:\n" << letrasJaArriscadas;

}



void jogarSozinho (){

string palavra = retornaPalavraAleatoria ();

int tamanhoDaPalavra = palavra.size();

string palavraComMascara = retornaPalavraComMascara(palavra, tamanhoDaPalavra);

int tentativa = 0 ,maximoDeTentativas = 9;
int cont = 0;
char letra;
string letrasJaArriscadas;



while (palavra != palavraComMascara && maximoDeTentativas - tentativa > 0){


    limpaTela ();

    exibeStatus(palavraComMascara, tamanhoDaPalavra, maximoDeTentativas - tentativa, letrasJaArriscadas);

    cout << "\nFRUTA COM A LETRA A *DIGITE UMA LETRA* \n";
    cin >> letra;
    letrasJaArriscadas += letra;

    for (cont = 0; cont < tamanhoDaPalavra; cont++)
    if (palavra[cont] == letra){

        palavraComMascara[cont] = palavra[cont];
    }

    tentativa++;


}


if (palavra == palavraComMascara){
    limpaTela ();
    cout << "PARABENS VOCE GANHOU\n";
} else {
limpaTela ();
    cout << "FIM DE JOGO\n";

}


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

