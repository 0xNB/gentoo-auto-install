/* define struct list and functions */

#define TYPE char

/* a single list element */
struct ListElement{
	struct ListElement *next;
	TYPE *content;
};

/* head and tail element and list size */
struct List{
	struct ListElement *first, *last;
	int size;
};

int length(struct List);		 /* returns the length of the list */
struct ListElement* get(struct List, int element);	 /* returns the element at the specified position*/
void concat(struct List*, struct List*);	 /* concatinates two lists */
void addElement(struct List*, TYPE* new_element);
