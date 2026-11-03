#include <iostream>

int smallest_factor(int n){
    for (int i=2; i<n;i++){
        if (n%i==0){
            return i;
        }
    }
    return 1;
}
int main(){
    int x,out;
    std::cout<<"number"<<std::endl;
    std::cin>>x;
    out= smallest_factor(x);
    std::cout<<"samllest_factor"<<out<<std::endl;

}