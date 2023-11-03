#include <stdio.h>
int main()
{
    // Variablen bestimmen
    int breite;
    int hoehe;
    
    // Eingaben tätigen
    printf("Bitte geben Sie die Breite an: ");
    scanf("%i", &breite);
    printf("\nBitte geben Sie die Hoehe an: ");
    scanf("%i", &hoehe);
    
    // Ausgabe
    printf("\nDas Viereck mit den Seitenlaengen %i x %i ist ein Rechteck.", breite, hoehe);
    
    // Erweiterte Ausgabe
    if(breite == hoehe) {
        printf("\nDas Viereck ist auch ein Quadrat.");
    }


    printf("\n\n");

    system("pause");
    return 0;
}

