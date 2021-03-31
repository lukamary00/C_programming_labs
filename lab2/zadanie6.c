#include<stdio.h>
#include<math.h>

void pole_prostokata(void);
void obwod_prostokata(void);
void obwod_kola(void);
void pole_kola(void);
void pole_trojkata(void);
void obwod_trojkata();
void pole_kwadratu(void );
void obwod_kwadratu(void);

int main(int argc, char* argv[])
{
    pole_prostokata();
    obwod_prostokata();
    pole_kola();
    obwod_kola();
    pole_trojkata();
    obwod_trojkata();
    pole_kwadratu();
    obwod_kwadratu();

    return(0);
}

void pole_prostokata()
{
    float a,b,P,L;
    printf("Podaj dlugosci bokow a i b prostokata: \n");
    scanf("%f%f",&a,&b);
    if(a>0, b>0) {
        P = a * b;
        printf("Pole prostokata jest rowne: %f\n", P);
    }else{
        printf("Dana wartość nie odpowiada zadanej umowie. Prosze podac ponownie. Musi być > 0.");
        printf("Podaj dlugosci bokow a i b prostokata: \n");
        scanf("%f%f",&a,&b);
        P = a * b;
        printf("Pole prostokata jest rowne: %f\n", P);
    }

}

void obwod_prostokata(){
    float a,b,L;
    printf("Podaj dlugosci bokow a i b prostokata: \n");
    scanf("%f%f",&a,&b);
    if(a>0, b>0) {
        L = 2 * a + 2 * b;
        printf("Obwod prostokata jest rowny: %f\n", L);
    }else{
        printf("Dana wartość nie odpowiada zadanej umowie. Prosze podac ponownie. Musi być > 0.");
        printf("Podaj dlugosci bokow a i b prostokata: \n");
        scanf("%f%f",&a,&b);
        L = 2 * a + 2 * b;
        printf("Obwod prostokata jest rowny: %f\n", L);
    }
}

void pole_kola()
{   float r,P;
    printf("Podaj dlugosc promienia r kola: \n");
    scanf("%f", &r);
    if(r>0) {
        P = 3.1415 * r * r;
        printf("Pole kola jest rowne: %f\n", P);
    }else{
        printf("Dana wartość nie odpowiada zadanej umowie. Prosze podac ponownie. Musi być > 0.");
        printf("Podaj dlugosc promienia r kola: \n");
        scanf("%f", &r);
        P = 3.1415 * r * r;
        printf("Pole kola jest rowne: %f\n", P);
    }


}

void obwod_kola(){
    float r,L;
    printf("Podaj dlugosc promienia r kola: \n");
    scanf("%f",&r);
    if(r>0) {
        L = 2 * 3.1415 * r;
        printf("Obwód kola jest rowny: %f\n", L);
    } else{
        printf("Dana wartość nie odpowiada zadanej umowie. Prosze podac ponownie. Musi być > 0.");
        printf("Podaj dlugosc promienia r kola: \n");
        scanf("%f",&r);
        L = 2 * 3.1415 * r;
        printf("Obwód kola jest rowny: %f\n", L);
    }
}



void pole_trojkata()
{
    float a,b,c,P,S;
    printf("Podaj dlugosc a,b,c boku trojkata: ");
    scanf("%f%f",&a,&b,&c);

    if ((a+b>c) && (a+c>b) && (b+c>a)){
        P=(a+b+c)/2;

        S=sqrt(P*(P-a)*(P-b)*(P-c));
        printf("Pole trojkatu wynosi: %f\n", S);

    } else
        printf("Nie mozna zbudowac trojkat o zadanych parametrach");
}

void obwod_trojkata(){
    float a,b,c,L;
    printf("Podaj dlugosc a,b,c boku trojkata: ");
    scanf("%f%f",&a,&b,&c);
    if ((a+b>c) && (a+c>b) && (b+c>a)) {
        L = a + b + c;
        printf("Obwod trojkata jest rowny: %f\n", L);
    }else{
        printf("Nie mozna zbudowac trojkata\n");
    }

}

void pole_kwadratu()
{
    float a, P;
    printf("Podaj dlugosc a boku kwadratu: ");
    scanf("%f", &a);
    if(a>0) {
        P = a * a;
        printf("Pole kwadratu jest rowne: %f\n", P);
    }else{
        printf("Dana wartość nie odpowiada zadanej umowie. Prosze podac ponownie. Musi być > 0.");
        printf("Podaj dlugosc a boku kwadratu: ");
        scanf("%f", &a);
        P = a * a;
        printf("Pole kwadratu jest rowne: %f\n", P);
    }

}

void obwod_kwadratu(){
    float a, L;
    printf("Podaj dlugosc a boku kwadratu: ");
    scanf("%f", &a);
    if(a>0){
        L = 4*a;
        printf("Obwod kwadratu jest rowny: %f\n", L);
    }else{
        printf("Dana wartość nie odpowiada zadanej umowie. Prosze podac ponownie. Musi być > 0.");
        printf("Podaj dlugosc a boku kwadratu: ");
        scanf("%f", &a);
        L = 4*a;
        printf("Obwod kwadratu jest rowny: %f\n", L);
    }




}




