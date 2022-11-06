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
    int d,p,e;
    cout<<"\tChocolatina Jet"<<endl;
    cout<<"Dinero: ";cin>>d;
    cout<<"Precio: ";cin>>p;
    cout<<"Envoltura: ";cin>>e;
    cout<<"Se pueden Comer: "<<totalChocolates(d,p,e);

    return 0;
}
