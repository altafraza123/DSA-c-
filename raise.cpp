#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x,n,power;
    cout << "enter the number:\n";
    cin >> x;
    cout << "enter the power:\n";
    cin >> n;
    
        power=pow(x,n);

    
    cout << x <<  "to the power"  << n <<"is"<< power << endl;
    return 0;

}