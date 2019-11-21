class List{
private:

typedef struct node {
	int data;
	node* next;
	}* nodeptr;
	
	nodeptr head;
	nodeptr curr;
	nodeptr temp;

public://This is where the functions go
List();
void AddNode(int addData);
void DeleteNode(int delData);
void PrintList();


	};