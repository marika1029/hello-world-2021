#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <list>
#include <chrono>

using namespace std::chrono;

std::list<int> nacti_list()
{

    std::ifstream soubor("data.txt");

    std::list<int> muj_list (10000);

    for(std::list<int>::iterator it = muj_list.begin(); it != muj_list.end(); it++) {
        soubor >> *it;

    }

    return muj_list;
}


std::vector<int> seradto()
{
    std::vector<int> serazeny_list (10000);
    std::list<int> muj_list = nacti_list();
    for(std::list<int>::iterator it = muj_list.begin(); it != muj_list.end(); it++) {
        int pocet = 0;
        for(std::list<int>::iterator it2 = muj_list.begin(); it2 != muj_list.end(); it2++) {
            if (*it > *it2) {
                ++pocet;
            }
        }
        serazeny_list[pocet]=*it;
    }
    for (int i=0; i < serazeny_list.size(); ++i) {
       if (serazeny_list[i] == 0) {
            serazeny_list[i] = serazeny_list[i-1];
       }
    }

    return serazeny_list;
}

int main() {


    std::list<int> muj_list = nacti_list();

    auto start = high_resolution_clock::now();

    std::vector<int> muj_vektor = seradto();

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    std::cout    << "Cas funkce:"
            << duration.count() << " miktosekund" <<std::endl;

    std::ofstream uloz("serazeno.txt");
        for (int i=0; i < muj_vektor.size(); ++i) {
            uloz << muj_vektor[i] << std::endl;
        }

return 0;
}
