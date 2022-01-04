#include <iostream>
using namespace std;
int main(){
    int low, high;
    cin >> low >> high;

    //write your code here
    for(int i =low;i<=high;i++){
        int isPrime=1;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime==1){
            cout<<i<<endl;
        }
    }

}
