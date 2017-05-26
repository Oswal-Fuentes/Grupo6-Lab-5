#include "Chef.h"

Chef::Chef(string platillo_favorito,int rating_chef){
    this->platillo_favorito=platillo_favorito;
    this->rating_chef=rating_chef;
}
Chef::Chef(){

}void Chef::setPlatillo_favorito(string platillo_favorito){
   this-> platillo_favorito=platillo_favorito;
}
string Chef::getPlatillo_favorito(){
   return platillo_favorito;
}
void Chef::setRating_chef(int rating_chef){
   this-> rating_chef=rating_chef;
}
int Chef::getRating_chef(){
   return rating_chef;
}
