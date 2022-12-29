#include <stdlib.h>
#include <stdio.h>





int main (){
    float Vcompra;
    int QtdDescont = 1;
    int arbt, m;
    float c;
  printf ("Digite o valor da compra:");
  arbt = Vcompra - 500; 
  scanf ("%f", &Vcompra);
    if(Vcompra==500){
        QtdDescont = 1;
    } else if (Vcompra > 500){
        arbt = Vcompra - 500;
        m = (arbt/100) + QtdDescont;
    }
    c = Vcompra - ((Vcompra) * (m * 0.01));
    printf("\n O valor do do desconto eh %d" ,m);
    printf("\n O nome valor do produto eh %f" , c);   

    return 0;
}