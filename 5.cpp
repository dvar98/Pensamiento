
#include<iostream>  
  
using namespace std; 

int main() 
{ 
    float doll,yen,psp,lib,marc;
    
    cout<<"Ingresar el numero de dolares a comprar"; 
    cin >> doll;
    yen=118.23;
    psp=151.653;
    lib=0.766263;
    marc=1.78265;
    cout <<"Yenes : "<< (doll*yen) <<" Pesetas : "<< (doll*psp) <<" Libras Esterlinas : "<< (doll*lib) <<" Marcos : "<< (doll*marc);
    
    return 0; 
} 
