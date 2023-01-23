/*
    Name:Santangelo_Es.somma dispari
    Copyright:Colamonico-Chiarulli
    Author:Gianluigi Santangelo
    Date: 28/09/22 09:39
    Description: calcola la somma dei numeri minori o uguali dispari di num
*/


//1. includo le librerie
#include <iostream>
using namespace std;
//2. inizio il blocco main
int main(){
//3. dichiaro e inizializzo le variabili
	int num=0;
    int somma=0;
//4. input
    cout<<"inserisci il numero";
    cin>>num;
//5. logica - operazioni - algoritmo
    if(num%2==0)
    	num=num-1;
	while(num>0){
		somma=somma+num;
		num=num-2;
}
//6. output
cout<<"la somma di tutti i numeri minori o uguali dispari di num e'\ "<<somma;
//7. ritorno al sistema operativo
return 0;
//8. fine del programma
}
