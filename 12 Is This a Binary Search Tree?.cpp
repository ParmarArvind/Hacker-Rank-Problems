/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
    struct Node {
        int data;
        Node* left;
        Node* right;
    }
*/#include <climits>

bool isBST = true;

    pair<int,int> solve(Node *root)
    {
        if(!root) return {INT_MAX, INT_MIN};
         auto left = solve(root->left);
        auto right = solve(root->right);
        
        // check BST condition
        if(left.second >= root->data || right.first <= root->data)
        isBST = false;
        
        int mn = min(root->data, left.first);
        int mx = max(root->data, right.second);

        return {mn, mx};
        
    }
    bool checkBST(Node* root) {
        isBST = true;
        solve(root);
        return isBST;
        
    }
