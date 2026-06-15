#include <iostream>
#include <algorithm>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int z)
    {
        val = z;
        next = NULL;
    }
};
class Reverse_List
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev = NULL;
        ListNode *current = head;
        ListNode *next = NULL;

        while (current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        return prev;
    }
};
int main()
{
    ListNode *head = new ListNode(1);
    ListNode *second = new ListNode(2);
    ListNode *third = new ListNode(3);
    ListNode *fourth = new ListNode(4);
    ListNode *fifth = new ListNode(5);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    Reverse_List obj;
    ListNode *reversedHead = obj.reverseList(head);
    ListNode *current = reversedHead;
    while (current != NULL)
    {
        cout << current->val << " ";
        current = current->next;
    }
}
