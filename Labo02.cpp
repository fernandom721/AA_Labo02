#include <iostream>

using namespace std;

struct Nodo{
    int dato;
    Nodo *sig;
    Nodo *prev;
}*inicio, *fin;

class Pila{
    public:
        Nodo* crearNodo(int valor){
            Nodo *n= new Nodo;
            n-> dato = valor;
            n-> sig = nullptr;
            return n;
        }

        void push(int valor){
            Nodo *n= crearNodo(valor);
            n-> sig = inicio;
            inicio=n;
        }
        void pop(){
            Nodo *temp = inicio;
            inicio = inicio -> sig;
            free(temp);
        }
        void mostrarPila(){
            Nodo *temp = inicio;
            if(!inicio){
                cout << "Pila Vacia"<<endl;
            }
            else
            {
                while (temp){
                    cout << temp -> dato << ", ";
                    temp = temp -> sig;
                }
            }
        }
        Pila(){
            inicio=nullptr;
        }
};
class Pilan{
    public:
        Nodo* crearNodon(int valor){
            Nodo *n= new Nodo;
            n-> dato = valor;
            n-> sig = nullptr;
            return n;
        }

        void pushn(int valor){
            Nodo *n= crearNodon(valor);
            n-> sig = inicio;
            inicio=n;
        }
        void popn(){
            Nodo *temp = inicio;
            inicio = inicio -> sig;
            free(temp);
        }
        void mostrarPilan(){
            Nodo *temp = inicio;
            if(!inicio){
                cout << "Pila Vacia"<<endl;
            }
            else
            {
                while (temp){
                    cout << temp -> dato << ", ";
                    temp = temp -> sig;
                }
            }
        }
        Pilan(){
            inicio=nullptr;
        }
};

int main(){

    Pila Pilaimpar;
    Pilan Pilapar;

    int n;
    int x=0;
    int y=0;
    cout<<"agregue numeros (cero para terminar)"<<endl;
    while (n != 0)
    {
        cin>>n;
        if(n % 2 ==0 && n!=0)
        {
            Pilapar.pushn(n);
            x++;
        }
        if(n%2 != 0 && n!=0)
        {
            Pilaimpar.push(n);
            y++;
        }
    }
    Pilapar.mostrarPilan();
    cout << endl;
    Pilaimpar.mostrarPila();

    if (y==x){
        cout << "Tienen el mismo tamannio";
    }
    else
    {
        cout << "No tienen el mismo tamannio";
    }
}