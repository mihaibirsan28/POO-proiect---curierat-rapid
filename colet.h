//
// Created by mitza on 3/20/2021.
//

#ifndef POO_TEMA1_FIRMA_DE_CURIERAT_COLET_H
#define POO_TEMA1_FIRMA_DE_CURIERAT_COLET_H


class colet {
public:
    explicit colet(int gr, int vl, int l_x, int l_y, int d_x, int d_y, bool rece);
    double get_locatie_x() const;
    double get_locatie_y() const;
    double get_destinatie_x() const;
    double get_destinatie_y() const;
    double get_rece() const;
    double get_masa() const;
    double get_volum() const;
    int drum();
    int distanta_drum();
    //int distanta_colet_vehicul();
    ~colet();


private:
    bool BunRece;
    int greutate;
    int volum;
    int locatie_x;
    int locatie_y;
    int destinatie_x;
    int destinatie_y;
    int variante;
    friend class vehicul;
    friend class livrare_colet;
};



#endif //POO_TEMA1_FIRMA_DE_CURIERAT_COLET_H
