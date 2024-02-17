
#include <bits/stdc++.h>

#define lli long long int
#define ld long double
#define line '\n'
#define DEBUG false

using namespace std;

int main() {
    vector<int> nums1 = {1,2,4,5,6,0};
    int m = 5;
    vector<int> nums2 = {3};
    int n = 1;

    vector<int> numsaux;

    int nums1idx = 0, nums2idx = 0;
    int nums1aux = nums1[nums1idx];
    if (n > 0) {
        int nums2aux = nums2[nums2idx];

        for (int u = 0; u < m+n; ++u) {
            if (nums1idx == m) {
                numsaux.push_back(nums2aux);
                nums2idx++;
                if (nums2idx < n)
                    nums2aux = nums2[nums2idx];
            } else if (nums2idx == n) {
                numsaux.push_back(nums1aux);
                nums1idx++;
                if (nums1idx < m)
                    nums1aux = nums1[nums1idx];
            }
            else if (nums1aux < nums2aux){
                numsaux.push_back(nums1aux);
                nums1idx++;
                if (nums1idx < m)
                    nums1aux = nums1[nums1idx];
            } else if (nums2aux < nums1aux and nums2idx < n) {
                numsaux.push_back(nums2aux);
                nums2idx++;
                if (nums2idx < n)
                    nums2aux = nums2[nums2idx];
            } else if (nums2aux == nums1aux) {
                numsaux.push_back(nums2aux);
                nums2idx++;
                if (nums2idx < n)
                    nums2aux = nums2[nums2idx];
            }
        }


        nums1 = numsaux;
    }
    for (auto n:nums1){
        cout << n << " ";
    }

}