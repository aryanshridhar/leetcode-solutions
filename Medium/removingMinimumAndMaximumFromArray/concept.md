There can only be 3 cases which are -

- Removing elements from left
- Removing elements from right
- Removing elements from both side of array

Considering case by case -

**CASE-1: Removing elements from left**

In this approach, we only remove elements from the left (start) of the array till we reach the value with **higher** index. That is -

```
 max(mini,maxi)+1,
```

where mini and maxi are the **indices** of minimum element and maximum element respectively.

**CASE-1: Removing elements from right**

In this approach, we only remove elements from the right (end) of the array till we reach the value with **lower** index. That is -

```
nums.size()-min(mini,maxi);
```

where mini and maxi are the **indices** of minimum element and maximum element respectively.

**CASE-3: Removing elements from both side of array**

Here, we remove the elements from both side. Hence -

- From left, we will search the element with lower index value.
- From right, we will search the element with higher index value.

Therefore -

```
min(mini,maxi) + 1 + (nums.size()-max(mini,maxi));
```

(Similar to what I wrote above with min and max functions swapped).

**Finally,** we will take the minimum of all these cases.

C++:

```
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini = min_element(nums.begin(),nums.end()) - nums.begin();
        int maxi = max_element(nums.begin(),nums.end()) - nums.begin();

        int removing_from_left = max(mini,maxi)+1;
        int removing_from_right = nums.size()-min(mini,maxi);
        int removing_from_both = min(mini,maxi) + 1 + (nums.size()-max(mini,maxi));

        return min(removing_from_left,min(removing_from_right,removing_from_both));
    }
};
```

That's it :)
It's my first time writing an long answer, do upvote if found useful LOL!
