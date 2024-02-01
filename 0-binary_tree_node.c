#include <stdlib.h>
#include "binary_trees.h"

/**
* Function: binary_tree_node
* @parent: Pointr to the parent node of the new node
* @value: Value to be assigned to the new node
*
* Returns: Pointr to the newly created node, or NULL if creation fails
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
