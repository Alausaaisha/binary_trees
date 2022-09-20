#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert node at tree's right
 * @parent: root node
 * @value: node value
 *
 * Return: updated node and NULL if it fails
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));

	if (parent == NULL || temp == NULL)
		return (NULL);

	temp->n = value;
	temp->parent = parent;
	temp->left = NULL;
	if (parent->right)
	{
		temp->right = parent->right;
		parent->right->parent = temp;
	}
	else
		temp->right = NULL;

	parent->right = temp;

	return (temp);
}
