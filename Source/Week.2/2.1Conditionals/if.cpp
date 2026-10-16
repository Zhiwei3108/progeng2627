#include <iostream>
int main(){
    int n1, rem;
    std::cout<<"number?"<<std::endl;
    std::cin>>n1;
    rem=n1%2;
    if(rem==1){
        std::cout<<"odd"<<std::endl;
    }
    else{
        std::cout<<"even"<<std::endl;
    }
}
