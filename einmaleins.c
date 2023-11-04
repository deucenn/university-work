#include<stdio.h>
int main()
{
    int n;
    printf("Bitte geben Sie eine Zahl n ein: ");
    scanf("%d", &n);
    printf("\n");

    // Ausgabe Einmaleins
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%5d", i * j);
        }
        printf("\n\n");
    }
    system("pause");
    return 0;
}