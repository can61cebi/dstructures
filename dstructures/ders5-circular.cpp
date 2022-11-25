#include <iostream>
using namespace std;

class node {
public:
	int ID;
	int data;
	class node* next;
	class node* prev;
};
class node* head, * tail;

void ekle(int x) {
	class node* temp = (node*)malloc(1 * sizeof(node));
	temp->data = x;
	temp->next = temp->prev = NULL;

	if (!head) {
		tail = head = temp;
		temp->next = temp->prev = temp;
		return;
	}

	tail->next = temp;
	temp->prev = tail;
	temp->next = head;
	head->prev = temp;
	tail = temp;
	return;
}

void ziyaretEt(class node* temp) {

	do {
		cout << temp->data << endl;
		temp = temp->prev;
	} while (temp != head);

	return;
}

int main() {
	ekle(11);
	ekle(22);
	ekle(33);
	ekle(44);
	ziyaretEt(head);
	return 0;
}