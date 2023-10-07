
#include <iostream>
#include <fstream>
using namespace std;

void copyline(ifstream& In_file , ofstream& Out_file) {
    string word;
    if (getline(In_file, word)){
        Out_file <<word<<endl;
    }
}
int main () {
    ifstream fin("stuff.txt");
    ofstream fout("stuff_copy.txt");

    while (!fin.eof()) {
        copyline(fin, fout);
    }
  
return 0;
}
