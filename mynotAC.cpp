class Solution {
private:
    int help(vector<int>& coins,int amount,int sum,int n,int res)
    {
        if(sum==amount)
            return res;
        
        for(int i=n-1;i>=0;i--)
        {
            if(sum+coins[i]<=amount)
            {
                res++;
                help(coins,amount,sum+coins[i],n,res);
            }
        }
     
        return res;
    }
    
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        if(n==0)
            return -1;
        
        int res=0;
        sort(coins.begin(),coins.end());
        int sum=0;
        
        return help(coins,amount,sum,n,res);
        
    }
};
