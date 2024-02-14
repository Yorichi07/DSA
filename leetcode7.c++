//peek index in an mountain array
// Input: arr = [0,10,5,2]
// Output: 1 (i.e 10 at 1st index)

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=0;
        int end=arr.size()-1;
        int mid= start + (end-start)/2;

        while(start<end){       //if we do start<=end then for start=end loop wont end it will keep on executing if-else
            if(arr[mid]<arr[mid+1]){
                start=mid+1;
            }
            else{
                end=mid;        //if we write here end=mid-1 then we wont get peak element as we will reach 1 position before it
            }
            mid= start + (end-start)/2;
        }
        return mid;
    }
};