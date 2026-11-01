
#include <iostream>
using namespace std;
int fact (int k){
    int res = 1;
    for(int i =k; i>1; i--){
        res *= i;
    }
    return res;
}
int Bino (int m, int n){
    int coef;
    coef = fact(m)/(fact(n)*fact(m-n));
    return coef;
}
void pascal(int d){
    for(int i = 0; i<d;i++){
        for(int j = 0; j<=i; j++){
            cout<<"\t"<<Bino(i , j);
        }
        cout<<endl;
    }
}
int main() {
  
  pascal(6);

    return 0;
}
