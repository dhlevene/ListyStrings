#ifndef __LISTY_STRING_H
#define __LISTY_STRING_H

typedef struct node
{
	// each node holds a single character
	char data;

	// pointer to next node in linked list
	struct node *next;
} node;


// Functional Prototypes

node *stringToList(char *str);

node *replaceChar(node *head, char key, char *str);

node *reverseList(node *head);

void printList(node *head);


#endif
