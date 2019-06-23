/*
 * @Author: chankruze (Chandan Kumar Mandal) 
 * @Date: 2019-06-23 11:59:07 
 * @Last Modified by: chankruze (Chandan Kumar Mandal)
 * @Last Modified time: 2019-06-23 12:01:42
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * Node for doubly linked list implementation
 * **********************************************
 * data (int) - value to store at particular node
 * next (Node *) - pointer to next node
 * prev (Node *) - pointer to previous node
*/
typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
} Node;