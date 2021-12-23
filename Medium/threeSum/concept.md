Pretty hard question!<br/>
Looks similar to 2sum with an extra loop but this takes in duplicates values as well.
To handle this situation -

- Sort the array.
- Use 2sumTwo concept with an extra loop.
- In extra loop, only loop through the non duplicates values (nums[i] != nums[i-1])
- Within the 2sumtwo concept, if i and j find a value: Loop through the list again to find value which isn't equal to previous nums[i].
- Similarly for j.
- Otherwise, in equation x+y+z = 0, if x and y are known, z can take multiple values/duplicate values if present in array.

Later steps in code -

```cpp
while (i + 1 < nums.size() && nums[i] == nums[i + 1]) {
    i++;
}

while (j - 1 >= 0 && nums[j] == nums[j - 1]) {
    j--;
}

i++;
j--;
```
