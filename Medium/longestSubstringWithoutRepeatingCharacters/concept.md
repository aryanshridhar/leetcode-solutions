Typical sliding window algorithm to start with 2 pointers {i,j}. Loop j till it reaches end and maintain a hasmap for counting unique characters.<br/>
Length of substring - j-1+1
Once condition is met, start removing elements from left side aka increment i pointer till length of substring is greater than size of hashmap.
