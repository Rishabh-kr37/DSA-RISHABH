#include <iostream>
using namespace std;
int findDuplicate(int nums[])
{

    int slow = nums[0];
    int fast = nums[0];

    do
    {

        slow = nums[slow];
        fast = nums[nums[fast]];

    } while (slow != fast);

    fast = nums[0];
    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}

int main()
{

    int nums[] = {1, 3, 4, 3, 2};

    cout << "duplicate number is " << findDuplicate(nums) << endl;

    return 0;
}
