//
// Created by mitza on 3/21/2021.
//

#include "livrare_colet.h"


void livrare_colet::strategie_livrare(int var, char tip[],colet c, vehicul v) {
    strcpy(tip_vehicul, tip);
    if (strcmp(tip_vehicul, "scuter")==0)
        if (((c.get_locatie_x() == c.get_destinatie_x()) || (c.get_locatie_y() == c.get_destinatie_y()))  && c.get_rece()==false)
        {
            refuzat = false;
            durata_livrare = c.distanta_drum() / v.get_viteza();
            if (var == 1)
            {
                //vehiculul cel mai apropiat de colet
            }
            else if (var ==2)
            {
                //vehiculul care poate livra cel mai repede
            }
            else if (var == 3)
            {
                //vehicului cel mai putin incarcat
            }
        }
        else
        {
            refuzat = true;
        }
    else if (strcmp(tip_vehicul,"masina")==0)
        if (((c.get_locatie_x() != c.get_destinatie_x()) && (c.get_locatie_y() != c.get_destinatie_y()))  && c.get_rece()==false)
        {
            refuzat=false;
            durata_livrare = c.distanta_drum() / v.get_viteza();
            if (var == 1)
            {

            }
            else if (var ==2)
            {

            }
            else if (var == 3)
            {

            }
        }
        else
        {
            refuzat = true;
        }
    else if (strcmp(tip_vehicul,"duba")==0)
        if ((c.get_locatie_x() != c.get_destinatie_x()) && (c.get_locatie_y() != c.get_destinatie_y()))
        {
            refuzat = false;
            durata_livrare = c.distanta_drum() / v.get_viteza();
            if (var == 1)
            {

            }
            else if (var ==2)
            {

            }
            else if (var == 3)
            {

            }
        }
        else
        {
            refuzat = true;
        }
}
