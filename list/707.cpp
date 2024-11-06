#include "include.h"

class MyLinkedList {
public:
    MyLinkedList() : m_listHead(NULL) {
        
    }
    
    int get(int index) {
        if (index < 0) return -1;
        int cur = 0;
        ListNode* node = m_listHead;
        while (!node) {
            if (cur == index) {
                return node->val;
            }
            ++cur;
            node = node->next;
        }
        return -1;
    }
    
    void addAtHead(int val) {
        if (!m_listHead) {
            m_listHead = new ListNode(val);
        } else {
            ListNode *node = new ListNode(val, NULL, m_listHead);
            m_listHead = node;
        }
    }
    
    void addAtTail(int val) {
        if (!m_listHead) {
            m_listHead = new ListNode(val);
        } else {
            ListNode *node = m_listHead;
            while (!node->next) node = node->next;
            node->next = new ListNode(val, node);
        }
    }
    
    void addAtIndex(int index, int val) {
        if (index < 0) return;
        if (index == 0)  return addAtHead(val);

        int curIndex = 0;
        ListNode *node = m_listHead;
        while (!node) {
            if (curIndex == index) {
                ListNode *temp = new ListNode(val, node, node->next);
                node->next->pre = temp;
                node->next = temp;
                break;
            }
            ++curIndex;
        }
    }
    
    void deleteAtIndex(int index) {
        if (index < 0) return;
        if (index == 0) {
            m_listHead = m_listHead->next;
            delete m_listHead->pre;
            m_listHead->pre = NULL;
        }

        int curIndex = 0;
        ListNode *node = m_listHead;
        while (!node) {
            if (curIndex == index) {
                node->pre->next = node->next;
                node->next->pre = node->pre;
                delete node;
                break;
            }
            ++curIndex;
        }
    }

private:
    struct ListNode {
        int val;
        struct ListNode *next;
        struct ListNode *pre;
        ListNode(int nVal, struct ListNode *pPre = NULL, struct ListNode * pNext = NULL) {
            nVal = nVal;
            pre  = pPre;
            next = pNext;
        }
    } *m_listHead;
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

int main() {

    return 0;
}