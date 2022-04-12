class Solution {
public:
    double average(vector<int>& salary) {
        int min=9999999, max=-1, sum=0, length=salary.size();
        for(int i=0;i<length;++i){
            if(salary[i]>max)max=salary[i];
            if(salary[i]<min)min=salary[i];
            sum+=salary[i];
        }
        return ((double)(sum-(min+max))/(double)((length-2)));
    }
};