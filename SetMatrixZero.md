# Set Matrix Zero
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's, and return the matrix.You must do it in place.

*We traverse the whole array and if the element is 0, we set the corresponding row and column vector index to 0.
*For the first col there is one special case, if we set first col to 0 so the row will unnecessarily have 0's in them.
*to tackle this case we take col variable and set it true initially. while traversing the array if we got any 0 in first column so we change col = false.
*Now we traverse from bottom-right to top-left and if we found 0 in any marker vector we set current element to 0.
*for the first column, if col==false we set it to 0.

Time complexity:  O(N*M)
Space complexity: O(1)v
