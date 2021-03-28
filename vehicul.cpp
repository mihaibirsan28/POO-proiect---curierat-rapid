//
// Created by mitza on 3/17/2021.
//

#include "vehicul.h"


using namespace std;


vehicul::vehicul(char tip[], int x, int y, bool frigorifica) {
    strcpy(v_tip, tip);
    if (strcmp(v_tip, "scuter")==0)
    {
        eFrigorifica = frigorifica;
        MasaMax_scuter = 5;
        VolumMax_scuter = 3;
        nr_scutere++;
        viteza = 20;
        poz_x=x;
        poz_y=y;
        masa = 0;
        volum = 0;

    }
    else
        if (strcmp(v_tip,"masina")==0)
        {
            eFrigorifica = frigorifica;
            MasaMax_masina = 30;
            VolumMax_masina = 25;
            nr_masini++;
            viteza = 10;
            poz_x=x;
            poz_y=y;
            masa = 0;
            volum = 0;
            eFrigorifica = false;
        }
    else
        if (strcmp(v_tip,"duba")==0)
        {
            eFrigorifica = frigorifica;
            MasaMax_duba = 50;
            VolumMax_duba = 50;
            nr_dube++;
            viteza = 5;
            poz_x=x;
            poz_y=y;
            masa = 0;
            volum = 0;
        }
}

int vehicul::get_pozitionare_x() {
    return poz_x;
}

int vehicul::get_pozitionare_y() {
    return poz_y;
}

void vehicul::goleste_vehicul() {
    masa = 0;
    volum = 0;
}

int vehicul::get_viteza() {
    return viteza;
}


/*
void vehicul::preluare_colet() {
    if (colet.masa <= masa && colet.volum <= volum)
    {
        poz_x = colet.locatie_x;
        poz_y = colet.locatie_y;
        masa = colet.masa;
        volum = colet.volum;
    }
}
*/



int vehicul::distanta_colet(colet c) {
    return sqrt(((c.get_locatie_x()- poz_x)*(c.get_locatie_x()- poz_x))+(c.get_locatie_y()-poz_y)*(c.get_locatie_y()-poz_y));
}


