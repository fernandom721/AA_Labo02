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

int llenarpar(int n){
    Pila Pilapar;
    Pilapar.push(n);
    
    //Pilapar.mostrarPila();
    return 0;
}
int llenarimpar(int n){
    Pila Pilaimpar;
    Pilaimpar.push(n);

    //Pilaimpar.mostrarPila();
    return 0;
}

int main(){

    Pila Pilaimpar;
    Pila Pilapar;

    int n;
    cout<<"agregue numeros (cero para terminar)"<<endl;
    while (n != 0)
    {
        cin>>n;
        if(n % 2 ==0 && n!=0)
        {
            Pilapar.push(n);
            Pilaimpar.pop();
            
        }
        if(n%2 != 0 && n!=0)
        {
            
            Pilaimpar.push(n);
            Pilapar.pop();
        }
        
    }
    Pilapar.mostrarPila();
    cout << endl;
    Pilaimpar.mostrarPila();
    
}