#include <iostream>
int main(){
    int i=0;     
    int f=1;
    std::cin>>i;
    for (; i>0;i--){
        f= f*i;
        std::cout<<f<<std::endl;
    }
    if (i==0){

        std::cout<<1<<std::endl;
    }
    if (i<0){

        std::cout<<"invalid"<<std::endl;
    }
}