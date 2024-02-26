#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &arr, int n, int k, int mid) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > mid) {
            sum += (arr[i] - mid);
        }
        if (sum >= k) {
            return true;
        }
    }
    return false;
}

int maxCut(vector<int> &arr, int n, int k) {
    int s = 0;
    int maxi = 0;
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, arr[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e) {
        if (isPossible(arr, n, k, mid)) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main() {
    int n; 
    cin >> n;
    int k; 
    cin >> k;
    vector<int> arr(n); 
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int ans = maxCut(arr, n, k);
    cout << ans;
    return 0;
}