#include <iostream>
using namespace std;

int main() {
int x,y;
    string number[9] = {"one","two","three","four","five","six","seven","eight","nine"};
    cin >> x >> y;
 for (int i=x;i<=y;i++) {
     if (i > 9) {
         if (i % 2 == 0) cout << "even" << endl; else cout << "odd" << endl;}
         else {
         cout << number[i-1] << endl;
     }
 }        
    return 0;
}