
#include <iostream> 
using namespace std; 

double converttoMPH (int min, int sec) {
  double timeHours = (min + sec/60) / 60 ; 
    return 1/timeHours; 
}

double converttoMPH (double kph){
    return kph / 1.61; 
}
int main () {
  int min,sec; 

  cout<< "How fast are you going: "; 
  cin>>min >>sec; 

  cout<<converttoMPH(min,sec)<<endl; 

  int kph; 

  cout<<"How many kph are you going: ";
  cin>>kph;

  cout<<converttoMPH(kph);

  return 0;

}
