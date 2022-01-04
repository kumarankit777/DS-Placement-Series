#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    //write your code here
    int a = 0;
    int b = 1;
    int sum ;

    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        sum = a+b;
        a = b;
        b = sum;
    }
}
