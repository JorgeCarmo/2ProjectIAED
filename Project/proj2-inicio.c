#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define name_size 20
#define	msg_size 200
#define	hashtag_size 40
#define cmd_size 6

typedef struct {
	char name[name_size], msg[msg_size], hashtag[hashtag_size];
} Item;

typedef struct {
	Item *item;
	link *next;
} Node;

typedef struct {
	Node *node;
} link;	
Node *head;

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
			case 'list':{
				list_hash()
			}
			case 'close':{
				close_hash()
			}
		}
	}
	
	return 0
}

void list_hash(){

	fgets(char *hashtag, int hashtag_size, FILE *stdin);
	
	if ((STsearch(hashtag))!=NULL)

}

void send_msg(){
	
	/*Para trabalhar com outro tipo de items mudar esta funcao*/
	
	Item item;

	fgets(char *name, int name_size, FILE *stdin);
	fgets(char *hashtag, int hashtag_size, FILE *stdin);
	fgets(char *msg, int msg_size, FILE *stdin);
	
	
	item->name=name;
	item->hashtag=hashtag;
	item->msg=msg;
	
	STinsert(item);
	
}

/*--------------------------hash----------------------*/


int hash(char *v, int M)
{
	int h = 0, a = 127;
	for (; *v != ’\0’; v++)
		h = (a*h + *v) % M;
	return h;
}



/*------------------------Procura Linear Dinâmica----------------------------*/


/*Mudar os valores para acomodar o caderno primeira pagina*/
#define null(A) (key(st[A]) == key(NULLitem))
static link *heads;
static int N, M;
static Item *st;

void STinit(int max) {
	int i;
	N = 0; 
	M = 2*max;
	st = (Item*)malloc(M*sizeof(Item));
	for (i = 0; i < M; i++) 
		st[i] = NULLitem; 
}

Item STsearch(Key v)
{ 
	int i = hash(v, M);
	while (!null(i))
		if (eq(v, key(st[i]))
			return st[i];
		else
			i = (i+1) % M;
	return NULLitem;
}

void STinsert(Item item) {
	Key v = key(item);
	int i = hash(v, M);
	while (!null(i)) i = (i+1) % M;
	st[i] = item;
	N++;
}

void expand() {
	int i; 
	Item *t = st;
	init(M+M);
	for (i = 0; i < M/2; i++)
		if (key(t[i]) != key(NULLitem))
			STinsert(t[i]);
	free(t);
}

void STdelete(Item item)
{ 
	int j, i = hash(key(item->), M); Item v;
	while (!null(i))
		if (eq(key(item), key(st[i])) break;
		else i = (i+1) % M;
	if (null(i)) return;
	st[i] = NULLitem; 
	N--;
	for (j = (i+1) % M; !null(j); j = (j+1) % M, N--) {
		v = st[j]; 
		st[j] = NULLitem;
		STinsert(v);
	}	
}



/*----------------------------------------------
--------------LISTA-----------------------------
----------------------------------------------*/

Node newNode(Item item){
	Node *new;
	new = (Node *) malloc(sizeof(Node))
	new->item = item
	new->node = NULL
}

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
void STfree(SThash h)
{
  free(h->tab);
  free(h);
}