class Solution {
  public:
    long long maxDiamonds(int A[], int N, int K) {
        // code here
        priority_queue<int> pq;
        
        for(int i=0;i<N;i++)
        {
            pq.push(A[i]);
        }
        long long ans=0;
        while(K--)
        {
           long long op=ceil(pq.top())/2;
           ans+=pq.top();
           pq.pop();
           pq.push(op);
            
        }
        
        return ans;

    }
};
