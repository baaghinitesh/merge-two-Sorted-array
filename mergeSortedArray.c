void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    
 int i = m - 1;  // Index of the last element in nums1
    int j = n - 1;  // Index of the last element in nums2
    int k = m + n - 1;  // Index of the last position in the merged array

    while (i >= 0 && j >= 0) {
        if (nums1[i] >= nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    // If there are remaining elements in nums2, copy them to nums1
    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}