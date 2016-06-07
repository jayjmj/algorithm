/*
#include <cstdio>
#include <cstring>

char str[100001];

struct List{
	struct Node{
		char c;
		Node* prev;
		Node* next;
		Node(){
			c = ' ';
			prev = NULL;
			next = NULL;
		}
	};

	Node* head;
	Node* currentP;

	List(){
		head = new Node();
		currentP = head;
	}

	void L(){
		if(currentP->prev != NULL) currentP = currentP->prev;
	}

	void D(){
		if(currentP->next != NULL) currentP = currentP->next;
	}

	void B(){
		if(currentP != head){
			Node* tmp = currentP;
			if(currentP->next != NULL) currentP->next->prev = currentP->prev;
			currentP->prev->next = currentP->next;
			currentP = currentP->prev;
			delete tmp;
		}
	}

	void P(char c){
		Node* newNode = new Node();
		newNode->c = c;
		newNode->prev = currentP;
		newNode->next = currentP->next;
		if(currentP->next != NULL) currentP->next->prev = newNode;
		currentP->next = newNode;
		currentP = newNode;
	}

	void print(){
		Node* tmp = head->next;

		while(tmp != NULL){
			printf("%c",tmp->c);
			tmp = tmp->next;
		}
	}

};

int main(){
	scanf("%s",str);
	int len = strlen(str);
	List strList;
	for(int i = 0 ; i < len ; i++)strList.P(str[i]);

	int N;
	scanf("%d",&N);
	getchar();

	char inst;
	for(int i = 0 ; i < N ; i++){
		scanf("%c",&inst);
		getchar();

		if(inst == 'L') strList.L();
		else if(inst == 'D') strList.D();
		else if(inst == 'B') strList.B();
		else if(inst == 'P'){
			char c;
			scanf("%c",&c);
			getchar();
			strList.P(c);
		}

	}
	strList.print();

	return 0;
}
*/
