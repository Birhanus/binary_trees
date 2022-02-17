#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"

/**
  *binary_tree_is_leaf - checks if a nodes is a leaf
  *@node: is a ponter to the node to check
  *Return: return 1 if node is a leaf, otherwise return 0
  *Discription: if node is NULL return 0
  */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int is_leaf;

	if (node == NULL)
	{
		return (0);
	}
	else
	{
		if (node->left != NULL  || node->right == NULL)
		{
			is_leaf = 0;
		}
		if (node->left == NULL && node->right == NULL)
		{
			is_leaf = 1;
		}
	}

	return (is_leaf);

}
