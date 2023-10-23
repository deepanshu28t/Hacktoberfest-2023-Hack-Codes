bool isBST(Node* node, int min, int max) {
    if (node == nullptr) {
        return true;
    }

    if (node->data < min || node->data > max) {
        return false;
    }

    return isBST(node->left, min, node->data - 1) &&
           isBST(node->right, node->data + 1, max);
}
