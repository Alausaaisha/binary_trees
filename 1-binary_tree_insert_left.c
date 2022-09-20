#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert node at tree's left
 * @parent: root node
 * @value: node value
 *
 * Return: updated node and NULL if it fails
 */


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));

	if (parent == NULL || temp == NULL)
		return (NULL);

	temp->n = value;
	temp->parent = parent;
	temp->right = NULL;
	if (parent->left)
	{
		temp->left = parent->left;
		parent->left->parent = temp;
	}
	else
		temp->left = NULL;

	parent->left = temp;

	return (temp);
}
