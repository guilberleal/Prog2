#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Cartao{
    protected:
        string destinatario;
    public:
        
        friend istream &operator>>(istream &is, Cartao &entrada);
        Cartao(){ cin >> destinatario;
		}
        virtual void mensagem() = 0;      
};

istream &operator>>(istream &is,Cartao &entrada){
    is >> entrada.destinatario;
    return is;
}

class CNatal : public Cartao{
    private:
    public:
        CNatal() : Cartao(){};
        void mensagem() override{
           cout << "Feliz Natal : " << destinatario << endl;
        }     
};

class CAniversario : public Cartao{
    private:
    public:
        CAniversario() : Cartao(){};
        void mensagem() override{
           cout << "Feliz Aniversario : " << destinatario << endl;
        }
};

int main(){
    string flag = "Z";
    cout << "Coloque o Tipo de cartao = "<<endl<<"A para Aniversario ou F para natal "<<endl<<"Para sair aperte N" << endl;
    while(flag != "N"){
      if (flag == "A"){
        CAniversario  a;
        a.mensagem();
        cout << "\nColoque o Tipo de cartao = "<<endl<<"A para Aniversario ou F para natal "<<endl<<"Para sair aperte N" << endl;
      }
      if (flag == "F"){
        CNatal  b;
        b.mensagem();
        cout << "\nColoque o Tipo de cartao = "<<endl<<"A para Aniversario ou F para natal "<<endl<<"Para sair aperte N" << endl;
      }
      cin >> flag;
    }
}
