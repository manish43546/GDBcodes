class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int s = 0;
        int e = arr.size() - 1;
        int ans = -1;

        while (s <= e) {

            int mid = s + (e - s) / 2;

            if (arr[mid] < arr[mid + 1]) {
                // Increasing side → right jao
                s = mid + 1;
            }
            else {
                // Possible peak mil gaya
                ans = mid;
                e = mid - 1;
            }
        }

        return ans;
    }
};