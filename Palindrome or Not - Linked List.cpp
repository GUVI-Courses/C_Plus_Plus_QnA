#include <iostream>


using namespace std;


struct Node {
    int data;
    Node* next;
};
//reverse the string (second part)
Node* reverse(Node* head) 
{
    Node* p, *q;
    if (head == NULL)
        return head;
    p = head;
    q = p->next;
    if (q == NULL)
        return p;
    q = reverse(q);
    p->next->next = p;
    p->next = NULL;
    return q;
}


void check_palindrome(Node* start) {
    Node* p, *q, *first_start, *second_start;
    p = start;
    q = start;


    if (p->next == NULL) // if there is only one character in the string
    {
        cout << "It is a palindrome" << endl;
        return;
    }
    //split the linked list
    while (true) {
        p = p->next->next;
        if (p == NULL) {
            second_start = q->next;
            break;
        }
        if (p->next == NULL) {
            second_start = q->next->next;
            break;
        }
        q = q->next;
    }
    q->next = NULL;
    //reverse the second linked list
    second_start = reverse(second_start);
    //now compare the splitted two linked lists
    first_start = start;


    while (first_start != NULL && second_start != NULL) //compare the two strings
    {
        if (first_start->data == second_start->data) {
            first_start = first_start->next;
            second_start = second_start->next;
        }
        else {
            cout << "Not a palindrome" << endl;
            return;
        }
    }
    cout << "It is a palindrome" << endl;
}


int main() {
    int a, i, n;
    Node *p, *q, *start, *temp, *new_start;
    cout << "Enter the number of nodes: ";
    cin >> n;


    if (n == 0) //an empty string 
    {
        cout << "It is a palindrome" << endl;
        return 0;
    }


    cout << "Enter all the nodes separated by space: " << endl;
    p = new Node();
    cin >> a;
    p->data = a;
    p->next = NULL;
    start = p;


    for (i = 1; i < n; i++) {
        q = new Node();
        cin >> a;
        q->data = a;
        q->next = NULL;
        p->next = q;
        p = p->next;
    }


    check_palindrome(start);


    return 0;
}