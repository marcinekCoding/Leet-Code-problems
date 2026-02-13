#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//link do leetcode : 
// https://leetcode.com/problems/search-insert-position/description/

int searchInsert(int *nums, int numsSize, int target)
{
    int middle_index = numsSize / 2;
    int start_index = 0;
    int end_index = numsSize - 1;

    while (start_index <= end_index)
    {
        middle_index = start_index + (end_index - start_index) / 2;
        if (nums[middle_index] > target)
        {
            end_index = middle_index - 1;
        }
        else if (nums[middle_index] < target)
        {
            start_index = middle_index + 1;
        }else
        {
            return middle_index;
        }
    }

    return start_index;
}
int main()
{
    // ALGORYTM DZIEL I usuwaj

    int nums[] = {3, 4, 5, 7, 8};
    printf("%d", searchInsert(nums, 5, 4));

    return 0;
}