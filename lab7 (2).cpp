
#include <iostream> 
using namespace std;

void swap (int *u , int *w){
  int temp = *u; 
  *u = *w; 
  *w = temp; 
}
int main() {
int first = 3, second = 2;
int* p1 = &first;  
int* p2 = &second;

cout<< *p1 <<" "<<*p2<<endl; 

swap(p1, p2); 
  
cout << *p1 <<" "<< *p2; 

  return 0; 
  
}
