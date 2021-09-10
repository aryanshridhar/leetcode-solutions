#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Solution {
public:

    // O(logn)
    int reverse_num(int num){
        if(num < 0){
            return -1;
        }
        
        long long int reverse = 0;
        
        while(num != 0){
            long long int remainder = num%10;
            reverse = reverse*10 + remainder;
            num = num/10;
        }
        
        return reverse;
    }
    bool isPalindrome(int x) {
        long long int rev_num = reverse_num(x);
        if(rev_num == -1){
            return false;
        }
        if(rev_num == x){
            return true;
        }
        return false;
    }
};