/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
 */

// @lc code=start
  //Definition for singly-linked list.
//   struct ListNode {
//       int val;
//       ListNode *next;
//       ListNode() : val(0), next(nullptr) {}
//       ListNode(int x) : val(x), next(nullptr) {}
//       ListNode(int x, ListNode *next) : val(x), next(next) {}
//   };

using namespace std;

#include<iostream>
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode head;
        ListNode*rear=&head;
        while(list1!=NULL&&list2!=NULL){
            if(list1->val>list2->val){
                rear->next=list2;
                rear=rear->next;
                list2=list2->next;
            }
            else{
                rear->next=list1;
                rear=rear->next;
                list1=list1->next;
            }
        }
        if(list1!=NULL){
            rear->next=list1;
        }
        else{
            rear->next=list2;
        }
        return head.next;
       
    }
};
// @lc code=end

