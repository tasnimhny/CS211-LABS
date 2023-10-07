#include <iostream>
using namespace std; 
int main () {
  char letterbox [10]; 
  cout<<"Enter 10 letters: "<<endl; 
  for (int i = 0; i < 10; i++) {
   cin>>letterbox [i];
    if (letterbox[i] == '.') break;
    }
  
  for (int k = 9; k >= 0; k--){
    if(letterbox [k] >= 'a' && letterbox [k] <= 'z')
    cout<<letterbox[k];
  }
  return 0;
}

  