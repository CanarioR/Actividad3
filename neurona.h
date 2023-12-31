#ifndef NEURONA_H
#define NEURONA_H
#include <iostream>

class Neurona{
private:
    int id, posicion_x, posicion_y, red, blue, green;
    float voltaje;
public:
    Neurona() : id(1), posicion_x(45), posicion_y(45),red(0), blue(0), green(0),voltaje(122.36){};

    void setID(const int& i){id = i;}
    void setPX(const int& x){ posicion_x = x;}
    void setPY(const int& y){posicion_y = y;}
    void setRed(const int& r){red = r;}
    void setBlue(const int& b){blue = b;}
    void setGreen(const int& g){green = g;}
    void setVolt(const float v){voltaje = v;}

    int getID()const{return id;}
    int getPX()const{return posicion_x;}
    int getPY()const{return posicion_y;}
    int getRed()const{return red;}
    int getBlue()const{return blue;}
    int getGreen()const{return green;}
    float getaVolt()const{return voltaje;}


    void print(){
        std::cout<<"\nID: "<<id<<std::endl;
        std::cout<<"\nPosicion x: "<<posicion_x<<std::endl;
        std::cout<<"\nPosicion y: "<<posicion_y<<std::endl;
        std::cout<<"\nRed: "<<red<<std::endl;
        std::cout<<"\nVoltaje: "<<voltaje<<std::endl;
    }
    friend std::ostream& operator<<(std::ostream& os, const Neurona& n) {
        os << n.id, os <<n.posicion_x, os <<n.posicion_y, os <<n.red, os<<n.blue, os << n.green, os << n.voltaje;
        return os;
    }
};

#endif //NEURONA_H
