#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
    float a,b,c,S,R,P;
    a = 3;
    b = 5;
    c = 7;
    if ((a+b>c) && (a+c>b) && (b+c>a)){
        P=(a+b+c)/2;

        S=sqrt(P*(P-a)*(P-b)*(P-c));
        printf("Pole trojkatu wynosi: %f\n", S);

        R=S/P;
        printf("Promien kola wpisanego w  trojkat wynosi: %f\n", R);
    } else
        printf("Nie mozna zbudowac trojkat o zadanych parametrach");

    return 0;
}

