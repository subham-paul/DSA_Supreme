void topview(Node* root)
{
    if (root == NULL)
        return;
    queue<Node*> q;
    map<int, int> m;
    int hd = 0;
    root->hd = hd;
    q.push(root);

    while (!q.empty()) {
        hd = root->hd;
        if (m.count(hd) == 0)
            m[hd] = root->data;
        if (root->left != NULL) {
            root->left->hd = hd - 1;
            q.push(root->left);
        }
        if (root->right != NULL) {
            root->right->hd = hd + 1;
            q.push(root->right);
        }
        q.pop();
        root = q.front();
    }

    for (auto [x,y]:m) {
        cout << y << " ";
    }
}