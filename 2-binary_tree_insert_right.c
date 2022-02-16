#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
  *binary_tree_insert_right - insert node as the right-child of another node
  *@parent: is a pointer to the node to insert the tight-child in
  *@value: is the value to store in the new node
  *Return: return pointer to created node or NULL on failure
  *Description: if parent already has right-child,
  *		the new node must take its place,
  *		and the old tight-child must be set as the right-child of the new node
  *
  */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode;

	if (parent == NULL)
	{
		return (NULL);
	}
	NewNode = binary_tree_node(parent, value);

	if (NewNode == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		NewNode->right = parent->right;
		parent->right->parent = NewNode;
	}
	parent->right = NewNode;

	return (NewNode);
}
