#include <stdio.h>

void hanoi(int n,char A,char B, char C)
{
    if(n==1)
        printf("%c => %c\n", A, C);
    else
    {
        hanoi(n-1,A,C,B);      //przeniesc n-1 z A do B
        hanoi(1,A,B,C);         //przeniesc 1 z A do C
        hanoi(n-1,B,A,C);      //przeniesc n-1 z B do C

    }
}
int main(int argc, char *argv[])
{
    hanoi(3, 'A', 'B', 'C');
    return 0;
}
