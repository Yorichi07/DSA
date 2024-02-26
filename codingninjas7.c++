// You are given an array 'arr' consisting of 'n' integers which denote the position of a stall.
// You are also given an integer 'k' which denotes the number of aggressive cows.
// You are given the task of assigning stalls to 'k' cows such that the minimum distance between any two of them is the maximum possible.
// Print the maximum possible minimum distance.
// Example:
// Input: 'n' = 3, 'k' = 2 and 'arr' = {1, 2, 3}
// Output: 2
// Explanation: The maximum possible minimum distance will be 2 when 2 cows are placed at positions {1, 3}. Here distance between cows is 2.

bool isPossible(vector<int> &stalls, int k, int mid){
    int cowCount=1;
    int lastPos=stalls[0];

    for(int i=0;i<stalls.size();i++){
        if(stalls[i]-lastPos>=mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            lastPos=stalls[i];
        }
    }return false;

}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());      

    int s=0;
    int maxi=-1;
    for(int i=0;i<stalls.size();i++){
        maxi=max(maxi,stalls[i]);
    }
    int e=maxi;
    int mid=s + (e-s)/2;
    int ans=-1;

    while(s<=e){
        if(isPossible(stalls,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s + (e-s)/2;
    }
    return ans;
}