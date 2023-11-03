#include<stdio.h>
int main()
{
    int a, x;

    // einlesen von a und x; 0 < a, x <=5
    do
    {
        printf("Bitte zwei ganze Zahlen 0 < a, x <= 5 eingeben: ");
        scanf("%d %d", &a, &x);
    } while ((a <= 0 || a > 5 || x <= 0 || x > 5));
   
    // Produkt aus a*x berechnen, indem a x-mal aufaddiert wird
    int erg = 0;
     printf("\nBerechne a * x = ...\n");
     for (int i = 0; i < x; i++)
     {
        erg += a;  // aus erg wird erg + a
        printf("%d + %d = %d\n", erg-a, a, erg);
     }
     
    // 30-a*x bis der Rest a*x entspricht
    printf("\nBerechne 30 - a * x = ...\n");
    int rest = 29;
    int subtra = 1;
    while (rest >= erg)
    {
         printf("30 - %d = %d\n", subtra, rest);
         rest -= 1;    // 1 nachfolgend vom Rest abziehen 
         subtra ++;    // subtra wird nach Verwendung um 1 inkrementiert
    }
    
}



