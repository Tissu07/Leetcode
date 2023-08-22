#include <bits/stdc++.h>
using namespace std;


void merge(vector<int> &nums, int start, int mid, int end)
{
    vector<int> temp;
    int left = start;
    int right = mid + 1;

    while (left <= mid && right <= end)
    {
        if (nums[left] <= nums[right])
        {
            temp.push_back(nums[left]);
            left++;
        }
        else
        {
            temp.push_back(nums[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(nums[left]);
        left++;
    }
    while (right <= end)
    {
        temp.push_back(nums[right]);
        right++;
    }

    for (int i = start; i <= end; i++)
    {
        nums[i] = temp[i - start];
    }
}

void ms(vector<int> &nums, int start, int end)
{
    if (start >= end)
        return;

    int mid = (start + end) / 2;
    ms(nums, start, mid);
    ms(nums, mid + 1, end);
    merge(nums, start, mid, end);
}

int main()
{
    vector<int> nums = {4, 7, 1, 5, 0};
    ms(nums, 0, nums.size() - 1);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}



