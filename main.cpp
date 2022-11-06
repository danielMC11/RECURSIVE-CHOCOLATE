#include <iostream>

using namespace std;

int canje(int envolturas, int exchange, int sobras){

    if((envolturas+sobras<exchange)){return 0;}
    else{
    int c=0;
    while((envolturas+sobras)>0){

     if((envolturas+sobras)>=exchange){envolturas-=exchange;c++;}
     else{
     sobras=envolturas;
     if(c+sobras==exchange){
     c++;return c;
     }
     else{return 0;}
     }
    }


    return c + canje(c,exchange,sobras);
    }
}


int totalChocolates(int d, int p, int e){
    int c=0;
    while(d>0){
    if(d>=p)
    {d-=p;c++;}
    else{break;}
    }

    return c + canje(c,e,0);
}


int main()
{
    int dinero,precio,envoltura;
    cout<<"\tChocolatina Jet"<<endl;
    cout<<"Dinero: ";cin>>dinero;
    cout<<"Precio: ";cin>>precio;
    cout<<"Envoltura: ";cin>>envoltura;
    cout<<"Se pueden Comer: "<<totalChocolates(dinero,precio,envoltura)<<" chocolates"<<endl;

    return 0;
}
