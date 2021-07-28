#include "Vetor.h"

Vetor::Vetor()
{
    v = new int [TAMANHO];
    for (int i = 0; i < TAMANHO; i++)
    {
        v[i] = 0;
    }

    numElementos = 0;

    tam = TAMANHO;
    
}

int Vetor::obtemTamanho(){ 
    return numElementos; 
}

void Vetor::insereNoFinal(int novoElemento){
    if (numElementos == tam)
    {
        dobraVetor();
    }

    v[numElementos] = novoElemento;
    numElementos ++;
    
}

int Vetor::posicaoDe (int elemento){ 
    for (int i = 0; i < numElementos; i++){
        if(elemento == v[i]){
            return i;
        }
    }
    
    return -1; 
}

void Vetor::alteraEm (int pos, int novoValor){ 
    if((pos >= 0) && (pos < numElementos)){
        v[pos] = novoValor;
    }

    else
    {
        cout << "\nPosicao invalida!\n";
    }
    
}

int Vetor::elementoDe (int pos){ 
    return 0; 
}

int Vetor::elementoEm (int pos){ 
    if ((pos >= 0) && (pos < numElementos))
    {
        return v[pos];
    }

    else
    {
        cout << "\nPosicao invalida!\n";
    }   
    
    return -1;  
}

void Vetor::reverte(){
    int *temp = new int [numElementos];
    int j = 0;
    
    for (int i = (numElementos - 1); i >= 0; i--)
    {
        temp[j] = v[i];
        j++;
    }

    for (int i = 0; i <= (numElementos - 1); i++)
    {
        v[i] = temp[i];
    }

    delete temp;
    
};

void Vetor::imprime(){ 
    for (int i = 0; i < numElementos; i++)
    {
        cout << v[i] << " ";
    }
    
};

void Vetor::dobraVetor(){
    int *temp = new int [numElementos]; 
    
    for (int i = 0; i < numElementos; i++)
    {
        temp[i] = v[i];        
    }
    
    tam *= 2;

    v = new int [tam];

    for (int i = 0; i < tam; i++)
    {
        v[i] = 0;
    }
    
    for (int i = 0; i < tam; i++)
    {
        v[i] = temp[i];
    }

    delete temp;
    
};

void Vetor::diminuiVetor(){
    tam /= 2;
    
};

int Vetor::remove(int elemento){
    int *temp = new int [numElementos];
    int elementosDeletados = 0;

    for (int i = 0; i < numElementos; i++)
    {        
        if(elemento == v[i] && i < numElementos - 1){
            temp[i] = v[i+1];
            i++;
            elementosDeletados++;
        }

        else if (elemento == v[i] && i == numElementos - 1)
        {
            elementosDeletados++;
        }        
        
        else
        {
            temp[i] = v[i];
        }
        
    }

    numElementos = numElementos - elementosDeletados;

    if (elementosDeletados == 0)
    {
        cout << "\nO elemento "<<elemento<< " nao foi encontrado\n";
    }

    else if(elementosDeletados == (numElementos + elementosDeletados)/2)
    {
        for (int i = 0; i < numElementos; i++)
        {
            v[i] = temp[i];
        }
        
        diminuiVetor();
    }

    else
    {
        for (int i = 0; i < numElementos; i++)
        {
            v[i] = temp[i];
        }
    }
    
    
    delete temp;    
};