// double linked list (cift bagli liste)
#include<stdio.h>
#include<stdlib.h>

struct student {
	int ID;
	float GPA;
	student* next;
	student* prev;
};

struct student* head, * tail;


void ekle(int ID, float GPA) {
	struct student* temp = (student*)malloc(1 * sizeof(student));
	temp->GPA = GPA;
	temp->ID = ID;
	temp->next = temp->prev = NULL;

	if (head == NULL && tail == NULL) {
		head = temp;
		tail = temp;
		return;
	}
	tail->next = temp;
	temp->prev = tail;
	tail = temp;
	return;
}

void ondenEkle(int ID, float GPA) {
	struct student* temp = (student*)malloc(1 * sizeof(student));
	temp->GPA = GPA;
	temp->ID = ID;
	temp->next = temp->prev = NULL;

	head->prev = temp;
	temp->next = head;
	head = temp;
}

void listele() {
	struct student* temp = head;
	printf("\n");
	do
	{
		printf("No:%d AGNO:%f\n\n", temp->ID, temp->GPA);
		temp = temp->next;
	} while (temp);
	return;
}

void terstenlistele() {
	struct student* temp = tail;
	do
	{
		printf("No:%d AGNO:%f\n\n", temp->ID, temp->GPA);
		temp = temp->prev;
	} while (temp);
	return;
}

void sil(int ID) {
	struct student* temp = head, * onceki, * sonraki;
	int bayrak = 0;
	//head silme
	if (ID == head->ID) {
		temp = head;
		head = head->next;
		head->prev = NULL;
		temp->next = NULL;
		temp->prev = NULL;
		free(temp);
		return;
	}

	//tail silme
	if (ID == tail->ID) {
		temp = tail;
		tail = tail->prev;
		tail->next = NULL;
		temp->prev = NULL;
		temp->next = NULL;
		return;
	}

	//aradan silme
	do
	{
		if (ID == temp->ID)
		{
			printf("buldum seni %d hatta notun %f\n", ID, temp->GPA);
			onceki = temp->prev;
			sonraki = temp->next;
			onceki->next = sonraki;
			sonraki->prev = onceki;
			temp->prev = NULL;
			temp->next = NULL;
			free(temp);
			bayrak = 1;
			break;
		}
		temp = temp->next;
	} while (temp);
}

int main() {
	ekle(111, 3.33);
	ekle(222, 4.00);
	ekle(333, 1.66);
	ekle(444, 2.01);
	ondenEkle(1, 3.99);
	listele();
	terstenlistele();
	sil(222);
	listele();
	return 0;
}