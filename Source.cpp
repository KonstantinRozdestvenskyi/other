#include <iostream>
#include <random>

using namespace std;

struct Node_BST
{
    int data;
    Node_BST* left;
    Node_BST* right;
    Node_BST* parent;
};

struct Node_RBT
{
    int data;
    Node_RBT* left;
    Node_RBT* right;
    Node_RBT* parent;
    char color;
};

struct Node_AVLT
{
    int data;
    Node_AVLT* left;
    Node_AVLT* right;
    Node_AVLT* parent;
};