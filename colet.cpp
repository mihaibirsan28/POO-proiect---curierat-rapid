//
// Created by mitza on 3/20/2021.
//

#include "colet.h"
#include <algorithm>
#include <math.h>

colet::colet(int gr, int vl, int l_x, int l_y, int d_x, int d_y,bool rece) {
    BunRece = rece;
    greutate = gr;
    volum = vl;
    locatie_x = l_x;
    locatie_y = l_y;
    destinatie_x = d_x;
    destinatie_y = d_y;
}

double colet::get_locatie_x() const {
    return locatie_x;
}

double colet::get_locatie_y() const {
    return locatie_y;
}

double colet::get_destinatie_x() const {
    return destinatie_x;
}

double colet::get_destinatie_y() const {
    return destinatie_y;
}

double colet::get_rece() const{
    return BunRece;
}

double colet::get_masa() const {
    return greutate;
}

double colet::get_volum() const {
    return volum;
}

int colet::drum() {
    if (locatie_x == destinatie_x || locatie_y == destinatie_y)
        return 1;
    else
        return 0;
}

int colet::distanta_drum() {
    return sqrt(((destinatie_x - locatie_x)*(destinatie_x - locatie_x)) + ((destinatie_y - locatie_y)*(destinatie_y - locatie_y)));
}

//int colet::distanta_colet_vehicul() {
 //   return sqrt((locatie_x-vehicul.poz_x))
//}
//colet::~colet() {
  //  delete colet;
//}




