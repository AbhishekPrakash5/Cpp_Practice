#include <iostream>
#include <cstdlib>

using namespace std;

struct node
{
    int data;
    struct node* next;
};

struct node* head = NULL;

int length()//if not global then (struct node* head)
{
	struct node* temp = head;
	int count=0;
	while(temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return count;
}
void atend()
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    cout<<"Enter Data for node : ";
    cin>>temp->data;
    temp->next = NULL;

    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        struct node* curr;
        curr = head;
        while(curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = temp; 
    }
}

void atfront()
{
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	cout<<"Enter data for first node : ";
	cin>>temp->data;
	temp->next = NULL;
	if(head == NULL)
	{
		head = temp;
	}
	else
	{
		temp->next = head;
		head = temp;
	}
	
}

void afterindex()
{
	struct node* temp;
	int pos,count=1;
	cout<<"Enter position to insert after : ";
	cin>>pos;
	
	if(pos>length())
	{
		cout<<"Invalid Position ! Currently list has "<<length()<<" nodes.\n";
	}
	else
	{
	 	struct node *curr;
		curr = head;
	
		while(count < pos)
		{
			curr = curr->next;
			count++;
		}
		
		temp = (struct node*)malloc(sizeof(struct node));
		cout<<"Enter data for insertion : ";
		cin>>temp->data;
		
		temp->next = curr->next;
		curr->next = temp;
		
	}	
}
 
void del()
{
	struct node *temp;
	int pos;
	cout<<"Enter position to delete the element : ";
	cin>>pos;
	if(pos > length())
	{
		cout<<"Invaid index ! No. of elements is "<<length();
	}
	else if(pos == 1)
	{
		temp = head;
		head = temp->next;
		temp->next = NULL;
		free(temp);	 
	}
	else
	{
		struct node *p=head, *q;
		int count = 1;
		while(count < (pos-1))// we need to delete that particular position so stopping at pos-1
		{
			p =  p->next;
			count++;
		}
		q = p->next;
		p->next = q->next;
		q->next = NULL;
		free(q);
	
	}
	
}

int search()
{
	int n,count=1;
	cout<<"Enter data to search : ";
	cin>>n;
	
	struct node* temp;
	//temp = new node;
	temp = head;
	while(temp != NULL)
	{
		if(temp->data == n)
		{
			cout<<"Data Found at position : "<<count;
			return 0;
		}
		else
		{
			temp = temp->next;
			count++;
		}
	}
	cout<<"Data Not Found !";
}

void display()
{
    struct node* temp;
    temp = head;
    if(temp == NULL)
    {
        cout<<"List is Empty\n";
    }
    else
    {
        while(temp != NULL)
        {
            cout<<(temp->data)<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
}

	
int main() {
    atend();
    atend();
    atend();
    atend();
    atfront();
    display();
    afterindex();
    display();
	del();
	search();
    display();
    
    return 0;
}
