// https://www.youtube.com/watch?v=pVxyV_fjg_Y&ab_channel=CodewithSky
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        // result vector
        
        vector<int>result;
        
        // priority max heap.
        priority_queue<pair<int,int>> pq;
        
        for(auto i:arr){
            
            // push pair into heap
            pq.push({abs(i-x),i});
        }
        for(auto i:arr){
            if(pq.size()>k){
                pq.pop();
            }
        }
        
        while(!pq.empty()){
            result.push_back(pq.top().second);
            pq.pop();
        }
        
        sort(result.begin(),result.end());
        
        return result;
        
        
        
    }
};