/*
Replace with depth
Send Feedback
In a given Generic Tree, replace each node with its depth value. You need to just update the data of each node, no need to return or print anything.
Input format :
Line 1 : Elements in level order form separated by space (as per done in class). Order is - 
Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element 
Sample Input 1 :
10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output 1 : (Level wise, each level in new line)
0 
1 1 1 
2 2
*/
// Following is the given Tree node structure
/**************
template <typename T>
class TreeNode {
public:
    T data;
    vector<TreeNode<T>*> children;
    
    TreeNode(T data) {
        this->data = data;
    }
    
    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};
***************/

void replaceWithDepthValue(TreeNode<int> *root,int depth){    
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Change in the input tree itself.
     * No need to return pr print the output.
     * Taking input and printing output is handled automatically.
     */
    if(root==NULL)
        return;
    for(int i=0;i<root->children.size();i++){
        replaceWithDepthValue(root->children[i],depth+1);
    }
    root->data=depth;   

}
void replaceWithDepthValue(TreeNode<int> *root){    
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Change in the input tree itself.
     * No need to return pr print the output.
     * Taking input and printing output is handled automatically.
     */
    replaceWithDepthValue(root,0);
}

