#include <iostream>
#include <fstream>
#include <vector>
#include "Uzivatel.h"
#include <algorithm>

using namespace std;

vector<Uzivatel> nacti(vector<Uzivatel> uzivatele)
{
cout << "Zadej jmeno: ";
    string jmeno;
    cin >> jmeno;
    cout << "Jmeno je " << jmeno << "\n";

cout << "Zadej prijmeni: ";
    string prijmeni;
    cin >> prijmeni;
    cout << "Prijmeni je " << prijmeni << "\n";

cout << "Zadej vek: ";
    int vek;
    cin >> vek;

    do
    {
        if(vek<0)
        {
            cout << "Tak to jsi se jeste nenarodil.\n";
            cout << "Zkus to znovu: ";
            cin >> vek;
        }
        else if (vek>120)
        {
            cout << "Gratuluji k rekordu.\n";
            cout << "Zkus to znova: ";
            cin >> vek;
        }
        else
        {
            cout << "Vas vek je " << vek << "\n";
        }
    }while(vek>120||vek<0);

cout << "Zadej vysku v cm: ";
    float vyska;
    cin >> vyska;

    do{
        if(vyska < 100)
        {
            cout << "Tak to jsi mensi nez ja.\n";
            cout << "Zkus to znovu: ";
            cin >> vyska;
        }
        else if (vyska>250)
        {
            cout << "Gratuluji k rekordu bez hrat basketball.\n";
            cout << "Zkus to znova: ";
            cin >> vyska;
        }
        else
        {
            cout << "Vase vyska je " << vyska << "\n";
        }
    }while(vyska > 250||vyska<100);

cout << "Zadejte dosazene vzdelani (zs=0, ss=1, vs=2): ";
    int vzdelani;
    cin >> vzdelani;

    do
    {
        if(vzdelani == 0)
        {
            cout << "Vase vzdelani je zakladni.\n";
        }
        else if (vzdelani == 1)
        {
            cout << "Vase vzdelani je stredoskolske.\n";
        }
        else if (vzdelani == 2)
        {
            cout << "Vase vzdelani je vysokoskolske.\n";
        }
        else
        {
            cout << "Zadane vzdelani je naplatne, asi jste martan.\n";
            cout << "Zadejte novy udaj: ";
            cin >> vzdelani;
        }
    }while(vzdelani>2||vzdelani<0);

    uzivatele.push_back(Uzivatel(prijmeni,jmeno,vek,vyska,vzdelani));

    return uzivatele;

}

void ukladani(vector<Uzivatel> uzivatele)
{
    ofstream ulozTo ("users.txt");

    for(Uzivatel k : uzivatele)
    {
        ulozTo << k.prijm();
        ulozTo << " ";
        ulozTo << k.jme();
        ulozTo << " ";
        ulozTo << k.ve();
        ulozTo << " ";
        ulozTo << k.vysk();
        ulozTo << " ";
        ulozTo << k.vzde();
        ulozTo << "\n";
    }
    return;
}

struct Trideni
{
    bool operator()(class Uzivatel& a1 , class Uzivatel& a2) const
    {
        return a1.prijm() < a2.prijm();
    }

};

vector<Uzivatel> serazeno(vector<Uzivatel> a)
{
    sort(a.begin(),a.end(), Trideni());
    return a;
}

int main()
{
    int u;
    vector<Uzivatel> uzivatele;

    do
    {
        u = 0;
        uzivatele = nacti(uzivatele);
        cout << "Pokud chcete nacist dalsiho uzivatele napiste 1: ";
        cin >> u;
    }while(u==1);

    vector<Uzivatel> uzivatele2;
    uzivatele2 = serazeno(uzivatele);

    ukladani(uzivatele2);

return 0;
}
