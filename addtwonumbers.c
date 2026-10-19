struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int carry = 0;
    struct ListNode *head = NULL;

    while (l1 != NULL || l2 != NULL || carry != 0) {
        struct ListNode *temp = head;
        struct ListNode *newnode = malloc(sizeof(struct ListNode));

        int sum = carry;

        if (l1 != NULL) {
            sum += l1->val;
            l1 = l1->next;
        }

        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next;
        }

        newnode->val = sum % 10;
        carry = sum / 10;
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
        } else {
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }

    return head;
}