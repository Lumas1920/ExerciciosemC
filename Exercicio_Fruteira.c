#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



float pesomaca, pesoMor;

float precoMorango(float  pesoMor){ // Calcula o preço do Mor
float NprecoMorango;
if(pesoMor<5){

NprecoMorango = pesoMor * 2.50;
if (pesoMor>8 || NprecoMorango>25){
   NprecoMorango-= (NprecoMorango) * (10/100);
    
}

}else{
NprecoMorango = pesoMor * 2.20;
if (pesoMor>8 || NprecoMorango>25){
   NprecoMorango-= (NprecoMorango) * (10/100);
    
}

}
return NprecoMorango;
}


float precoMaca(float pesoMaca ){
float NprecoMaca;
if(pesoMor<5){
    NprecoMaca = pesoMaca * 1.80;
    if (pesoMaca>8 || NprecoMaca>25){
   NprecoMaca-= (NprecoMaca) * (10/100);
    
}

}else{
    NprecoMaca = pesoMaca * 1.50;
    if (pesoMaca>8 || NprecoMaca>25){
   NprecoMaca-= (NprecoMaca) * (10/100);

}

}
return NprecoMaca;
}



void QtdComprada(){
    float Morango,Maca;
    wprintf(L"Digite a quantidade de maçã em (Kg)");
    scanf("%f", &pesomaca);
    fflush(stdin);

    wprintf(L"Digite a quantidade de morango em (Kg)");
    scanf("%f", &pesoMor);
    fflush(stdin);
    Morango = precoMorango(pesoMor);
    Maca = precoMaca(pesomaca);
    printf("\n Preço morango: %.3f", Morango);
    printf("\n Preço maça: %.3f", Maca);
}




int main(){
    setlocale(LC_ALL,"portuguese");
    QtdComprada();
    return 0;
}