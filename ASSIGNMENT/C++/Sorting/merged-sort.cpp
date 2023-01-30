/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head=new ListNode();
        ListNode *ptr3=head;
        while(list1!=NULL &&list2!= NULL){
        if(list1->val<=list2->val){
            ptr3->next=list1;
            list1=list1->next;
        }
        else{
            ptr3->next=list2;
            list2=list2->next;
        }
        ptr3=ptr3->next;
        }
        while(list1!=0){
            ptr3->next=list1;
            list1=list1->next;
            ptr3=ptr3->next;
        }
         while(list2!=0){
            ptr3->next=list2;
            list2=list2->next;
            ptr3=ptr3->next;
        }
        return head->next;
    }
    };
