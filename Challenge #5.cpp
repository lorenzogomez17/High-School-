#include <iostream>
#include <algorithm>
using namespace std;

    int main() {
    int counter = 0;
    int a, b, c, d, e, f, g, h, i, j = 0;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j; 

    int arr[10] = {a, b, c, d, e, f, g, h, i, j}; 
 
   
   int n=sizeof(arr)/sizeof(arr[0]);
   int sep[sizeof(arr)/sizeof(0)];
   
   for (int i=0; i<n; i++) {
       
       if (arr[i]%2==0) { 
       sep[counter] = arr[i];
        counter++;
       }
   }
    for (i=0; i<10; i++) {
        cout << sep[i] << endl;
    }
   return 0; 
}
   
