#include <iostream>
#include <vector>
#include <fstream>
#include <string>

std::vector<int> nacti_vektor(){

    std::ifstream soubor("data.txt");

    std::vector<int> muj_vektor(10000);

    for (int i=0;i<10000;++i) {
        int cislo =0;
        soubor>>cislo;
        muj_vektor [i] = cislo;
    }
    return muj_vektor;
}

int main() {
    //int pole[10] = {1,2,3,4,5,6,7,8,9,10};
    //pole[0] = 5;
   //td::vector<int> muj_vektor(20);
  //muj_vektor = {1,2,3,4,8,6,3,8,1,10,1,6,4,2,3,5,7,6,2,1};

    //for (int i=0; i<muj_vektor.size()+10; ++i) {
    //std::cout << muj_vektor.at(i) << "\n";
    //}

    std::vector<int> muj_vektor = nacti_vektor();

    int a=0;


    for (int i=0; i<muj_vektor.size(); ++i) {
        if (muj_vektor.at(i)<8) {
            a=(a+1);
        }
        else {
        }
    }
    std::cout << a << "\n";
//vypocet prumeru
    std::vector <int> pomocny_vektor(a);

    for (int o=0; o<muj_vektor.size(); ++o) {
        if (muj_vektor.at(o)<5) {
            pomocny_vektor.push_back(muj_vektor.at(o));
        }
        else {
        }
    }

    int predprumer=0;

    for (int k=0; k<pomocny_vektor.size(); ++k) {
        predprumer=predprumer+pomocny_vektor.at(k);
    }

    float prumer;
    prumer=predprumer/a;
    std::cout << "Prumer vseh hodnot mensich jak 5 je: " << prumer << "\n";


    //int * ukazatel;
    //ukazatel = pole;
    //for (int i=0; i<10; ++i) {
    //std::cout << *(ukazatel+i) << "\n";
    //}

return 0;
}
