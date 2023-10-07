
#include <iostream> 
#include <string>
#include <cstring> 
using namespace std;

void swap (char *p , char *j){
  char temp = *j; 
  *p = *j; 
  *j = temp; 
}

int main () {
  char x[100]; 
  
  cout<<"Enter a name: "<<endl; 
  cin>>x; 
  int size = strlen(x);
  char* head = &x[0];
  char* tail = &x[size-1];

  for (int i = 0; i < size/2; i++){
    swap(head,tail); 
    head = &x[i + 1]; 
    tail = &x[size - 1 - i] ; 
  }
}
