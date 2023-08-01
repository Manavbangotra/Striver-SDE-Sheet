//gfg
class Solution {
public:
    bool weCanPlace(vector<int> &stalls, int dist,int cows) {
    // place the cow at the first position
        int cntcows=1,last=stalls[0];
        for(int i=1;i<stalls.size();i++){
            if(stalls[i]-last>=dist){
                cntcows++;
                last=stalls[i];
            }
            if(cntcows>=cows) return true;
        }
    }   
    int solve(int n, int k, vector<int> &stalls) {
    
        sort(stalls.begin(),stalls.end());
        int low=1;
        int high=stalls[n-1]-stalls[0];
        while(low<=high){
            int mid=(low+high)/2;
            if(weCanPlace(stalls,mid,k)==true){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return high;
    }
};
