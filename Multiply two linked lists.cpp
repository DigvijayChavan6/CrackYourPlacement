// Given elements as nodes of the two singly linked lists. The task is to multiply these two linked lists, say L1 and L2.

// Note: The output could be large take modulo 10^9+7.

// Examples :

// Input: LinkedList L1 : 3->2 , LinkedList L2 : 2
// Output: 64
// Explanation: 

// Multiplication of 32 and 2 gives 64.
// Input: LinkedList L1: 1->0->0 , LinkedList L2 : 1->0
// Output: 1000
// Explanation: 

// Multiplication of 100 and 10 gives 1000.
// Expected Time Complexity: O(max(n,m))
// Expected Auxilliary Space: O(1)
// where n is the size of L1 and m is the size of L2

// Constraints:
// 1 <= number of nodes <= 105
// 1 <= node->data <= 103

/* Linked list node structure
struct Node{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/

/*The method multiplies
two  linked lists l1 and l2
and returns their product*/

/* Multiply contents of two linked lists */
class solution {
    long long getNum(Node *node){
        long long num=0;
        while(node){
            num=(num*10)%1000000007 + node->data;
            node=node->next;
        }
        return num;
    }
  public:
    long long multiplyTwoLists(Node *first, Node *second) {
        // code here
        long long a=getNum(first);
        long long b=getNum(second);
        return (a*b)%1000000007;
    }
};
