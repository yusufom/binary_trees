#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: A pointer to the node to insert to the right-child in
 * @value: The value to store in the new node
 *
 * Return: A pointer to the new inserted node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (!new_node)
		return (NULL);

	if (parent)
	{
		new_node->right = parent->right;
		parent->right = new_node;

		if (new_node->right)
			new_node->right->parent = new_node;
	}

	return (new_node);
}
