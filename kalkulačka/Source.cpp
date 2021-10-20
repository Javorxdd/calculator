#include <iostream>
#include <string>
using namespace std;

int main(void) {

    cout << "Vitejte v kalkulacce" << endl;
    printf("Zadejte prvni cislo: ");
    float a;
    cin >> a;
    printf("Zadejte druhe cislo:");
    float b;
    cin >> b;
    printf("Zvolte si operaci:");
    printf("1 - scitani ");
    printf("2 - odcitani ");
    printf("3 - nasobeni ");
    printf("4 - deleni ");
    printf("5 - mocnica A ");
    printf("6 - mocnica B ");
    printf("7 - odmocnina A ");
    printf("8 - odmocnica B ");
    int volba;
    cin >> volba;
    float vysledek = 0;
    if (volba == 1)
        vysledek = a + b;
    else if (volba == 2)
        vysledek = a - b;
    else if (volba == 3)
        vysledek = a * b;
    else if (volba == 4)
        vysledek = a / b;
    else if (volba == 5)
        vysledek = a * a;
    else if (volba == 6)
        vysledek = sqrt(a);
    else if (volba == 7)
        vysledek = b * b;
    else if (volba == 8)
        vysledek = sqrt(b);
    if ((volba > 0) && (volba < 9))
        cout << "Vysledek: " << vysledek << endl;
    else
        printf("Neplatna volba");
    printf("Dekuji za pouziti kalkulacky, aplikaci ukoncite libovolnou klavesou.");
    cin.get(); cin.get();
    return 0;
}
