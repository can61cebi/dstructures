#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node* next;
};
node* halayBasi, * halaySonu;

void ekle(int x)
{
	node* temp = (node*)malloc(1 * sizeof(node));
	temp->data = x;
	temp->next = NULL;

	if (!halayBasi)
	{
		halaySonu = halayBasi = temp;
		halayBasi->next = halayBasi; // temp->next=temp;
		return;
	}

	halayBasi->next = temp;
	temp->next = halaySonu;
	halaySonu = temp;


	return;
}

void halayiGoruntule()
{
	node* temp = halayBasi;
	do
	{
		printf("%d ", temp->data);
		temp = temp->next;
	} while (temp != halayBasi);

	return;
}

int main()
{
	ekle(11); ekle(22); ekle(33); ekle(44);
	halayiGoruntule();

	return 0;
}