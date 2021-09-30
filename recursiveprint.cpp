#include<iostream>
using namespace std;

int main(void) {
    int nums [] = {2,4,5,6,7,8,9,10,127,16,22,516,76};
    int i;
    int arrsize = *(&nums + 1)- nums;
    for(i = 0; i < arrsize; i++ ) {
        if (nums[i] % 2 == 0) {
            cout << nums[i] << ", ";
        }
    }
}