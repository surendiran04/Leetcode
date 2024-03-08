class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i=0;
        while(i<bits.size()-1){
            i=i+1+bits[i];
        };
        return i!=bits.size();
    }
};
//another soln
public class Solution {
    public bool IsOneBitCharacter(int[] bits) {
        int i = 0;
        while(i < bits.Length-1)
        {
            if(bits[i] == 1) //if 1 increment the index by 2 ,we don't need to see the next index as it can form 11,10
            {
                i++;
            }
            i++; //if 0 increment by 1
        }
        return i == bits.Length-1;
    }
}
