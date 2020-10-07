#include <iostream>
using namespace std;


int main() {
    int i; 
    int n; //n = Numbers 
    int a[10];// You have to plug in 10 first then your other integers after 
    
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> a[i];
    }
    cout << "Even Numbers" << endl;
   for (i=0; i<n; i++){
       if(a[i]%2==0)
       cout << " " << a[i];
   } 
   return 0;
}
