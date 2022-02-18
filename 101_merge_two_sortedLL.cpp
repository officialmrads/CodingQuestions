struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *merge(ListNode *a, ListNode *b)
{
    if (a == nullptr)
        return b;
    if (b == nullptr)
        return a;

    ListNode *ans;
    if (a->val < b->val)
    {
        ans = a;
        ans->next = merge(ans->next, b);
    }

    else
    {
        ans = b;
        ans->next = merge(ans->next, a);
    }

    ans->next = nullptr;
    return ans;
}