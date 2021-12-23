Applied a simple way to calculate the length of LL and then loop to previous node of actual node for the deletion process.

Better (one pass) way is to maintain 2 pointers {i,j}.

- Keep j ahead of i by n+1 gaps.
- Loop till j reaches the end of LL.
- At that point i is at the previous node of actual node.
