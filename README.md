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

I thought of other ways such as comparing each head of each list and inserting min value of all lists, might try that next commit.

As usual, use this for learning, not to cheat on leetcode tests.
