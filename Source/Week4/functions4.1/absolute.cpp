#include <iostream>

double abs(double in){
    if (in<0){

        in=-in;

    }
    return in;
}

int main(){
    std::cout<<"please enter a number"<<std::endl;
    double in=0;
    std::cin>>in;
    std::cout<<"|"<<in<<"|="<<abs(in)<<std::endl;
}
