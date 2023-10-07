
#include <iostream>
using namespace std; 

class Money {
    private: 
    int dollars; 
    int  cent; 

  public: 
    void set( const int d, const int c){ 
      dollars = d;
      cent = c; 
    }
    int getDollar () const {
      return dollars; 
    }
    int getCent () const  {
      return cent; 
    }
    double convertMoney(){
      return dollars + (cent/100);
    }
};
