/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *idx = (int *)malloc(2 * sizeof(int));
    if (idx == NULL) {
        printf("memory allocation failed...\n");
        return NULL;
    }
    for (int i = 0; i < numsSize; i++) {
        for (int j = i+1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                idx[0] = i;
                idx[1]= j;
                *returnSize = 2;
                return idx;
            }
        }
    }
    free(idx);
    return NULL;
}
