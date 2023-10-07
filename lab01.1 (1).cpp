
#include <iostream>
#include <cstdlib> 
using namespace std;
int main() { 
  int x; 
  cout<<"Enter a seed: "; 
  cin>>x; 
  srand (x);
  for (int i = 0; i < 10; i++){
    cout<<(double) rand ()/RAND_MAX<<" "; 
    // RAND MAX is just a big number that you divide thr random seed numbers by to get the decimals number between 0 to 1.0// 
  
  }
  return 0; 

}

 