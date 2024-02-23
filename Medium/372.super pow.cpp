//the basic approach is to short down the power 
class Solution {
public:
    int superPow(int a, vector<int>& b) {
        //a^254 is splited to (a^2)^10=a^20 then (a^20)*(a^5)^10=a^250....
      
        if (a == 0 || a == 1) return a; // Handling special cases
        
        int result = 1;
        for (int i = 0; i < b.size(); i++) {
            result = powmod(result, 10) * powmod(a, b[i]) % 1337; //the powerfn is divided for every element of b
        }
        return result;
    }

private:
    int powmod(int base, int exp) {
      // this fn returns the a^b %1337 
        base %= 1337;
        int result = 1;
        while (exp > 0) {
            if (exp & 1) {
                result = (result * base) % 1337;
            }
            base = (base * base) % 1337;
            exp >>= 1;
        }
        return result;
    }
};

