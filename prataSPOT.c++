#include<iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool isPossible(vector<int> &rank, int p, int l, int mid) {
    int pratasCooked = 0;
    for (int i = 0; i < l; i++) {
        int time = rank[i];     //time taken for the first prata by the current cook
        int pratas = 0;         //pratas cooked by current cook
        int totalTime = 0;      //totalTime taken by current cook
        while (totalTime + time <= mid) {
            pratas++;        
            totalTime += time; 
            time += rank[i];   
        }
        pratasCooked += pratas; 
    }
    return pratasCooked >= p; 
}


int minTime(vector<int> &rank,int p,int l){
    int s=0;
    int rmaxi=0;
    for (int i = 0; i < rank.size(); i++)
    {
        rmaxi=max(rmaxi,rank[i]);
    }
    int e=rmaxi*(p*(p+1))/2;
    int mid = s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(isPossible(rank,p,l,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int p;
    cin>>p;
    int l;
    cin>>l;
    vector<int> rank(l);
    for (int i = 0; i < rank.size(); i++)
    {
        cin>>rank[i];
    }
    sort(rank.begin(),rank.end());
    int ans=minTime(rank,p,l);
    cout<<ans;
    return 0;
}