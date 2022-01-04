#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;

    //write your code here
    int n;
    for(int i = 0;i<t;i++){
        cin>>n;
        int isPrime =1;
        for(int j=2;j*j<=n;j++){
            if(n%j==0){
                
                isPrime=0;
            }
        }

        if(isPrime==1){
            cout<<"prime"<<endl;
        }
        else{
            cout<<"not prime"<<endl;
        }

    }


    
}
