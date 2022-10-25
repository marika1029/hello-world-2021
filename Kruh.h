#ifndef KRUH_H
#define KRUH_H


class Kruh
{
    public:
        Kruh(); //Konstruktor (volam: Kruh r = Kruh...)
        Kruh(double r_in, double x_in, double y_in);
        virtual ~Kruh(); //Destruktor (vola se automaticky)
        //void posun(double xp, double yp); //metoda co posune souradnice o (xp,yp) - zadny vystup
        //void vypisnaobrazovku() const; //const znamena ze objekt se nezmeni
        void vypisInfo() const;
        double obsah() const;
        double obvod() const;
        double leziUvnitr(double xa, double ya)  const;

    protected:

    private:
        double r,x,y; //data se kterymi uzivatel nemuze pracovat

};

#endif // KRUH_H
