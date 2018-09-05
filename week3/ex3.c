#include <stdio.h>
#include <stdlib.h>

struct list {
	int data;
	struct list *next;
};

void print_list(struct list *t) {
	if (t == NULL)
		return;
	printf("%d ", t->data);
	print_list(t->next);
}

struct list *insert_node(struct list *after, int new_data) {
	struct list *node = malloc(sizeof(struct list));
	node->data = new_data;
	if (after == NULL) {
		return node;
	}
	node->next = after->next;
	after->next = node;
	return after;
}

struct list *delete_node(struct list *del_after) {
	if (del_after == NULL || del_after->next == NULL)
		return del_after;

	del_after->next = del_after->next->next;
	return del_after;
}

int main() {
	struct list *head = NULL;
	head = insert_node(head, 5);
	head = insert_node(head, 7);
	head->next = insert_node(head->next, 10); // 5, 7, 10
	print_list(head);

	printf("\n");


	head = delete_node(head); // delete 7
	print_list(head);

	printf("\n");

	return 0;
}
