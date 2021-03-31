#include <stdio.h>


int main() {

    printf("Wprowadz znak. Gdy wprowadzisz znak 'e' program się zatrzyma.\n");
    int ile_a = 0, ile_b = 0, ile_c = 0, pozostale = 0;
    char zn;

    for (;;) {

        zn = getchar();
        printf("%c", zn);

        switch (zn) {
            case 'a' :
                ++ile_a;
                continue;

            case 'b' :
                ++ile_b;
                continue;

            case 'c' :
                ++ile_c;
                continue;

            default:
                ++pozostale;
                break;
        }

        if (zn == 'e')
            break;

    }
    printf("\nbyło a: %i\n", ile_a);
    printf("było b: %i\n", ile_b);
    printf("było c: %i\n", ile_c);
    printf("Pozostale: %i\n", pozostale);
}