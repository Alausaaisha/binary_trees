#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a binary tree using
 * pre-order traversal
 * @tree: pointer to root node
 * @func: pointer to a function to call for each node
 * value in the node must be passed as a parameter to the func
 * Algorithm - first visit the root node,
 * then left subtree and then the right subtree.
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	if (tree != NULL)
	{
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
