# Merge Intevals
O(N^2) Time Solution
Brute force.
* sort the intervals by start time.
* for every interval i, check if it overlaps with any interval j.
* if it does, merge the two intervals.
* if it doesn't, add it to the result.
O(NlogN) Time O(N) Space Solution
* Check for invalid case.
* Sort the intervals by start time.
* Take first pair of interval in nextInterval.
* Iterate over intervals and check if currInterval[0]<=nextInterval[1].
* if they overlap, then change nextInterval pair to max(nextInterval[1],currInterval[1]).
* else push nextInterval pair to result and change nextInterval pair to currInterval.

O(NlogN) Time O(1) Space Solution
* If we not consider the vector ans, which we have to return this problem can be solved without using nextInterval vector.
* We can simply use vector.back() and do the operations on it.
