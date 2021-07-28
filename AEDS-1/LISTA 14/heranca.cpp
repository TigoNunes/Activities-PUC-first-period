#include <iostream>
#include <string>

using namespace std;

class Ingresso
{
    private:
       float valor;
    public:
        Ingresso(double valor);
        void imprimeValor();
        float getValor();
};

Ingresso::Ingresso(double valor)
{
    this->valor = valor;
}

void Ingresso::imprimeValor(){
    cout <<"\n" <<"Valo ingresso: "<<this-> valor << "\n";
}

float Ingresso::getValor(){
    return valor;
}

//**************Ingresso VIP************************************************

class IngressoVIP : public Ingresso
{
    private:
       float valorAcrescimo;
    protected:
       float valorVIP;
    public:
        IngressoVIP(float acrescimo, float valorVIP, float valor);
        void acrescentaValor();
        void imprimeValorVIP();
        float getValorVip();
        float getAcresimo();
};

IngressoVIP::IngressoVIP(float acrescimo, float valorVIP, float valor) : Ingresso (valor){
    this-> valorAcrescimo = acrescimo;
    this-> valorVIP = valorVIP;
}

float IngressoVIP::getAcresimo(){
    return valorAcrescimo;
}

void IngressoVIP::acrescentaValor(){
    valorVIP = getValor() + valorAcrescimo;
}

float IngressoVIP::getValorVip(){
    acrescentaValor();
    return valorVIP;
}

void IngressoVIP::imprimeValorVIP(){
    acrescentaValor();
    cout << "Valor ingresso VIP: "<< valorVIP <<"\n\n";
}

//**************Ingresso Normal*********************************************

class IngressoNormal : public Ingresso
{
    private:
       float valorNormal;
    
    public:
        IngressoNormal(float valorNormas, float valor);
        void imprimeValorNormal();
        ~IngressoNormal();
};

IngressoNormal::IngressoNormal(float valorNormal, float valor) : Ingresso (valor){
    this-> valorNormal = valorNormal;
}

void IngressoNormal::imprimeValorNormal(){
    cout << "Valor ingresso normal: "<< getValor() <<"\n\n";
}

//**************Camarote inferior*********************************************

class CamaroteInferior : public IngressoVIP
{
private:
    string localizacaoInferior;
public:
    CamaroteInferior(string localInferior, float acrescimo, float valorVIP, float valor);
    string acessaLocalizacao();
    void imprimeLocalizacao();
    ~CamaroteInferior();
};

CamaroteInferior::CamaroteInferior(string localInferior, float acrescimo, float valorVIP, float valor) : IngressoVIP(acrescimo, valorVIP, valor){
    this-> localizacaoInferior = localInferior;
}

string CamaroteInferior::acessaLocalizacao(){
    return this-> localizacaoInferior;
}

void CamaroteInferior::imprimeLocalizacao(){
    cout << "***Ingresso impresso***" << "\n";
    cout << "Assento: " << acessaLocalizacao() << "\n\n";
}

//**************Camarote superior*********************************************

class CamaroteSuperior : public IngressoVIP
{
private:
    string localizacaoSuperior;
public:
    CamaroteSuperior(string localSuperior, float acrescimo, float valorVIP, float valor);
    string acessaLocalizacao();
    void imprimeLocalizacao();
    float valorExtra();
    ~CamaroteSuperior();
};

CamaroteSuperior::CamaroteSuperior(string localSuperior, float acrescimo, float valorVIP, float valor) : IngressoVIP(acrescimo, valorVIP, valor){
    this-> localizacaoSuperior = localSuperior;
}

float CamaroteSuperior::valorExtra(){
    return getAcresimo();
}

string CamaroteSuperior::acessaLocalizacao(){
    return this-> localizacaoSuperior;
}

void CamaroteSuperior::imprimeLocalizacao(){
    cout << "***Ingresso impresso***" << "\n";
    cout << "Assento: " << acessaLocalizacao() << "\n\n";
}

//**************Main*********************************************

int main(void){
    int opI = 0;
    int opC = 0;

    Ingresso *in = new Ingresso(14.90);
    IngressoVIP *vip = new IngressoVIP(10, 14.90, 14.90);
    IngressoNormal *norm = new IngressoNormal(14.90, 14.90);
    CamaroteInferior *camInf = new CamaroteInferior("A-4", 10, 14.90, 14.90);
    CamaroteSuperior *camSup = new CamaroteSuperior("Z-10", 10, 14.90, 14.90);
    
    in ->  imprimeValor();
    vip->  imprimeValorVIP();
    norm-> imprimeValorNormal();
    camInf-> imprimeLocalizacao();
    camSup-> imprimeLocalizacao();

    cout <<"teste: " <<14.90 + camSup->valorExtra() <<"\n\n";

    cout << "Bem vindo ao nosso cinema. Aqui so exibimos o filme Batman vs Superman\n\n";

    do
    {
        cout << "Escolha um tipo de ingresso:\n";

        cout << "Normal: R$14.90 - 1 \nVIP: 24.90 - 2\n";
        
        cout << "Opcao: ";
        cin >> opI;

        if (opI == 1)
        {
            cout << "Ingresso Normal adquirido\n";
            cout << "Valor: " << in-> getValor() << "\n"; 
        }
        else if(opI == 2)
        {
            do
            {
                cout << "Opcao VIP escolhida. Escolha o camarote:\n";

                cout << "Superior: + R$10 - 1.\nInferior: Sem acrescimo - 2.\n";
                cout << "Opcao: ";
                cin >> opC;

                if (opC == 1)
                {
                    cout << "Ingresso VIP adquirido - Camarote Superior\n";
                    cout << "valor: "<< vip-> getValorVip() + 10 << "\n";
                }
                else if (opC == 2)
                {
                    cout << "Ingresso VIP adquirido - Camarote Inferior\n";
                    cout << "valor: "<< vip-> getValorVip() << "\n";
                }
                else
                {
                    cout << "Opcao Invalida\n\n";
                }
                

            } while (opC != 1 && opC != 2);
            
        }
        else
        {
            cout <<"Opcao invalida\n\n";   
        }

    }while (opI != 1 && opI != 2);

    cout << "\n***Imprimindo valor***\n";

    return 0;
}




