#ifndef _RED_BLACK_TREE_
#define _RED_BLACK_TREE_

enum tree_colour
{
  black = 0,
  red = 1
};

typedef struct tree_node
{
  tree_node_t* node_left;
  tree_node_t* node_right;
  tree_node_t* node_parent;
  tree_colour colour;
}tree_node_t;

#endif