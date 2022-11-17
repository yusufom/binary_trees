#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at leaset 1 child in a binary tree
 * @tree: A pointer to the root node of the tree to count the nodes
 *
 * Return: The count or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count + 1);
}
