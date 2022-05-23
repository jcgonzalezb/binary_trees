# 0x1D. C - Binary trees

## Binary tree

Binary Tree is a special datastructure used for data storage purposes. A binary tree has a special condition that each node can have a maximum of two children. A binary tree has the benefits of both an ordered array and a linked list as search is as quick as in a sorted array and insertion or deletion operation are as fast as in linked list.

<div align="center">
<img src="https://github.com/jcgonzalezb/binary_trees/blob/main/assets/images/binary_tree.jpg" alt=“Binary Tree”>
<p>Binary Tree</p>
</div>

#### Important Terms

Following are the important terms with respect to tree.

- **Path** − Path refers to the sequence of nodes along the edges of a tree.

- **Root** − The node at the top of the tree is called root. There is only one root per tree and one path from the root node to any node.

- **Parent** − Any node except the root node has one edge upward to a node called parent.

- **Child** − The node below a given node connected by its edge downward is called its child node.

- **Leaf** − The node which does not have any child node is called the leaf node.

- **Subtree** − Subtree represents the descendants of a node.

- **Visiting** − Visiting refers to checking the value of a node when control is on the node.

- **Traversing** − Traversing means passing through nodes in a specific order.

- **Levels** − Level of a node represents the generation of a node. If the root node is at level 0, then its next child node is at level 1, its grandchild is at level 2, and so on.

- **keys** − Key represents a value of a node based on which a search operation is to be carried out for a node.

[Excerpted from](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm)


### Tasks
#### 0. New node

Write a function that creates a binary tree node

- Prototype: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`.
- Where `parent` is a pointer to the parent node of the node to create.
- And `value` is the value to put in the new node.
- When created, a node does not have any child.
- Your function must return a pointer to the new node, or `NULL` on failure.

[0-binary_tree_node.c](https://github.com/jcgonzalezb/binary_trees/blob/main/0-binary_tree_node.c)

#### 1. Insert left

Write a function that inserts a node as the left-child of another node

- Prototype: `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`.
- Where `parent` is a pointer to the node to insert the left-child in.
- And `value` is the value to store in the new node.
- Your function must return a pointer to the created node, or `NULL` on failure or if `parent` is `NULL`.
- If `parent` already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

[1-binary_tree_insert_left.c](https://github.com/jcgonzalezb/binary_trees/blob/main/1-binary_tree_insert_left.c)

#### 2. Insert right

Write a function that inserts a node as the right-child of another node

- Prototype: `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`.
- Where `parent` is a pointer to the node to insert the right-child in.
- And `value` is the value to store in the new node.
- Your function must return a pointer to the created node, or `NULL` on failure or if `parent` is `NULL`.
- If `parent` already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.

[2-binary_tree_insert_right.c](https://github.com/jcgonzalezb/binary_trees/blob/main/2-binary_tree_insert_right.c)


#### 3. Delete

Write a function that deletes an entire binary tree

- Prototype: `void binary_tree_delete(binary_tree_t *tree);`.
- Where `tree` is a pointer to the root node of the tree to delete.
- If `tree` is `NULL`, do nothing.

[3-binary_tree_delete.c](https://github.com/jcgonzalezb/binary_trees/blob/main/3-binary_tree_delete.c)

#### 4. Is leaf

Write a function that checks if a node is a leaf

- Prototype: `int binary_tree_is_leaf(const binary_tree_t *node);`.
- Where `node` is a pointer to the node to check.
- Your function must return `1` if `node` is a leaf, otherwise `0`.
- If `node` is `NULL`, return `0`.

[4-binary_tree_is_leaf.c](https://github.com/jcgonzalezb/binary_trees/blob/main/4-binary_tree_is_leaf.c)

#### 5. Is root

Write a function that checks if a given node is a root

- Prototype: `int binary_tree_is_root(const binary_tree_t *node);`.
- Where `node` is a pointer to the node to check.
- Your function must return `1` if `node` is a root, otherwise `0`.
- If `node` is `NULL`, return `0`.

[5-binary_tree_is_root.c](https://github.com/jcgonzalezb/binary_trees/blob/main/5-binary_tree_is_root.c)

#### 6. Pre-order traversal

Write a function that goes through a binary tree using pre-order traversal

- Prototype: `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`.
- Where `tree` is a pointer to the root node of the tree to traverse.
- And `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
- If `tree` or `func` is `NULL`, do nothing.

[6-binary_tree_preorder.c](https://github.com/jcgonzalezb/binary_trees/blob/main/6-binary_tree_preorder.c)

#### 7. In-order traversal

Write a function that goes through a binary tree using in-order traversal

- Prototype: `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`.
- Where `tree` is a pointer to the root node of the tree to traverse.
- And `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
- If `tree` or `func` is `NULL`, do nothing.

[7-binary_tree_inorder.c](https://github.com/jcgonzalezb/binary_trees/blob/main/7-binary_tree_inorder.c)

####8. Post-order traversal

Write a function that goes through a binary tree using post-order traversal

- Prototype: `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))`;
- Where `tree` is a pointer to the root node of the tree to traverse
- And `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
- If `tree` or `func` is `NULL`, do nothing.

[8-binary_tree_postorder.c](https://github.com/jcgonzalezb/binary_trees/blob/main/8-binary_tree_postorder.c)

#### 9. Height

Write a function that measures the height of a binary tree

- Prototype: size_t `binary_tree_height(const binary_tree_t *tree);`.
- Where `tree` is a pointer to the root node of the tree to measure the height.
- If `tree` is `NULL`, your function must return `0`.

[9-binary_tree_height.c](https://github.com/jcgonzalezb/binary_trees/blob/main/9-binary_tree_height.c)

#### 10. Depth

Write a function that measures the depth of a node in a binary tree

- Prototype: `size_t binary_tree_depth(const binary_tree_t *tree);`.
- Where `tree` is a pointer to the node to measure the depth.
- If `tree`is `NULL`, your function must return `0`.

[10-binary_tree_depth.c](https://github.com/jcgonzalezb/binary_trees/blob/main/10-binary_tree_depth.c)

#### 11. Size

Write a function that measures the size of a binary tree

- Prototype: `size_t binary_tree_size(const binary_tree_t *tree);`.
- Where `tree` is a pointer to the root node of the tree to measure the size.
- If `tree` is `NULL`, the function must return `0`.

[11-binary_tree_size.c](https://github.com/jcgonzalezb/binary_trees/blob/main/11-binary_tree_size.c)

#### 12. Leaves

Write a function that counts the leaves in a binary tree

- Prototype: `size_t binary_tree_leaves(const binary_tree_t *tree);`.
- Where `tree` is a pointer to the root node of the tree to count the number of leaves.
- If `tree` is `NULL`, the function must return `0`.
- A `NULL` pointer is not a leaf.

[12-binary_tree_leaves.c](https://github.com/jcgonzalezb/binary_trees/blob/main/12-binary_tree_leaves.c)

#### 13. Nodes

Write a function that counts the nodes with at least 1 child in a binary tree

- Prototype: `size_t binary_tree_nodes(const binary_tree_t *tree);`.
- Where `tree` is a pointer to the root node of the tree to count the number of nodes.
- If `tree` is `NULL`, the function must return `0`.
- A `NULL` pointer is not a node

[13-binary_tree_nodes.c](https://github.com/jcgonzalezb/binary_trees/blob/main/13-binary_tree_nodes.c)


#### 14. Balance factor

Write a function that measures the balance factor of a binary tree

- Prototype: `int binary_tree_balance(const binary_tree_t *tree);`.
- Where `tree` is a pointer to the root node of the tree to measure the balance factor.
- If `tree` is `NULL`, return `0`.

[14-binary_tree_balance.c](https://github.com/jcgonzalezb/binary_trees/blob/main/14-binary_tree_balance.c)

#### 15. Is full

Write a function that checks if a binary tree is full

- Prototype: `int binary_tree_is_full(const binary_tree_t *tree);`.
- Where `tree` is a pointer to the root node of the tree to check.
- If `tree` is `NULL`, your function must return `0`.

[15-binary_tree_is_full.c](https://github.com/jcgonzalezb/binary_trees/blob/main/15-binary_tree_is_full.c)

#### 16. Is perfect

Write a function that checks if a binary tree is perfect

- Prototype: `int binary_tree_is_perfect(const binary_tree_t *tree);`.
- Where `tree` is a pointer to the root node of the tree to check.
- If `tree` is `NULL`, your function must return `0`.

[16-binary_tree_is_perfect.c](https://github.com/jcgonzalezb/binary_trees/blob/main/16-binary_tree_is_perfect.c)

#### 17. Sibling

Write a function that finds the sibling of a node

- Prototype: `binary_tree_t *binary_tree_sibling(binary_tree_t *node);`.
- Where `node` is a pointer to the node to find the sibling.
- Your function must return a pointer to the sibling node.
- If `node` is `NULL` or the parent is `NULL`, return `NULL`.
- If `node` has no sibling, return `NULL`.

[17-binary_tree_sibling.c](https://github.com/jcgonzalezb/binary_trees/blob/main/17-binary_tree_sibling.c)

#### 18. Uncle

Write a function that finds the uncle of a node

- Prototype: `binary_tree_t *binary_tree_uncle(binary_tree_t *node);`.
- Where `node` is a pointer to the node to find the uncle.
- Your function must return a pointer to the uncle node.
- If `node` is `NULL`, return `NULL`.
- If `node` has no uncle, return `NULL`.

[18-binary_tree_uncle.c](https://github.com/jcgonzalezb/binary_trees/blob/main/18-binary_tree_uncle.c)


## Authors

- Juan Camilo González <a href="https://twitter.com/juankter" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/twitter.svg" alt="juankter" height="30" width="40" /></a>
<a href="https://bit.ly/2MBNR0t" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/linked-in-alt.svg" alt="https://bit.ly/2mbnr0t" height="30" width="40" /></a>

- Alejandra Hincapie Cortés <a href="https://www.linkedin.com/in/lahincapie612?lipi=urn%3Ali%3Apage%3Ad_flagship3_profile_view_base_contact_details%3BxMhp1VYdQ2WVBGG0L%2BSNZQ%3D%3D" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/linked-in-alt.svg" alt="https://bit.ly/2mbnr0t" height="30" width="40" /></a>
