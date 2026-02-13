int searchInsert(int *nums, int numsSize, int target)
{
    int middle_index = numsSize / 2;
    int start_index = 0;
    int end_index = numsSize - 1;

    while (start_index <= end_index)
    {
        middle_index = (start_index + (end_index - start_index)) / 2;
        if (nums[middle_index] > target)
        {
            end_index = middle_index - 1;
        }
        else if (nums[middle_index] < target)
        {
            start_index = middle_index + 1;
        }
    }

    if (nums[middle_index] == target)
        return middle_index;
    return -1;
}