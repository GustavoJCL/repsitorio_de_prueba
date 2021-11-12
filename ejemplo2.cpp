/****************************************************************
*    Programa que lee una línea de texto caracter a caracter    *
*    y luego los escribe de forma inversa usando recursividad   *
****************************************************************/
#include<iostream>
using namespace std;
#define EOLN '\n'

void invertir(void); //prototipo de la función

//definiciones de funciones 
int main(){ //función principal
    cout<<"Introduzca una linea de texto:\t"; 
    invertir(); 
    //llamada inicial de función recursiva 
    return 0;
}
void invertir(void){
    char a; //guarda solo un caracter ASCII
    a = getchar(); // almacena una tecla presionada por usuario
    //Condición de parada de recursividad
    if(a != 13){//if(a != EOLN)
        cout<<":V";
        invertir(); //nuevamente la función se llama a sí misma 
    }else{
        cout<<endl<<endl<<"Frase anterior con sus letras invertidas es:\t";
    }

    if(a != 13){
        cout<<a; // escribe en pantalla el caracter ASCII almacenado en variable a
    }

}
