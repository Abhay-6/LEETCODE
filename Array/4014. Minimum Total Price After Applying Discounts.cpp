class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end());
        sort(discounts.begin(),discounts.end());
        int n=prices.size();
        int m=discounts.size();
        int k=min(n,m);
        double sum=0.0;

        for(int i=0;i<k;i++){
            sum+=prices[n-1-i]*(100-discounts[m-1-i])/100.0;
        }

        for(int i=0;i<n-k;i++){
            sum+=prices[i];
        }
       
        return sum;
    }
};
