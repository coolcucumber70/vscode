/*
 * @lc app=leetcode.cn id=707 lang=cpp
 *
 * [707] 设计链表
 */

// @lc code=start
typedef struct ListNode {
    int val;
    ListNode* next;
    ListNode(int m_val,ListNode*m_next=nullptr):val(m_val),next(m_next){};

}ListNode;
class MyLinkedList {
public:
    MyLinkedList() {
        this->size=-1;
        this->head=new ListNode(0);
        this->rear=head;

    }
    
    int get(int index) {
        if(index>this->size){
            return -1;
        }
        ListNode*p=head->next;
        for(int i=0;i<index;i++){
            p=p->next;
        }
        return p->val;

    }   
    void addAtHead(int val) {
        ListNode* p=new ListNode(val);
        p->next=head->next;
        if(p->next==nullptr){
            rear=p;
        }
        head->next=p;
        this->size++;

    }
    
    void addAtTail(int val) {
        ListNode* p=new ListNode(val);
        rear->next=p;
        rear=p;
        this->size++;

    }
    
    void addAtIndex(int index, int val) {
        if(index<=0){
            addAtHead( val);
        }
        if(index-1==size){
            addAtTail(val);
        }
        ListNode*p=head;
        while(index){
            p=p->next;
            index--;
        }
        ListNode*q=new ListNode(val,p->next);
        p->next=q;
        this->size++;

    }
    
    void deleteAtIndex(int index) {
        if(index<0||index>size){
            return;
        }
        ListNode*p=head;
        while(index){
            p=p->next;
            index--;
        }
        ListNode*q=p->next;
        if(rear==q){
            rear=p;
        }
        p->next=q->next;
        delete q;
        this->size--;


    }
private:
    int size;
    ListNode *head;
    ListNode *rear;

};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
// @lc code=end

