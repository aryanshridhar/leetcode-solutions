The trick here is that is doesn't matter which path we take.<br>
Because at the end of the day we have to travel (end_row-start_row + end_col-start_col) steps.<br>
It only matter if there are cost in every cell. Then we have to take the optimal path from start to end.<br>
But in this case, traversing col and row is constant and independent of the <strong>optimal</strong> path we take.

Think of it like -

1 path-

- Traverse 3 columns, then 1 row

2 path-

- Traverse 1 row and then 3 columns.

In both of htese case, the optimal path will be same.
