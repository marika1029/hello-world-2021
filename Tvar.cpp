#include "Tvar.h"
#include <cstdlib>
#include <iostream>
#include <random>
#include <fstream>


double Tvar::obsah() const
{
    std::ofstream ulozeni_souboru ("bodz.txt");

    const double x1 = x_min();
    const double x2 = x_max();
    const double y1 = y_min();
    const double y2 = y_max();

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> kostka1(x1,x2);
    std::uniform_real_distribution<> kostka2(y1,y2);

    int N = 10000;
    double n = 0;

    for (int i=0; i<N; ++i)
    {
        double a = kostka1(gen);
        double b =kostka2(gen);
        if (leziUvnitr(a,b))
            ++n;
            ulozeni_souboru << a << std::endl;
            ulozeni_souboru << b << std::endl;
    }

    double S;

    S = (x2-x1)*(y2-y1)*(n/N);

    return S;
}
