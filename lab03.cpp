
#include <iostream>
#include <string>

#include "swap.h"

using namespace std;
int main () {
    int a = 1, b = 2;
    double x = 1.0 , y = b;
    char c = 'c';
    char d = 'd';
    string s = "ball" , t = "balls";

   cout<< swap (a,b)<<endl; 
    swap (x, y);
    swap (s , t);
    swap (c , d);

    return 0;
}
