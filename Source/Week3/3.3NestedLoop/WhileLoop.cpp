#include <iostream>
int main(){
    int n1,n=0;
    std::cin>>n;
    int n2=n;
    n1=n;
    while (n1>0){
        n2=n;
        while(n2>0){
            std::cout<<"*";
            n2--;
        }
        std::cout<<std::endl;
        n1 --;
    }

}