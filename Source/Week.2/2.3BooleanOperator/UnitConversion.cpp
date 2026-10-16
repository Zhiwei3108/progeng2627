#include <iostream>
#include <string>
int main(){
    double length_in,length_out,n1;
     std::string unit_in,unit_out;
    std::cout<<"length?"<<std::endl;
    std::cin>> length_in;
    std::cout<<"unit?"<<std::endl;
    std::cin>> unit_in>>n1;
    //const double mile_to_km = 1.609;
    if( (unit_in == "mile")|| (unit_in =="miles")){
        unit_out="km";
        length_out=length_in*1.609;
    }
    if (unit_in == "km"){
        unit_out="mile";
        length_out=length_in/1.609;
    }
    std::cout<<length_out<<unit_out<<std::endl;
    std::cout<<n1<<unit_out<<std::endl;

}