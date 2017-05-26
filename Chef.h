#include <iostream>
#include <string>

using namespace std;

#ifndef CHEF_H
#define CHEF_H
class Chef: public Administrador{
    protected:
        string platillo_favorito;
        int rating_chef;
    public:
        Chef(string,int);
        Chef();
        string getPlatillo_favorito();
        void setPlatillo_favorito(string);

        int getRating_chef();
        void setRating_chef(int);

};
#endif