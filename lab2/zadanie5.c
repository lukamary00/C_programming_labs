#include <stdio.h>

int main(){
    int m;
    int a = 3;
    int b = 7;
    int c = 9;
    int d = 1;

    m=a;
    if (b>m) m = b;
    if (c>m) m = c;
    if (d>m) m = d;

    printf("Największa z tych liczb to:%d", m);

}
