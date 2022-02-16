#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
  *binary_tree_node - create new node for tree
  *@parent: parent of the created node
  *@value: the value to be inserted on the node
  *Return: ponter of the created node or Null on fail
  */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode;

	NewNode = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (NewNode == NULL)
	{
		return (NULL);
	}

	NewNode->n = value;
	NewNode->left = NULL;
	NewNode->right = NULL;
	NewNode->parent = parent;

	return (NewNode);
}
