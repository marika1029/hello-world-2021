#include <iostream>
#include "Kruh.h"
#include <cmath>

Kruh::Kruh()
{
    r = 0.0;
    x = 0.0;
    y = 0.0; //ctor
}

Kruh::Kruh(double r_in, double x_in, double y_in)
{
    r=r_in;
    x=x_in;
    y=y_in; //ctor
}

void Kruh::vypisInfo() const
{
    std::cout << "Polomer: " << r << "\n";
    std::cout << "Stred: (" << x << "," << y << ")\n";
}

double Kruh::obsah() const
{
    double V;
    V = M_PI*r*r;
    return V;
}

double Kruh::obvod() const
{
    double S;
    S = 2*M_PI*r;
    return S;
}

double Kruh::leziUvnitr(double xxa, double yya)  const
{
    double xa = xxa-x;
    double ya = yya-y;
    double vzdalenost = sqrt((xa*xa)+(ya*ya));
    if (vzdalenost == r || vzdalenost < r)
        {
            return 1;
        }
    else {
        return 0;
    }

}

//void Kruh::posun(double xp, double yp)
//{
//    x += xp;
//    y += yp;
//}

//void Kruh::vypisnaobrazovku() const
//{
//    std::cout << "(" << x << "," << y << ")";
//}

Kruh::~Kruh()
{
    //dtor
}
