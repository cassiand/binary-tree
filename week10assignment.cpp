// cassian
// 11/13/22
// week 10 assignment
// implementation of a binary tree

#include <iostream>
#include <cstdlib>

using namespace std;


class node
{
public: 
    int Key;
    node* left;
    node* right;



    node() : Key(0), left(NULL), right(NULL)
    {}
    
    ~node()
    {
        cout << "X-" << Key << " ";
    }

    void displayNode()
    {
        cout << "{" << Key << "}";
    }
};

class binaryTree
{
private: 
    node* pRoot;
public:

    binaryTree() : pRoot(NULL)
    {

    }

    node* find(int key)
    {
        if (pRoot->Key == key)          // item is found
        {
            return pRoot;           
        }
        else if (pRoot == NULL)
        {
            return NULL;    
        }
        else if (pRoot->Key < key)  // then look right
        {
            return find(key);   // but nothing here tells which direction to go
        }
        else if (pRoot->Key > key)  // then look left
        {

        }
    }
    void insert(int key)
    {
        if (pRoot == NULL)
        {
            pRoot = new node;
            pRoot->Key = key;
            pRoot->left = NULL;
            pRoot->right = NULL;
        }
        else if (pRoot->Key < key)
        {
            pRoot->right = insert(key);
        }
        else
        {
            pRoot->left = insert(key);
        }
    }
    void displayTree()
    {
        if (pRoot == NULL)
        {
            return;
        }
        displayTree
            

    }
};



int main() 
{
    int userChoice, userNum;
    binaryTree theTree;
   
    int i = 1;
    while (i > 0)
    {
        cout << "Enter your choice:\n1. Insert element\n2. Find element\n3. Exit" << endl;
        cin >> userChoice;
        switch (userChoice) {
        case 1:
            cout << "Enter number to insert: ";
            cin >> userNum;
            theTree.insert(userNum);
                        cout << "Tree:" << endl;
                        theTree.displayTree();
            break;
        case 2:
            cout << "Enter number to search for: ";
            cin >> userNum;
            if(theTree.find(userNum)) 
            {
                cout << "The number was found" << endl;
            } 
            else 
            {
                cout << "The number was not found." << endl;
            }
            break;

        case 3:
            exit(0);
        default:
            cout << "Enter either 1, 2, or 3" << endl;
        }
    }
}




