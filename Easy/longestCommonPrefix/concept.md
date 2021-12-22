n*m (size_of_array * length_of_string) based approach to check every consecutive string in array and for them, traverse the loop using 2 pointer approach to get the length of longest common prefix.
Once the length is found, return any string.substr(length)

Other way could be to sort the array (nlongn\*m) and find only LCP for first and last element in array (since they are mutually distinct in terms of alphabet can yield diff results)
