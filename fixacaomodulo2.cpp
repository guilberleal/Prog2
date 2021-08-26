#include <iostream>
#include <string>

using namespace std;

class ItemFatura{
    private:
        int id;
        string nome;
        int qtd;
        float precoUnit;
    public:
        ItemFatura():id(0),nome("nulo"),qtd(0),precoUnit(0){};
        ItemFatura(int id,string nome,int qtd,float precoUnit):id(id),nome(nome),qtd(qtd),precoUnit(precoUnit){};
        int getId(){return id;}
        string getNome(){return nome;}
        int getQtd(){return qtd;}
        float getPrecoUnit(){return precoUnit;}
        void setId(int id){this->id = id;}
        void setNome(string nome){this->nome = nome;}
        void setQtd(int qtd){this->qtd =  qtd;}
        void setPrecoUnit(float precoUnit){this->precoUnit = precoUnit;}

        float totalItem(){
            precoUnit = getQtd()*getPrecoUnit();
            return precoUnit;
        }

        void imprime(){            
            cout << "id: "+to_string(id) <<endl;
            cout << "Produto: "+nome <<endl;
            cout << "qtd: "+to_string(qtd) <<endl;
            cout << "preco: "+to_string(precoUnit) <<endl;
            cout << " " <<endl;

        }
};

int main()  {
    ItemFatura obj1;
    ItemFatura obj2(125,"suco",2,5.40);
    obj1.imprime();
    obj2.imprime();

    obj2.totalItem();
    obj2.imprime();

}
