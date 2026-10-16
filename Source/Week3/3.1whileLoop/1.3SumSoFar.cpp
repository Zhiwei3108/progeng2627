#include <iostream>
int main(){
    int n,p;
    double s=0;
    p=0;
    double a=0.0;
    //n is the number put in, s is the sum, a is the average, p is the number of loop;
    while (1){
        std::cout<<"number?"<<std::endl;
        std::cin>>n;
        p++;
        s=s+n;
        double(a)=s/p;

        std::cout<<p<<" "<<s<<" "<<a<<std::endl;
        if (n==0){
            break;
        }
    }
}