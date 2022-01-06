#include <iostream>
using namespace std;

int gcd(int a ,int b){
    if(a==0){
        return b;
    }

    if(b==0){
        return a;
    }

    if(a==b){
        return a;
    }

    if(a>b){
        return gcd(a-b,b);
    }
    else{
        return gcd(a,b-a);
    }
}
int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;

    int lcm = (num1*num2) / gcd(num1,num2);

    //write your code here
    cout<<gcd(num1,num2)<<endl;
    cout<<lcm<<endl;
    
}
