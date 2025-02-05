#include <bits/stdc++.h>

using namespace std;

struct ListNode{
    int val;
    struct ListNode *next;
};

struct ListNode *createNode(int val){
    struct ListNode *newNode = (struct ListNode *)malloc(sizeof(ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

void insertAtBegining(struct ListNode **head, int val){
    struct ListNode *newNode = createNode(val);
    newNode->next = *head;
    *head = newNode;   
}

int main(){
    struct ListNode *l1 = NULL;
    insertAtBegining(&l1, 3); // 3 -> NULL
    insertAtBegining(&l1, 4); // 4 -> 3 -> NULL
    insertAtBegining(&l1, 2); // 2 -> 4 -> 3 -> NULL  {num1 = 342}

    struct ListNode *l2 = NULL;
    insertAtBegining(&l2, 4); // 4 -> NULL
    insertAtBegining(&l2, 6); // 6 -> 4 -> NULL
    insertAtBegining(&l2, 5); // 5 -> 6 -> 4 -> NULL  {num2 = 465}

    int num1=0, num2=0, num3;

    int i = 0;
    while (l1!=NULL){
        num1 += (l1->val)*pow(10, i);
        i++;
        l1 = l1->next;
    }
    i=0;
    while (l2!=NULL){
        // int i = 0;
        num2 += l2->val*pow(10, i);
        i++;
        l2 = l2->next;
    }

    num3 = num1 + num2;
    
    cout << num1 << " + " << num2 << " = " <<  num3 << "\n";

    // num3 = 807
    struct ListNode *NEXT = NULL;
    while (num3!=0){
        int lastDigit = num3%10;
        insertAtBegining(&NEXT, lastDigit); 
        /*
            this is incorrect
            7 -> NULL
            0 -> 7 -> NULL
            8 -> 0 -> 7 -> NULL but we need 7 -> 0 -> 8 -> NULL
        */
        num3 = num3/10;
    }

    return 0;
}