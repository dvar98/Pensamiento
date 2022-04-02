
#include<iostream>  
  
using namespace std; 

int main() 
{ 
    float bas,inch,pps,tsp;
    
    cout<<"Ingrese la Anchura en metros"; 
    cin >> inch;
    cout<<"Ingrese la Longitud en metros";
    cin >> bas;
    cout <<"Costo del Metro cuadrado en Dolares ";
    cin >> pps;
    
    tsp = ((inch*bas)*pps);
    
    cout<< "El costo del terreno es de "<< tsp<< " Dolares ";
    return 0; 
} 
