/*
You are given an integer array nums of length n.

Construct an array prefixGcd where for each index i:

Let mxi = max(nums[0], nums[1], ..., nums[i]).
prefixGcd[i] = gcd(nums[i], mxi).
After constructing prefixGcd:

Sort prefixGcd in non-decreasing order.
Form pairs by taking the smallest unpaired element and the largest unpaired element.
Repeat this process until no more pairs can be formed.
For each formed pair, compute the gcd of the two elements.
If n is odd, the middle element in the prefixGcd array remains unpaired and should be ignored.
Return an integer denoting the sum of the GCD values of all formed pairs.

The term gcd(a, b) denotes the greatest common divisor of a and b.

*/
class Solution {
public:
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefixgcd(n);
        int mx=0;
        for(int i=0;i<n;i++){
            mx=max(mx,nums[i]);
            prefixgcd[i]=gcd(mx,nums[i]);
        }
        sort(prefixgcd.begin(),prefixgcd.end());
    int l=0;
    int r=n-1;
    long long s=0;
    while(l<r){
s+=gcd(prefixgcd[l],prefixgcd[r]);
l++;
r--;
    }
    return s;
    }
};
