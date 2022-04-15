class Solution {
public:
    int next(int n){
        int sum=0;
        while(n>0){
            sum+=(n%10)*(n%10);
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        while(n!=1&&n!=4){
            n=next(n);
        }
        return n == 1;
    }
};

// Floyd's Cycle-Finding Algorithm
class RunSolution {
public:
    int next(int n){
        int sum=0;
        while(n>0){
            int d = n%10;
            sum+=d*d;
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int sRun = n;
        int fRun = next(n);
        while(fRun!=1 && sRun!=fRun){
            sRun = next(sRun);
            fRun = next(next(fRun));
        }
        return fRun == 1;
    }
};