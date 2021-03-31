#include <stdio.h>
#include <time.h>

int main(void)
{
    int rok;
    int age;
    int current_year;

    time_t seconds=time(NULL);
    struct tm* current_time=localtime(&seconds);
    current_year = current_time->tm_year + 1900;
    printf("Aktualny rok = %d\n", current_year);

    printf("Podaj rok: ");
    scanf("%d",&rok);

    if(rok>0) {
        age = current_year - rok;
        printf("Wiek: %d\n",age);
    }
    return 0;
}
