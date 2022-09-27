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
    std::cout << "Vek je " << vek << "\n";

std::cout << "Zadej vysku: ";
    float vyska;
    std::cin >> vyska;
    std::cout << "Vyska je: " << vyska << "\n";

std::cout << "Zadejte dosazene vzdelani (zs=0; ss=1; vs=2)";
    std::string skola;
    std::cin >> skola;


return 0;
}
