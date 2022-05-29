/*****************************************************************************
 * File: listar.c
 *
 * Time-stamp: "2018-10-15 14:49:16    listar.c    pff@inesc-id.pt"
 *
 * Purpose: Memory allocation and list manipulation (simple and double link)
 *
 * History: 2014-04-24 - pff - created.
 *
 * Copyright (c) 2014 Paulo Flores.
 *****************************************************************************/
#include <stdlib.h>
#include <stdio.h>

typedef int Item;

typedef struct s_node {
  Item item;
  struct s_node *prev;
  struct s_node *next;
} node;


node *create_node(int value)
{

}


node *insert_in_list(node * first, node * nelem)
{

}


void print_increasing(node * first)
{

}


void print_decreasing(node * el)
{

}


int main(int argc, char *argv[])
{
  node *head = NULL;
  node *cursor = NULL;
  node *elem;

  int i, v;
  if (argc != 6) {
    fprintf(stderr,
            "Num. de argumentos errados! Tem que fornecer 5 inteiros\n");
    exit(-1);
  }
  for (i = 1; i <= 5; i++) {
    v = atoi(argv[i]);
    elem = create_node(v);
    head = insert_in_list(head, elem);
  }

  print_increasing(head);
  print_decreasing(cursor);


  return 0;
}

/*****************************************************************************/
