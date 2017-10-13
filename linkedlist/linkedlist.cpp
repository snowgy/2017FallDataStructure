#include <iostream>
using namespace std;
class CNode{
	public:
		int data;
		CNode *next;
		CNode(){
			next = NULL;
		}
};

class CList{
	private:
		CNode *head;
	public:
		CList();
		void Create();
		void Display()const;
		~CList();
		int getlen() const;
		bool isEmpty() const;
		bool Find(const int e) const;
		CNode* GetNode(int i) const;
		void Insert(int i, const int e);
		void Update(int i, const int e);
		void Delete(int i);
		CNode* Reverse();
};

CList::CList()
{
	head = new CNode();
	head->next=NULL;
}

void CList::Create()
{
	CNode *p, *q;
	p = head;
	q = new CNode();
	while(cin >> q->data){
		p->next = q;
		p = q;
		q = new CNode();
	}
}

void CList::Display() const
{
	CNode *p;
	p = head->next;
	while(p){
		cout<< p->data << " ";
		p = p->next;
	}
	cout << endl;
}

CList::~CList()
{
	CNode *p;    //function as a temp
	while(head){
		p = head->next; //save the pointer that is next to head
		delete head;   //free the memory that head points to
		head = p;      //move head to the next node
	}
}

int CList::getlen() const
{
	int length = 0;
	CNode *p = head->next;
	while(p)
	{
		length++;
		p = p->next;
	}
	return length;
}

bool CList::isEmpty() const
{
	return (head->next == NULL);
}

bool CList::Find(const int e) const
{
	CNode* p = head->next;
	while(p)
	{
		if(p->data == e);
		return true;
		p=p->next;
	}
	return false;
}

CNode* CList::GetNode(int i) const
{
	if(i<0 || i>getlen())
	{
		throw i;
	}
	 CNode* p = head;
	 int j = 0;
	 while(j<i){    //i is real world index, start at 1
	 	p = p->next;
	 	j++;
	 }
	 return p;
}

void CList::Insert(int i, const int e)
{
	CNode *p = head;
	CNode *node = new CNode();
	node->data = e;
	int j = 0;
	while(j < i-1){
		p = p->next;
		j++;
	}
	CNode *tmp = p->next;
	p->next = node;
	node->next = tmp;
}

void CList::Delete(int i)
{
	CNode* p = head;
	int j=0;
	while(j<i-1){
		p = p->next;
		j++;
	}
	p->next = p->next->next; 
}

void CList::Update(int i, const int e){
	CNode* p = head;
	int j = 0;
	while(j < i){
		p = p->next;
		j++;
	}
	p->data = e;
}

CNode* CList::Reverse()
{
	CNode *pre = head;
	CNode *curr = head->next;
	while(curr!=NULL){
		CNode *tmp = curr->next;
		curr->next = pre;
		pre = curr;
		curr = tmp;
	}	
	head->next = NULL;
	CNode *q = pre;
	//add new head node to the linkedlist
	while(q!=NULL){
		if(q->next->next==NULL){
			q->next == NULL;
		}
		q = q->next;
	}
	CNode *newhead = new CNode();
	newhead->next = pre;
	return newhead;
}

int main(){
	CList *link = new CList();
	link->Create();
	link->Display();
	cout<<link->getlen()<<endl;
	cout<<link->isEmpty()<<endl;
	cout<<link->Find(3)<<endl;
	try  
    {  
        cout<<(link->GetNode(3))->data<<endl;  
    }catch(int)  
    {  
        cout<<"out of bounds"<<endl;  
    } 
    link->Insert(1,888);  
    link->Display();   
    link->Insert(3,999);  
    link->Display();   
    link->Delete(6);  
    link->Display();   
    link->Reverse();  
    link->Display();   
    return 0;  
}
