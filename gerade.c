/****************************************/
/* Raphael Bienholz */
/* Gruppe: Mi08, Leiter: Musterleiter */
/* Uebungsblatt: 01, Aufgabe: B-1 */
/* Thema: Informationsgehalt */
/* Version: 1.0 */
/* Datum: 19.10.2023 */
/* Status: lauffaehig */
/****************************************/

#include <stdio.h>
int main(void)
{
int n;
printf("Bitte geben Sie eine Zahl ein: ");
scanf("%i", &n);
if (n % 2 == 0)
{
printf("Die Zahl ist gerade.\n");
}
else
{
printf("Die Zahl ist ungerade.\n");
}
printf("\n\n");

system("pause");
return 0;
}