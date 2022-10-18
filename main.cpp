#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <list>

std::list<int> nacti_list()
{

    std::ifstream soubor("data.txt");

    std::list<int> muj_list (10000);

    for(std::list<int>::iterator it = muj_list.begin(); it != muj_list.end(); it++) {
        soubor >> *it;

    }

    return muj_list;
}

std::list<int> seradto()
{
    std::list<int> serazeny_list (10000);
    std::list<int> muj_list = nacti_list();
    for(std::list<int>::iterator it = muj_list.begin(); it != muj_list.end(); it++) {
        int pocet = 0;
        for(std::list<int>::iterator it2 = muj_list.begin(); it2 != muj_list.end(); it2++) {
            if (*it > *it2) {
                ++pocet;
            }
        }
        muj_list.insert(std::next(it,pocet),*it)
    }
    return muj_list;
}

int main() {


    std::list<int> muj_list = nacti_list();

    for(std::list<int>::iterator it = muj_list.begin(); it != muj_list.end(); it++) {
        std::cout << *it << "\n";
    }

return 0;
}
