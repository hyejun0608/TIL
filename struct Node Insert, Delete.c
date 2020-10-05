#include<stdio.h>
#include<windows.h>

int Search(NodePointer ptr, int value);
void Insert(NodePointer pre, int value);
int Delete(NodePointer del, NodePointer tra);

typedef struct NODE* NodePointer;
typedef struct NODE {
	int data;
	NodePointer link;
}NODE;
NodePointer head = NULL;

int main() {
	Insert(head, 1);
}

int Search(int key) {
	int count = 0;
	for (NodePointer ptr = head; ptr->data != key; ptr = ptr->link) {
		if (ptr->link == NULL) return -1;
		count++;
	}
	return count;
}
//��� �����Լ�
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
//��� �����Լ�
int Delete(NodePointer del, NodePointer tra) {
	if (!head) return printf("List is Empty!\n");
	else {
		NodePointer temp = del;
		if (tra) tra->link = del->link;
		else head = head->link;
		free(temp);
	}
}