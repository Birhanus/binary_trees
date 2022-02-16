#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
  *binary_tree_insert_left - insert node to left of the tree
  *@parent: is a pointer to tje node to insert the left-child om
  *@value: is the value to stroe in the new node
  *Return: return pointer to the created node or NULL on fail
  *Description: If parent already has a left-childm,
  *		the new node must take its place
  *		and the old left-child must be set as the left-child of the new node
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	if (parent->left != NULL)
	{
		NewNode->left = parent->left;
		parent->left->parent = NewNode;

		return (NewNode);
	}

	parent->left = NewNode;

	return (NewNode);

}
