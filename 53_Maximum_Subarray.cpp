class Solution {
public:

int cross(vector<int>& arr, int low, int mid, int high){
    int leftsum=INT_MIN, rightsum=INT_MIN;
    int temp = 0;
    for(int i=mid; i>=low; i--){
        temp+=arr[i];
        if(leftsum < temp){
            leftsum = temp;
        }
    }
    temp=0;
    for(int i=mid+1; i<=high; i++){
        temp += arr[i];
        if(rightsum < temp){
            rightsum = temp;
        }
    }
    return leftsum+rightsum;
}

int helper(vector<int> &arr, int low, int high){
    if(low == high){
        return arr[low];
    }
    if (low == high - 1) {
    return max({arr[low], arr[high], arr[low] + arr[high]});
}

    int mid = (low+high) / 2;
    int left = helper(arr,low,mid);
    int right = helper(arr,mid+1,high);
    int crs = cross(arr,low,mid,high);

    // if(left > right && left > crs) return left;
    // if(right > left && right > crs) return right;
    // else return crs;
    return max({left, right, crs});

}
    int maxSubArray(vector<int>& nums) {
        if(nums.size() ==0) return 0;
        
        return (helper(nums,0,nums.size()-1));
    }
};
