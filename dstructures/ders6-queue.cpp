#include <iostream>
using namespace std;

class node {
public:
	int data;
	class node* next;
	class node* prev;
};
class node* bas, * son;

void push(int x) {
	class node* temp = (node*)malloc(1 * sizeof(node));
	temp->data = x;
	temp->next = temp->prev = NULL;

	if (bas == NULL) {//Queue bos ise
		bas = son = temp;
		return;
	}

	son->prev = temp;
	temp->next = son;
	son = temp;

	return;
}

void listele() {
	node* temp = bas;
	//cout << "Hello" << endl;

	do {
		cout << temp->data << endl;
		temp = temp->prev;
	} while (temp->next != NULL); // ??? optimizasyon

	return;
}


int pop() {
	int x;
	node* temp = bas;

	if (bas == NULL) {
		cout << "hic eleman kalmadi" << endl;
		return 0;
	}

	if (bas != NULL && son == bas) { // Kuyrukta tek eleman varsa
		cout << "tek eleman kaldi" << endl;
		x = temp->data;
		bas = son = NULL;
		bas->next = bas->prev = son->next = son->prev = NULL;
		return x;
	}

	bas = bas->prev;
	bas->next = NULL;
	temp->prev = NULL;
	x = temp->data;
	free(temp);
	return x;
}


int main() {

	push(11);
	push(22);
	pop();
	push(33);
	push(100);
	pop();
	push(9);
	push(15);
	push(77);
	pop();

	listele();
	return 0;
}