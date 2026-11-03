#include <iostream>
#include <vector>

int main(){

    std::vector<double> series;
    std::cout<<"please enter number larger than 0"<<std::endl;
    double com;
    std::cin>>com;   
    double sync;
    while(1){

        std::cin>>sync;
        if(sync<=com){
            series.push_back(sync);

        }
        if (sync==0){
            break;
        }
}
    for (int i= 0;i<series.size();i++){
        std::cout<<series[i]<<" ";
    }
}
