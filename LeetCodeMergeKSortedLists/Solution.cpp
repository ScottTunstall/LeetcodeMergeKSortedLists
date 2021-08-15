#include "Solution.h"
#include "ListNode.h"
#include <algorithm>


ListNode* Solution::mergeKLists(vector<ListNode*>& lists)
{
	vector<int> allNumbers;
	for (auto& list : lists)
	{
		vector<int> numbersFromList = GetNumbersFromList(list);
		allNumbers.insert(allNumbers.end(), numbersFromList.begin(), numbersFromList.end());
	}

	sort(allNumbers.begin(), allNumbers.end());

	return ConvertToLinkedList(allNumbers);
}

vector<int> Solution::GetNumbersFromList(ListNode* list)
{
	vector<int> toBeReturned;
	ListNode* pCurrent = list;

	while (pCurrent != nullptr)
	{
		toBeReturned.push_back(pCurrent->val);
		pCurrent = pCurrent->next;
	}

	return toBeReturned;
}

ListNode* Solution::ConvertToLinkedList(vector<int>& sortedVector)
{
	ListNode* pHead = nullptr;
	ListNode* pLast = nullptr;
	ListNode* pCurrent;

	for (auto& number : sortedVector)
	{
		pCurrent = new ListNode(number);
		if (pHead == nullptr) 
			pHead = pCurrent;

		if (pLast != nullptr)
			pLast->next = pCurrent;

		pLast = pCurrent;
	}

	return pHead;
}
