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
//keshavgg
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*temp=new ListNode(-1);
        ListNode*head=temp;
        int c=0;
       while(l1!=NULL or l2!=NULL)
       {
                   int s1=0;
                   int s2=0;
                   if(l1!=NULL){s1=(*l1).val;}
                   if(l2!=NULL){s2=(*l2).val;}
            int sum=s1+s2+c;

            if(sum>=10){c=1;}
            else
            {c=0;}
              ListNode*tem=new ListNode(sum%10);
              (*temp).next=tem;
              temp=tem;
            if(l1!=NULL)  l1=(*l1).next;
             if(l2!=NULL) l2=(*l2).next;
              }
              if(c==1)
              {ListNode*tem=new ListNode(c);
                 (*temp).next=tem;        }
return (*head).next;



    }
};