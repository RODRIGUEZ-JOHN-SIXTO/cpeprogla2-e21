#include<iostream>
#include <fstream>
#include<math.h>
using namespace std;

int main(){
    ifstream f("input.txt");
    int hashmat, opponent;
    while (f >> hashmat >> opponent) {
          cout << abs(hashmat-opponent)<<" \n";      
		  }
    system("pause");
    return 0;
}
