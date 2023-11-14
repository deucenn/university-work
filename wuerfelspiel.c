
// stdlib.h & time.h laden, damit randomizer FUnktion funktioniert
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Würfelfunktion bestimmen
int rollDice() {
    return rand() % 6 + 1;
}
int main() {
    srand(time(NULL));   // Zeit definieren damit mehrere Zufallszahlen möglich sind
    int punktestandSpieler = 0;
    int punktestandComputer = 0;
    while (punktestandSpieler < 100 && punktestandComputer < 100) {   // While Loop für Rahmenbedingungen
        int rundePunkteSpieler = 0;
        int rundePunkteComputer = 0;
        int weiter = 1;
        printf("Sie sind am Zug.\n");
        do {
            int wurf = rollDice();
            printf("Es wurde eine %d gewuerfelt.\n", wurf);

            if (wurf >= 3) {
                rundePunkteSpieler += (wurf == 3) ? 3 : ((wurf == 4) ? 4 : ((wurf == 5) ? 5 : 10));  // Ternärer Operator '?:' vereinfacht if-elseif Loop in diesem Fall
                printf("Punkte in dieser Runde bisher: %d.\n", rundePunkteSpieler);
                printf("Weiter? (1 fuer ja, 0 fuer nein): ");
                scanf("%d", &weiter);
            } else {
                printf("Die Runde ist verloren.\n");
                rundePunkteSpieler = 0;
                break;
            }
        } while (weiter);

        punktestandSpieler += rundePunkteSpieler;
        printf("Punktestand: Sie: %d, Computer: %d\n\n", punktestandSpieler, punktestandComputer);

        if (punktestandSpieler >= 100) {
            printf("Sie haben gewonnen!\n");
            break;
        }

        weiter = 1;  // weiter muss auf 1 gesetzt werden, weil sonst die nächste Runde nicht anfangen kann

        printf("Der Computer ist am Zug.\n");

        do {
            int wurf = rollDice();
            printf("Es wurde eine %d gewuerfelt.\n", wurf);

            if (wurf >= 3) {
                rundePunkteComputer += (wurf == 3) ? 3 : ((wurf == 4) ? 4 : ((wurf == 5) ? 5 : 10));
                printf("Punkte in dieser Runde bisher: %d.\n", rundePunkteComputer);

                if (rundePunkteComputer >= 8) {
                    printf("Der Computer nimmt die Punkte.\n");
                    weiter = 0;
                } else {
                    printf("Der Computer spielt weiter.\n");
                }
            } else {
                printf("Die Runde ist verloren.\n");
                rundePunkteComputer = 0;
                break;
            }
        } while (weiter);

        punktestandComputer += rundePunkteComputer;
        printf("Punktestand: Sie: %d, Computer: %d\n\n", punktestandSpieler, punktestandComputer);

        if (punktestandComputer >= 100) {
            printf("Der Computer hat gewonnen!\n");
            break;
        }
    }

    return 0;
}