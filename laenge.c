/****************************************/
/* Raphael Bienholz */
/* Gruppe: Mi08, Leiter: Timon Kybelka */
/* Uebungsblatt: 03, Aufgabe: B-5 */
/* Thema: if-Kaskaden */
/* Version: 1.0 */
/* Datum: 30.10.2023 */
/* Status: lauffaehig */
/****************************************/
#include<stdio.h>
int main()
{
    int laenge;

    printf("Geben Sie die Laenge ein: ");  //Eingabe
    scanf("%i", &laenge);

    switch (laenge)
    {
        case 105 :  //check, ob die Länge 105 oder 106 beträgt
        case 106 :
            printf("S\n");  //Output, falls zutrifft
            break;
        case 107 :  //check, ob die Länge 107 oder 108 beträgt
        case 108 :
            printf("M\n");
            break;
        case 109 :  //check, ob die Länge 109 oder 110 beträgt
        case 110 :
            printf("L\n");
            break;
        default : 
            printf("Falsche Eingabe\n");  //Ausgabe, falls eine Zahl <105 oder >110 eingegeben wird
    }
system("pause");
return 0;    
}