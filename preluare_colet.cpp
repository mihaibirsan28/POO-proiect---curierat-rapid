//
// Created by mitza on 3/28/2021.
//

#include "preluare_colet.h"
#include <cstring>
#include "colet.h"
#include "vehicul.h"

void preluare_colet::strategie_ridicare(int v, char *tip) {
    strcpy(tip_vehicul, tip);
    if (strcmp(tip_vehicul, "scuter")==0)
    {
        incape = true;
    }
}