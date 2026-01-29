/*
class Node {
    int data;
    Node left, right;

    Node(int val) {
        data = val;
        left = right = null;
    }
}
*/

class Solution {
    public int replaceNode(Node root){
        while(root.right!=null){
            root=root.right;
        }
        return root.data;
    }
    public Node delNode(Node root, int x) {
        // code here
        if(root==null){
            return null;
    }
    if(root.data>x){
        root.left=delNode(root.left,x);
    }else if(root.data<x){
        root.right=delNode(root.right,x);
    }else{
        if(root.left==null){
            return root.right;
        }
        if(root.right==null){
            return root.left;
        }
        root.data=replaceNode(root.left);
        root.left=delNode(root.left,root.data);
    }
    return root;
}
}