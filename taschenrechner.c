#include <stdio.h>

int main()
{
    double zahl1;
    double zahl2;
    char operator;

    printf("Gebe eine Zahl ein: ");
    scanf("%lf", &zahl1);
    printf("\nGebe noch eine Zahl ein: ");
    scanf("%lf", &zahl2); 
    printf("\nGebe einen Operator an: ");
    scanf(" %c", &operator);

    printf("\n\n");
//    printf("%lf %lf %c", zahl1, zahl2, operator);

    if(operator == '+') {
    printf("%lf + %lf = %lf", zahl1, zahl2, zahl1 + zahl2);
    }
    if(operator == '-') {
        printf("%lf - %lf = %lf", zahl1, zahl2, zahl1 - zahl2);
    }
    if(operator == '*') {
        printf("%lf * %lf = %lf", zahl1, zahl2, zahl1 * zahl2);
    }
    if(operator == '/') {
        printf("%lf / %lf = %lf", zahl1, zahl2, zahl1 / zahl2);
    }
    printf("\n\n");

    system("pause");
    return 0;
}