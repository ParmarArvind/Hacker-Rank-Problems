int solve(Node *root)
{
    if(!root) return 0;
    return 1+max(solve(root->left),solve(root->right));
}
    int height(Node* root) {
        // Write your code here.
        return solve(root)-1;
    }
