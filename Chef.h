#include <iostream>
#include <string>

using namespace std;

#ifndef CHEF_H
#define CHEF_H
class Chef: public Personal{
    protected:
        string platillo_favorito;
        int rating_chef;
    public:
        Chef(string,int,string,int,string,string,string,int,string,int);
        Chef();
        string getPlatillo_favorito();
        void setPlatillo_favorito(string);

        int getRating_chef();
        void setRating_chef(int);

};
#endif