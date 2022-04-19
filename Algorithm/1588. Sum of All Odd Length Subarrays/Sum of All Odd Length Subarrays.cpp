class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans = 0, length = arr.size();
        for(int i=0;i<length;++i){
            ans += ((i + 1) * (length - i) + 1) / 2 * arr[i];
        }
        return ans;
    }
};
/**
 * Sum of All Odd Length Subarrays
    Sum of All Odd Length Subarrays = ( Sum of All Length Subarrays ) / 2 
    那麼問題就剩怎麼算Sum of All Length Subarrays了
    ## Sum of All Length Subarrays
    現假設有個array：arr=[0,1,2,3,4,5,6]

    當我們選擇某個index時，我們可以透過下列的方法得知包含有該index的subarray個數：
        假設選擇index=2，arr[2]=2。
        那麼在arr[2]之前的元素(包含自己)總共有arr[0]、arr[1]、arr[2]，共3個
        而在arr[2]之後的元素(包含自己)總共有arr[2]、arr[3]、...、arr[6]，共5個
        在前面3個中任選1個，後面5個中任選1個，都能湊成包含有arr[2]的subarray
        因此包含有arr[2]的subarray總共有35=15個

    一般化：
    `# of subarray of an element = (i+1)*(n-i)`
 * 
 */