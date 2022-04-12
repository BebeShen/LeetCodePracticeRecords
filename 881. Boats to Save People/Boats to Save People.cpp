#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int boats = 0;
        int minWeight = 0;
        int maxWeight = people.size()-1;
        while(minWeight <= maxWeight){
            if(people[minWeight]+people[maxWeight]<=limit){
                ++minWeight;
            }
            --maxWeight;
            ++boats;
        }
        return boats;
    }
};
int main(){
	
	return 0;
}
