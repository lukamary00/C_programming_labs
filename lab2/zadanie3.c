// W4.cpp : Defines the entry point for the console application. //
//#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

static void my_exit();
static void my_return();

int main(int argc,char * argv[]) {

    double a = 0.0, b = 0.0, c = 0.0;
    int ret = -1;
    //input data
    printf("    Program obliczenia rzeczywistych pierwiastkow rownania kwadratowego\n");
    printf("------------------------------a*x^2+b*x+c = 0---------------------------------\n\n");
    printf("Podaj a,b,c\n");
    ret = scanf("%le%le%le", &a, &b, &c);
    if(ret != 3){
        printf("blad ptrzy wczytaniu\n");
        printf("Wczytane: a=%e b=%e c=%e\n",a,b,c);
        //to jest blad oprogramowania
        my_exit();
    }

    //Sprawdzenie a
    if(a == 0.0){ //to nie jest dobry kod a jest typu double!!!
        //a==0
        printf("Tonie jest rownanie kwadratowe: a=0.\n");
        //to jest blad uzytkownika przy wprowadzeniu danych
        my_exit();
    }

    //Obliczenie D
    double D = -1.0; //to jest inicjalizacja zmiennej
    D = b*b-4.0*a*c;
    if(D < 0.0){
        double r1,r2,u1,u2;
        r1 = -(b/(2*a));
        u1 = sqrt(abs(pow(b/(2*a),2)-(c/a)));
        r2 = -(b/(2*a));
        u2 = -(sqrt(abs(pow(b/(2*a),2)-(c/a))));
        printf("Czesc rzeczywista %.1lf, czesc urojona %.1lf ---->  pierwszego pierwiastka\n", r1, u1);
        printf("Czesc rzeczywista %.1lf, czesc urojona %.1lf ---->  drugiego pierwiastka\n", r2, u2);
        my_return(); //to nie jest blad
    }

    //Obliczenie pierwiastkow
    double p1,p2,x1,x2;
    p1 = -b/(2.0*a);
    p2 = sqrt(D)/(2.0*a);
    x1 = p1 + p2;
    x2 = p1 - p2;

    printf("Rownanie kwadratowe: %lf *X*X + %lf *X + %lf = 0\n\n", a, b, c);
    printf("Pierwiastki: x1=%e x2=%e\n", x1,x2);
    printf("------------------------------------------------");

    my_return();

    return 0;
}


void my_exit(){
//    Przymusowe zakonczenie wykonania
//    Zawiesza monitor dokad bedzie wprowadzony ^z
//    exit(1)
    int ch;
    printf("ZAkoncz - ctrl+Z Enter\n");
    while ((ch = getchar()) != EOF);
    exit(1);
}

void my_return(){
    //normalne zakonczenie
    //    Zawiesza monitor dokad bedzie wprowadzony ^z
    //    exit(0)
    int ch;
    printf("ZAkoncz - ctrl+Z Enter\n");
    while ((ch = getchar()) != EOF);
    exit(0);
}