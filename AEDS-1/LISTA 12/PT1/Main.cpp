#include <iostream>
#include "Vetor.h"

using namespace std;

int main(int argc, char *argv[]){
    Vetor *v = new Vetor();
    v->insereNoFinal(10);
    v->insereNoFinal(8);
    v->insereNoFinal(16);
    v->insereNoFinal(7);
    v->insereNoFinal(5);
    v->insereNoFinal(13);
    v->insereNoFinal(8);
    v->insereNoFinal(16);
    v->insereNoFinal(16);
    v->insereNoFinal(16);    

    cout <<"\nVetor original:\n";
    v->imprime();

    int pos = v-> posicaoDe(8);

    if (pos != -1){
        cout << "\n\nPosicao: " << pos << "\n";
    }

    else
    {
        cout << "\nElemento nao encontrao\n";
    }
    
    v->alteraEm(3,19); 
    v->alteraEm(15,9);
    v->alteraEm(7,100);
    v->alteraEm(8,200);
    v->alteraEm(9,300);

    cout <<"\nVetor alterado:\n";
    v->imprime();

    cout << "\n";

    for (int i = 0; i < v ->obtemTamanho(); i++)
    {
        cout << "\nElemento na posicao " << i << ": " << v ->elementoEm(i);
    }

    v->insereNoFinal(4);
    v->insereNoFinal(30);
    v->insereNoFinal(12);

    cout << "\n\nVetor com acrescimo: \n";
    v->imprime();
    
    cout << "\n\nVetor revertido: \n";
    v->reverte(); 
    
    v->imprime();

    cout << "\n\nVetor apos remocao do numero 8: \n";

    v->remove(8);

    v->imprime();

    cout << "\n"; 

    return 0;
}