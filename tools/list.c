#include "list.h"

int length(struct List list) {
	return list.size;
}

struct ListElement* get(struct List list, int element) {
	if(element > list.size - 1 || element < 0)
		return 0;

	struct ListElement *current_element = list.first;
	for(int cur = 0; cur < element; ++cur)
		current_element = current_element->next;

	return current_element;
}

void concat(struct List *list1, struct List *list2) {

}

void addElement(struct List *list, TYPE* new_element) {

}
