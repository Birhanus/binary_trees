#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	binary_tree_t *currentNode;

	NewNode->n = value;
        NewNode->left = NULL;
	NewNode->right = NULL;

	if(parent == NULL)
	{
		currentNode = NewNode;
		NewNode->parent = NULL;
		return (NewNode);
	}
	else
	{
		NewNode->parent = parent;
		currentNode = parent;

		while(1)
		{
			//go to left of the tree
			if (value < parent->n)
			{
				currentNode = currentNode->left;

				//insert to the left
				if(currentNode == NULL)
				{
					parent->left = NewNode;
					return (NewNode);
				}

			}

			// go to right of the tree
			else
			{
				currentNode = currentNode->right;

				//inserr to the right
				if(currentNode == NULL)
				{
					parent->right = NewNode;
					return (NewNode);
				}

			}


		}
	}




}
