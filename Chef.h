#include <iostream>
#include <string>
#include "Personal.h"

using namespace std;

#ifndef CHEF_H
#define CHEF_H
class Chef: public Personal{
    protected:
        string platillo_favorito;
        int rating_chef;
    public:
        Chef(string,int,int,int,string,string,string,int,string,string);
        Chef();
        string getPlatillo_favorito();
        void setPlatillo_favorito(string);

        int getRating_chef();
        void setRating_chef(int);

};
#endif