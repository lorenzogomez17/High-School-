#include <iostream>
using namespace std;


int main() {
   int a, b, c, d, e, f, g, h, i, j = 0;
   cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j; 
   cout << "Even Numbers:" << endl ;
  
   int array[10] = {a, b, c, d, e, f, g, h, i, j}; 
   
   int n=sizeof(array)/sizeof(array[0]);
   
   for (int i=0; i<n; i++) {
       
       if (array[i]%2==0) { 

           cout << array[i] <<endl;
        }
   } 
   return 0; 
}
   
