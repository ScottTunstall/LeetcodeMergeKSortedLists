#pragma once

#include "ListNode.h"
#include <vector>

using namespace std;

class Solution {

public:
	ListNode* mergeKLists(vector<ListNode*>& lists);

private:
	vector<int> GetNumbersFromList(ListNode* list);
	ListNode* ConvertToLinkedList(vector<int>& sortedVector);
};
