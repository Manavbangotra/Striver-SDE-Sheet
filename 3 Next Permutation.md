# ALGORITHM:-
* From end find the largest index k such that nums[k] < nums[k + 1]. If no such index exists, just reverse nums and done.
* From end find the largest index l > k such that nums[k] < nums[l].
* Swap nums[k] and nums[l].
* Reverse the sub-array nums[(k + 1):end].

# Inbuilt next_permutation function
* we can also solve the problem in-place using in-built * * next_permutation(a.being(),a.end()) function in c++.<br>
* But in an interview this is not expected
