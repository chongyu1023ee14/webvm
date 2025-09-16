#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3,tem;
    cin >> n1 >> n2 >> n3;
    if (n3 > n2) {
        tem = n3;
        n3 = n2;
        n2 = tem ;
    }
    if (n2 > n1) {
        tem = n2;
        n2 = n1;
        n1 = tem ;
    }
    if (n3 > n2) {
        tem = n3;
        n3 = n2;
        n2 = tem ;
    }
    
    cout << "1st: " << n1 << "\n2nd: " << n2 << "\n3rd: " << n3;
    return 0;
}