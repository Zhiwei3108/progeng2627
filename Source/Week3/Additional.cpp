#include <iostream>
#include <cmath>
int main(){
    double a,b,c;
    std::cin>>a>>b>>c;
    if (a>0 && b>0 && c>0 && a+b>c && b+c>a && a+c>b){
        if(a==b==c){
            std::cout<<"equilateral"<<std::endl;
        }
        else if (a==b || b==c ||a==c){
            std::cout<<"isosceles"<<std::endl;
        }
        std::cout<<"scalene"<<std::endl;
        std::cout<<"perimeter="<<a+b+c<<std::endl;
        std::cout<<"area="<<std::sqrt((a+b+c)/2*((a+b+c)-a)*((a+b+c)-b)*((a+b+c)-c))<<std::endl;
    } else{
        std::cout<<"not triangle"<<std::endl;
        }

}