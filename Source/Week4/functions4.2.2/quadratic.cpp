#include <iostream>
#include <cmath>

int solve_qua(double a,double b, double c, double& x1,double& x2){

    if ((b*b-4*a*c)>=0){
        double delta= b*b-4*a*c;
        x1=(-b+std::sqrt(delta))/(2*a);
        x2=(-b-std::sqrt(delta))/(2*a);
        return 1;   
    }
    else{
        return 0;
    }
}
int main(){
    double a,b,c;
    std::cout<<"coeficient"<<std::endl;
    std::cin>>a>>b>>c;
    double x1,x2;
    int result = solve_qua(a,b,c,x1,x2);
    if (result==1){
    std::cout<<x1<<" "<<x2;
    }   else{
        std::cout<<"nrt";
    }
}