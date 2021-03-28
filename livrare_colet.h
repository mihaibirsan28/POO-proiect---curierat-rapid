//
// Created by mitza on 3/21/2021.
//

#ifndef POO_TEMA1_FIRMA_DE_CURIERAT_LIVRARE_COLET_H
#define POO_TEMA1_FIRMA_DE_CURIERAT_LIVRARE_COLET_H

#include <cstring>
#include "colet.h"
#include "vehicul.h"

class livrare_colet{
public:
    void strategie_livrare(int var, char tip[],colet c, vehicul v);
private:
    //int timp_livrare_scuter;
    //int timp_livrare_masina;
    //int timp_livrare_duba;
    int varinata;
    char tip_vehicul[25];
    bool refuzat;
    int durata_livrare;
    friend class colet;
    friend class vehicul;
};


#endif //POO_TEMA1_FIRMA_DE_CURIERAT_LIVRARE_COLET_H
