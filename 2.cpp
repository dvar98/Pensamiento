
#include<iostream>  
#include<string>
using namespace std; 

int main() 
{ 
    float prom,n1,n2,n3,n4,n5,n6,n7,n8,n9,corte1,corte2,corte3 ;
    string nombE,Met ;
    
    cout<<"Escribir nombre del estudiante"; 
    cin >> nombE;
    cout<<"Nombre de la asignatura";
    cin >> Met;
    cout<<"Ingresar nota 1";
    cin >> n1;
    cout <<"Ingresar  nota 2";
    cin >> n2;
    cout <<"Ingresar nota 3";
    cin >> n3;
    cout << "Ingresar nota 4";
    cin >> n4;
    cout << "Ingresar nota 5";
    cin >> n5;
    cout << "Ingresar nota 6";
    cin >> n6;
    cout << "Ingresar nota 7";
    cin >> n7;
    cout << "Ingresar nota 8";
    cin >> n8;
    cout << "Ingresar nota 9";
    cin >> n9;
    
    corte1=(((n1+n2)/2)*0.3);
    
    corte2=(((n3+n4+n5)/3)*0.4);
    
    corte3=(((n6+n7+n8+n9)/4)*0.3);
    
    prom=(corte1+corte2+corte3 );
    
    cout << "El estudiante " << nombE <<" tiene un promedio de "<< prom <<" de la asignatura "<<Met;
    
    return 0; 
} 
