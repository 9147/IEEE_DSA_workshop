#include <stdio.h>

//   Definition for singly-linked list.
  struct ListNode {
      int val;
      struct ListNode *next;
  };
 
 
 struct ListNode* createNode(int val){
    struct ListNode* p=0;
    p=(struct ListNode*) malloc(sizeof(struct ListNode));
    if(p!=0){
        p->next=0;
        p->val=val;
    }
    return p;
}

struct ListNode* addNode(struct ListNode **root,struct ListNode *i, int val){
    struct ListNode *p=createNode(val);
    if(!i){
        *root=p;
        return p;
    }
    i->next=p;
    return p;
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    int rem=0;
    struct ListNode *l3=0,*i=0;
    while(l1!=0 && l2!=0){
        int sum= l1->val+l2->val+rem;
        rem=0;
        l1=l1->next;
        l2=l2->next;
        if(sum>9){
            rem=1;
            sum-=10;
        }
        i=addNode(&l3,i,sum);
    }
    while(l1!=0){
        int sum=l1->val+rem;
        rem=0;
        if(sum>9){
            sum-=10;
            rem=1;
        }
        i=addNode(&l3,i,sum);
        l1=l1->next;
    }
    while(l2!=0){
        int sum=l2->val+rem;
        rem=0;
        if(sum>9){
            sum-=10;
            rem=1;
        }
        i=addNode(&l3,i,sum);
        l2=l2->next;
    }
    if(rem==1){
        i=addNode(&l3,i,1);
    }
    return l3;
}
