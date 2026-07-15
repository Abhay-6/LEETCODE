class Solution {
    public int gcd(int a,int b){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
    public int gcdOfOddEvenSums(int n) {
        int evensum=0;
        int oddsum=0;
        for(int i=0;i<n;i++){
            oddsum+=2*i+1;
        }
        System.out.print(oddsum);
        for(int i=1;i<=n;i++){
            evensum+=2*i;
        }
        return gcd(oddsum,evensum);
    }
}
