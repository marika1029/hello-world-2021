#include <iostream>

int main(){
std::cout << "Zadej jmeno: ";
    std::string jmeno;
    std::cin >> jmeno;
    std::cout << "Jmeno je " << jmeno << "\n";

std::cout << "Zadej prijmeni: ";
    std::string prijmeni;
    std::cin >> prijmeni;
    std::cout << "Prijmeni je " << prijmeni << "\n";

std::cout << "Zadej vek: ";
    int vek;
    std::cin >> vek;

    do{
    do{
        if(vek<0) {
            std::cout << "Tak to jsi se jeste nenarodil.\n";
            std::cout << "Zkus to znovu: ";
            std::cin >> vek;
        }
        else if (vek>120) {
            std::cout << "Gratuluji k rekordu.\n";
            std::cout << "Zkus to znova: ";
            std::cin >> vek;
        }
        else {
            std::cout << "Vas vek je " << vek << "\n";
        }
    }while(vek>120);
    }while(vek<0);

std::cout << "Zadej vysku v cm: ";
    float vyska;
    std::cin >> vyska;

    do{
    do{
        if(vyska < 100) {
            std::cout << "Tak to jsi mensi nez ja.\n";
            std::cout << "Zkus to znovu: ";
            std::cin >> vyska;
        }
        else if (vyska>250) {
            std::cout << "Gratuluji k rekordu bez hrat basketball.\n";
            std::cout << "Zkus to znova: ";
            std::cin >> vyska;
        }
        else {
            std::cout << "Vase vyska je " << vyska << "\n";
        }
    }while(vyska > 250);
    }while(vyska < 100);

std::cout << "Zadejte dosazene vzdelani (zs=0, ss=1, vs=2): ";
    int vzdelani;
    std::cin >> vzdelani;

    do{
    do{
        if(vzdelani == 0) {
            std::cout << "Vase vzdelani je zakladni.\n";
        }
        else if (vzdelani == 1) {
            std::cout << "Vase vzdelani je stredoskolske.\n";
        }
        else if (vzdelani == 2) {
            std::cout << "Vase vzdelani je vysokoskolske.\n";
        }
        else {
            std::cout << "Zadane vzdelani je naplatne, asi jste martan.\n";
            std::cout << "Zadejte novy udaj: ";
            std::cin >> vzdelani;
        }
    }while(vzdelani>2);
    }while(vzdelani<0);


    std::cout << "\n";
    std::cout << "Jmeno: " << jmeno << "\n";
    std::cout << "Prijmeni: " << prijmeni << "\n";
    std::cout << "Vek: " << vek << "\n";
    std::cout << "Vyska: " << vyska << "\n";
    std::cout << "Vzdelani: " << vzdelani << "(zs=0; ss=1; vs=2)\n";





return 0;
}
