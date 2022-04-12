class Solution {
public:
    int countOdds(int low, int high) {
        int count = (high-low+1)/2;
        count+=((high-low+1)%2==1 && high%2==1)?1:0;
        return count;
    }
};

class FasterSolution {
public:
    int countOdds(int low, int high) {
        int count = (high-low+1)/2;
        count+=(high%2==1 && low%2==1)?1:0;
        return count;
    }
};

class lessSpaceSolution {
public:
    int countOdds(int low, int high) {
        return ((high-low+1)/2)+((high%2==1 && low%2==1)?1:0);
    }
};