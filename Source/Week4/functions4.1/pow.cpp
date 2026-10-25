#include <iostream>
double mypow(double base, int exp){
    double result=1;
    double sum=0;
    if (exp>=0){
        for (int i=0;i < exp; i++){
            result=result*base;
            sum=sum+result;
        }
    }else {
        for (int j=0; j>exp;j--){
            result=result/base;

        }
    }
    return result;//or return sum
}
int main(){
    // we test examples with integer (and non-negative) exponent

    std::cout << "2^3: " << mypow(2, 3) << std::endl;
    std::cout << "0.5^2: " << mypow(0.5, 2) << std::endl;
    std::cout << "1^0: " << mypow(1, 0) << std::endl;
}
