#include <iostream>
using namespace std;

class node {
public:
	int data;
	class node* next;
	class node* prev;
};
class node* alt, * ust;

void push(int x) {
	class node* temp = (node*)malloc(1 * sizeof(node));
	temp->data = x;
	temp->next = temp->prev = NULL;

	if (alt == NULL) {//stack boþ ise
		alt = ust = temp;
		return;
	}

	ust->next = temp;
	temp->prev = ust;
	ust = temp;

	return;
}

void listele() {
	node* temp = ust;
	//cout << "Hello" << endl;

	do {
		cout << temp->data << endl;
		temp = temp->prev;
	} while (temp->next != NULL); // ??? optimizasyon

	return;
}

int pop() {
	int x;
	node* temp = ust;
	x = temp->data;

	if (ust == alt) {
		cout << "bye" << endl;
		return 0;

	}

	if (temp == alt) {
		ust = alt = NULL;
	}
	else {
		temp = temp->prev;
		ust = temp;
		ust->next = NULL;
		temp = temp->next;
		free(temp);
	}
	return x;
}


int main() {
	//pop();
	push(11);
	push(22);
	pop();
	push(33);
	pop();
	pop();
	push(7); pop(); pop(); pop(); pop();
	//
	push(99);
	push(100);
	push(33);
	pop();
	push(55);

	listele();

	return 0;
}