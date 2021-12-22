<strong>2 pointer approach.</strong>

Initialize 2 pointers to the array, one at the beginning and other at the end.<br/>
In order to fetch the maximum area, shift the pointer to the next values according to the current value.
<br/>
2 pointers - a and b. Loop until the 2 pointers eventually converge.<br/>
If a > b --> to maximize area, shift the b pointer to the left.
If b > a --> to maximize area, shift the a pointer to the right.
If a == b --> shift any pointer, doesn't matter.
