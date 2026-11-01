
#include <iostream>
using namespace std;

int main() {
 int sum_even = 0;
 for(int i =1; i<= 50; i++){
     if(i%2==0){
         sum_even += i;
    }
 }
 cout<<"\nsum of even number is :"<<sum_even;
    return 0;
}
