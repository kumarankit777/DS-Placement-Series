#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    //write your code here
    while(n!=0){
        int rem = n%10;
        cout<<rem<<endl;
        n=n/10;
    }
    
}
