# LeetcodeMergeKSortedLists

My solution for the Merge K Sorted Lists problem (HARD difficulty): https://leetcode.com/problems/merge-k-sorted-lists/ .

Hard? It was a doddle!

I thought I'd tackle this one in C++ just for a change.  

I'm pleasantly surprised to see that C++ isn't the absolute catastrophe it used to be 20 years ago. I've fell in love with it again :)

For first attempt:

Runtime: 24 ms, faster than 61.63% of C++ online submissions for Merge k Sorted Lists.
Memory Usage: 14.9 MB, less than 8.08% of C++ online submissions for Merge k Sorted Lists.

Second attempt I used list<> and multiset<> but they were actually slower than the first approach.
So much for optimisation.

I have tried other ways such as comparing each head of each list and inserting min value of all lists - timed out though. See "IAlsoTried.txt" in the repo.
Probably to do with the amount of new() calls which are expensive. I should maybe tamper with the ListNodes in the vector parameter directly and set their next* instead of creating new instances.

As usual, use the code for learning, not to cheat on leetcode tests.
