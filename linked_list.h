/*
 * @Author: chankruze (Chandan Kumar Mandal) 
 * @Date: 2019-06-23 11:59:11 
 * @Last Modified by: chankruze (Chandan Kumar Mandal)
 * @Last Modified time: 2019-06-23 12:10:45
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * Node for general linked list implementation
 * **********************************************
 * data (int) - value to store at particular node
 * next (Node *) - pointer to next node
*/
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
