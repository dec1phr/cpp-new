#include <iostream>
using namespace std;
int main(){
    int x;
    std::cin >> x;
    for (int i = 1; i <= x; i++){
            for(int j = 1; j <= x; j++){
                cout << "x ";
            }
            cout << endl;
        }
}