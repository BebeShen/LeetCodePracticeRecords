#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
       return is_sorted_until(A.begin(),A.end())-A.begin()-1;
    }
};

