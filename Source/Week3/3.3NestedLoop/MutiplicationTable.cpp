#include <iostream>
int main(){
    int n1=0;
    std::cin>>n1;
    for(int n2=1;n2<=n1;n2++){
        for(int n3= 1; n3<=n1;n3++){
            std::cout<<n2*n3<<"\t";
        }
        std::cout<<std::endl;
    }
}