#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary_tree node
 * @parent: root node
 * @value: node value
 *
 * Return: returns new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));

	if (temp == NULL)
		return (NULL);

	temp->n = value;
	temp->parent = parent;
	temp->left = NULL;
	temp->right = NULL;

	return (temp);
}
