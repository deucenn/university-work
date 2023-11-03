#include<stdio.h>
int a = 1, b = 5;  // globale Variablen
int main()
{
    {
        int a = 3; // verdeckt globales a
        {
            int b = 1;  // verdecktes b
            printf("a = %i, b = %i\n", a, b);  // a aus Zeile 15 und verdecktes b aus Zeile 17
        }
        printf("a = %i, b = %i\n", a, b);  // verdeckt globales a aus Zeile 15 und globales b aus Zeile 11
    }
    printf("a = %i, b = %i\n", a, b);  // globales a und b aus Zeile 11
    {
        int b = 3;  // verdeckt globales b
        printf("a = %i, b = %i\n", a, b);  // globales a und verdeckt globales b aus Zeile 24
        {
            int a = 2, b = 2;  // verdeckte Definition von a und b
            printf("a = %i, b = %i\n", a, b);
        }
        printf("a = %i, b = %i\n", a, b);  // globales a und verdeckt globales b aus Zeile 24
    }
    printf("a = %i, b = %i\n", a, b);  // globales a und b aus Zeile 11
    {
        int a = 4;  // verdecktes globales a
        printf("a = %i, b = %i\n", a, b);  // verdecktes globales a aus Zeile 34 und globales b aus Zeile 11
    }
    printf("a = %i, b = %i\n", a, b);  // globales a und b aus Zeile 11

    system("pause");  // angenehmere Anzeige nach Kompilieren mit gcc
    return 0; 
}
