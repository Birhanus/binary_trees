#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
  *binary_tree_is_root- checks if a given node is a root
  *@node: Is a pointer to the node to check
  *Return: rerurn 1 if node is root otherwise return 0
  *Discription: If node is NULL return 0
  */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent !=NULL)
	{
		return (0);
	}
	return (1);
}
