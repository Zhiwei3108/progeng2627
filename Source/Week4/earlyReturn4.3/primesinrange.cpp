#include <iostream>

int primes(int n1, int n2, int & p){
    for (int p=n1; p<=n2; p++){
        for(int i=0; i<p; i++){
            if (p%i==0){
                
            }else{
                return p;
            }
        }
    }
    return 0;
}
int main(){
    int n1,n2,p,out;
    std::cout<<"number n1 and n2"<<std::endl;
    std::cin>>n1>>n2;
    std::cout<<n1<<" "<<n2<<std::endl;
    while(1){
        out=primes(n1,n2,p);
        std::cout<<out<<std::endl;
        if (p==n2){
            break;
    }
    }
}