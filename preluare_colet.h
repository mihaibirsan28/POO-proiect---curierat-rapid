//
// Created by mitza on 3/28/2021.
//

#ifndef POO_TEMA1_FIRMA_DE_CURIERAT_PRELUARE_COLET_H
#define POO_TEMA1_FIRMA_DE_CURIERAT_PRELUARE_COLET_H


class preluare_colet {
private:
    int varianta;
    char tip_vehicul[25];
    bool incape;
    int durata_ridicare;
    friend class colet;
    friend class vehicul;
public:
    void strategie_ridicare(int v, char tip[]);
};


#endif //POO_TEMA1_FIRMA_DE_CURIERAT_PRELUARE_COLET_H
