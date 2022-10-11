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

  std::vector<int> muj_vektor = nacti_vektor();
  int pocitadlo=0;
  do {
    pocitadlo=0;
    for (int i=0;i<muj_vektor.size();++i) {
        if (muj_vektor[i]>muj_vektor[i+1]) {
                std::vector<int> pomoc(2);
                pomoc[0]=muj_vektor[i];
                pomoc[1]=muj_vektor[i+1];
                muj_vektor[i]=pomoc[1];
                muj_vektor[i+1]=pomoc[0];
                ++pocitadlo;
                }

    }
    }while(pocitadlo>0);


   for (int i=0;i<muj_vektor.size();++i) {
   std::cout <<muj_vektor[i]<<"\n";
   }
//   ofstream zapisDoSouboru("serazeno.txt");
 //  for (int i=0;i<muj_vektor.size();++i) {
 //       zapisDoSouboru << muj_vektor[i] << endl;
 //       }
return 0;
    }
