#include <iostream>
using namespace std;

int main() {
    int num[5] = {3, 5, 2, 4, 1};
    int k = 0;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 4; j++) {
            if(num[j] > num[j+1]) {
                k = num[j];
                num[j] = num[j+1];
                num[j+1] = k;  
            }
        }
    }

    for(int i = 0; i < 5; i++) {
        cout << num[i];
    }
}