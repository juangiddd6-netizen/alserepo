#include <string>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        string x_str = to_string(x);
        int ptr1 = 0;
        int ptr2 = x_str.size() - 1;

        while (ptr1 <= ptr2)
        {
            if (x_str[ptr1] != x_str[ptr2])
            {
                return false;
            }
            ptr1++;
            ptr2--;
        }
        return true;
    }
};