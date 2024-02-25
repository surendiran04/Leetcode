#include <bits/stdc++.h>
using namespace std;
    void sequentialDigits(int low, int high) {
        if (low>123456789) return {};//edge case
        int i=0, inc=1, seq=1;
        vector<int> A(36, 0);
        for(int d=2; d<=9; d++){
            inc=10*inc+1; //incremental unit 11,111,1111,
            seq=10*seq+d; it is the 1st starting sequence 12,123,1234,....
            cout<<"\ninc="<<inc<<endl;
            A[i++]=seq;
            cout<<A[i-1]<<endl;
            for(int j=1; j<=9-d; j++){ //j<=9-d sequence gets reduced by 1 in every incremental step
                A[i]=A[i-1]+inc;
                cout<<A[i]<<endl;
                i++;
            }
        }
        int s=lower_bound(A.begin(), A.end(), low)-A.begin(); //starting index (low)
        int t=upper_bound(A.begin()+s, A.end(), high)-A.begin(); //ending+1 index (high)
        cout<<s<<" "<<t;
       
    }
int main() {
    int high=13000;
    int low=1000;
    sequentialDigits(low,high);
    return 0;
}
