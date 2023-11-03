/****************************************/
/* Raphael Bienholz */
/* Gruppe: Mi08, Leiter: Timon Kybelka */
/* Uebungsblatt: 01, Aufgabe: B-3 */
/* Thema: Viereck */
/* Version: 1.0 */
/* Datum: 20.10.2023 */
/* Status: lauffaehig */
/****************************************/

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

