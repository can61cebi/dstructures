#include <iostream>
using namespace std;

class node { //doubly LL
public:
	int data;
	class node* next;
	class node* prev;
};

class node* head, * tail;

void ekle(int x) {
	class node* temp = (node*)malloc(1 * sizeof(node));
	temp->data = x;
	temp->next = NULL; //NIL
	temp->prev = NULL;

	if (!head) {
		head = tail = temp;
		return;
	}

	tail->next = temp;
	temp->prev = tail;
	tail = temp;

	return;
}

void goster() {
	class node* temp = head;

	do {
		cout << temp->data << " ";
	} while (temp = temp->next);

	cout << endl;
	return;
}

void tersGoster() {
	class node* temp = tail;

	do {
		cout << temp->data << " ";
	} while (temp = temp->prev);

	cout << endl;
	return;
}

void sil(int x) {
	class node* temp = head;
	class node* temp2 = NULL, * temp3 = NULL;

	// head
	if (head->data == x) {
		head = head->next;
		free(temp);
		return;
	}

	// inner node
	do {
		if (temp->data == x) {
			cout << "seni silecegim" << temp->data << endl;

			temp2 = temp->prev;
			temp3 = temp->next;
			temp2->next = temp3;
			temp3->prev = temp2;
			//free(temp);		
		}

	} while (temp = temp->next);

	//tail	
}

int main() {
	ekle(11);
	ekle(22);
	ekle(23);
	ekle(33);
	ekle(55);
	ekle(44);

	goster();
	tersGoster();

	sil(33);

	goster();
	tersGoster();

	cout << "bye bye";
	return 0;