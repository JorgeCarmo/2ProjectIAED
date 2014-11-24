#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define name_size 20
#define	msg_size 200
#define	hashtag_size 40
#define cmd_size 6

typedef struct {
	char name[name_size],msg[msg_size], hashtag[hashtag_size];
} Item;

int main(){
	
	int maxHashtag;
	char cmd[cmd_size], name[name_size],msg[msg_size], hashtag[hashtag_size]; /* comando quit, send, etc*/
	scanf("%d", maxHashtag);
	
	STinit(maxHashtag);
	
	while(fgets(char *cmd, int cmd_size, FILE *stdin)!='quit'){
		switch(cmd){
			case 'send':{
				send_msg()
		
	




			}
		}
	}
	return 0
}


void send_msg(){
	fgets(char *name, int name_size, FILE *stdin);
	fgets(char *hashtag, int hashtag_size, FILE *stdin);
	fgets(char *msg, int msg_size, FILE *stdin);
	
	Item item;
	item->name=name;
	item->hashtag=hashtag;
	item->msg=msg;
	
	STsearch(
	/* alocar memoria e colocar item em novo_>item*/
	
}

/*--------------------------hash----------------------*/


int hash(char *v, int M)
{
	int h = 0, a = 127;
	for (; *v != ’\0’; v++)
		h = (a*h + *v) % M;
	return h;
}



/*----------------------------------------------------*/


static link *heads;
static int M;

void STinit(int max) {
	int i;
	M = max;
	heads = (link*)malloc(M*sizeof(link));
	for (i = 0; i < M; i++) heads[i] = NULL;
}

Item STsearch(Key v) {
	return	searchList(heads[hash(v, M)], v);
}

void STinsert(Item item) {
	int i = hash(key(item), M);
	heads[i] =	insertBeginList(heads[i], item);
}

void STdelete(Item item) {
	int i = hash(key(item), M);
	heads[i] = removeItemList(heads[i], item);
}



/*----------------------------------------------
--------------LISTA-----------------------------
----------------------------------------------*/

link removeItemList(link *heads, Item item)/*mudar item*/
{
	link t, prev;
	for(t = head, prev = NULL; t != NULL; prev = t, t = t->next) {	
	if(item->name == heads->item->name) {
		if(t == head)
			heads = t->next;
		else
			prev->next = t->next;
		free(t->text);
		free(t);
	}	
	}
	return head;
}


void insertBeginList(link *heads, Item item)/*mudar item*/
{
	link x = newNode(item);
	x->next = *head;
	*head= x;
}

link searchList(link *heads, Item item)/*feito*/
{
	link t;
	for(t = head; t != NULL; t = t->next)
		if(item->hashtag == heads->item->hashtag)
			return t->item;
	return NULL;
}


link lastList(link *heads)
{
	node *x=head;
	
	while (x!=NULL){
		x = x->next;
		
	return n
	
	}
}

/* */
void
STfree(SThash h)
{
  free(h->tab);
  free(h);
}
