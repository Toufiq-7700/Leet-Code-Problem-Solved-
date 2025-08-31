class Solution {
public:

    double poww(double x, int n){
        if(n == 0) return 1;

        double temp = poww(x,n/2);

        if(n%2 == 0) return temp*temp;
        else return (temp*temp*x); 
    }
    double powww(double x, int n){
        if(n == 0) return 1;

        long long exp = -(long long)n;

        double temp = poww(x,exp/2);
    
        if(exp%2 == 0) return (1.0/(temp*temp));
        else return (1.0/(temp*temp*x));
    }
    
    double myPow(double x, int n) {
        if(n>=0)return(poww(x,n));
        else return powww(x,n);
    }
};
