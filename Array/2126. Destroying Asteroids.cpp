class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        int n=asteroids.size();
        long long mas=(long long)(mass);
        sort(asteroids.begin(),asteroids.end());
        for(long long int i=0;i<n;i++){
            if(mas<asteroids[i]){
                return false;
            }
            mas+=(long long)(asteroids[i]);
        }
        return true;
    }
};
