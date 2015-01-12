/* 
 * File:   Objeto.h
 * Author: Maha
 *
 * Created on 5 de enero de 2015, 12:47 PM
 */

#ifndef OBJETO_H
#define	OBJETO_H
#include <vector>
using namespace std;

class Objeto {
public:
    vector<double> valores;
    vector<double> distancias;
    double distanciaAcumulada;
    int id;
    int comparando;
    Objeto();
    Objeto(const Objeto& orig);
    Objeto(int pezo);
    virtual ~Objeto();
    void poneValor(double val);
    void aumentaAcumulado(double k);
    bool operator<(const Objeto& ob) const;
    bool operator>(const Objeto& ob) const;
    bool operator==(const Objeto& ob) const;
private:

};

#endif	/* OBJETO_H */

