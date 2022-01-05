#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    //write your code here
    int count=0;
    while(n!=0){
        int rem = n%10;
        count++;
        n = n/10;

    }

    cout<<count<<endl;
    
}
