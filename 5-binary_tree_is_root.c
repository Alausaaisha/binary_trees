#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if node is a root
 * @node: tree node
 * Return: node status or NULL if node is empty
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
	{
		if (!node->parent)
			return (1);
	}
	return (0);
}
