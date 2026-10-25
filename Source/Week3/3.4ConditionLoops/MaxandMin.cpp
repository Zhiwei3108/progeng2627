#include <iostream>
int main(){

    int n, max, min;
    std::cout<<"number?"<<std::endl;
    std::cin>>n;
    max=n;
    min=n;
    while(n!=0){
        std::cout<<"number?"<<std::endl;
        std::cin>>n;
        if(n>max){
            max=n;
        }
        else if (n<min){
            min=n;
        }
        std::cout<<"max "<<max<<"\t"<<"min "<<min<<std::endl;
    }
    return 0;
    
}