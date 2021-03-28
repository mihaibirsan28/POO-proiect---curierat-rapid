//
// Created by mitza on 3/17/2021.
//

#ifndef POO_TEMA1_FIRMA_DE_CURIERAT_VEHICUL_H
#define POO_TEMA1_FIRMA_DE_CURIERAT_VEHICUL_H

#include <cstring>
#include <string>
#include <iostream>
#include "colet.h"
#include <algorithm>
#include <math.h>

using namespace std;

class vehicul {
private:
    static int FlotaVehicule;
    char v_tip[30];
    int v_numar;
    int id_vehicul;
    int nr_scutere;
    int nr_masini;
    int nr_dube;
    int poz_x;
    int poz_y;
    int viteza;
    int MasaMax_scuter;
    int MasaMax_masina;
    int MasaMax_duba;
    int VolumMax_scuter;
    int VolumMax_masina;
    int VolumMax_duba;
    bool eFrigorifica;
    int masa;
    int volum;
    int masa_ramasa;
    int volum_ramas;

    friend class colet;
    friend class livrare_colet;

public:
   // friend std::ostream &operator<<(std::ostream &os, const vehicul &Vehicul);

    explicit vehicul( char tip[], int x, int y, bool frigorifica);
    int get_pozitionare_x();
    int get_pozitionare_y();
    int get_viteza();
    //void preluare_colet();
    void goleste_vehicul();


    int distanta_colet(colet c);

};


#endif //POO_TEMA1_FIRMA_DE_CURIERAT_VEHICUL_H
