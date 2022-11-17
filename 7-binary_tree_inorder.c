#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using pre-order traversal
 * @tree: A pointer to the node root of the tre to traverse
 * @func: A pointer to a function to call for each node
 *
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
