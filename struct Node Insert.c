#include<stdio.h>
#include<windows.h>

typedef struct NODE* NodePointer;
typedef struct NODE {
	int data;
	NodePointer link;
}NODE;
NodePointer head = NULL;

int Search(NodePointer ptr, int value) {
	int i;
	for (i = 1; ptr->data != value; ptr->link) i++;
	return i;
}

void Insert(NodePointer pre, int value) {
	NodePointer temp = (NodePointer)malloc(sizeof(NODE));
	if (!head) {		// ����Ʈ�� ������ ����
		temp->data = value;
		temp->link = NULL;
		head = temp;
	}
	else {			// ����Ʈ�� ������ �ƴ� ����
		temp->data = value;
		temp->link = pre->link;
		pre->link = temp;
	}
}

int main() {
	Insert(head, 1);
	printf("%d", head->data);
}