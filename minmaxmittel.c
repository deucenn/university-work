#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h> // für INT_MAX und INT_MIN


int n;
int GroessteZahl;
int randNum() {
    return rand() % GroessteZahl + 1;
    }

int main(void){
    
    srand(time(NULL));

    printf("Eingabe von n: ");
    scanf("%d", &n);
    printf("\nEingabe von GroessteZahl: ");
    scanf("%d", &GroessteZahl);
    printf("\n\n");

    int min = INT_MAX; // Oberlimit für integers, sodass min danach vernünftig initialisiert werden kann
    int max = INT_MIN; // Unterlimit für integers 
    int countMin = 0;
    int countMax = 0;
    int i = 1;
    while (i <= n)
    {
        int num = randNum();
        printf("Zufallszahl = %d\n", num);
        if (num < min) {
            min = num;
            printf("Neues Minimum: %d\n", min);
            countMin++;
        } 
        if (num > max) {
            max = num;
            printf("Neues Maximum: %d\n", max);
            countMax++;
        } 
        
        
        i++;
    }
    int mittel = (min + max) / 2;
    printf("Minimmum, Mittelwert, Maximum = [ %d, %d, %d ]\n", min, mittel, max);
    printf("Anzahl der neuen Minima: %d\n", countMin);
    printf("Anzahl der neuen Maxima: %d\n", countMax);

    return 0;
}
