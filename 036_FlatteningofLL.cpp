//geeksforgeeks
Node* mergeTwoLists(Node* a, Node* b) {

    Node *temp = new Node(0);
    Node *res = temp;

    while(a != NULL && b != NULL) {
        if(a->data < b->data) {
            temp->bottom = a;
            temp = temp->bottom;
            a = a->bottom;
        }
        else {
            temp->bottom = b;
            temp = temp->bottom;
            b = b->bottom;
        }
    }

    if(a) temp->bottom = a;
    else temp->bottom = b;

    return res -> bottom;

}
Node *flatten(Node *root)
{
        if (root == NULL || root->next == NULL)
            return root;

        // go to the extreme right(end)
        root->next = flatten(root->next);

        // now merge last two linked lists
        root = mergeTwoLists(root, root->next);

        // return root of the merged list
        return root;
}
