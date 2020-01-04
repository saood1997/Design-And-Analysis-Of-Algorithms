#include <iostream>
using namespace std;
struct node{
	int info;
	node *next;
};
class con_div{
	int count;
public:
	int length1,length2,*n,*p;
	node *temp,*temp1,*ptr,*head,*current;
	con_div(){
		head = current = temp = temp1 = NULL;
	}
	void insertion(){
		if(head==NULL){
			head = new node;
			cout<<"enter number :";
			cin>>head->info;
			head->next = NULL;
		}
		else{
			current = head;
			while(current->next!=NULL){
				current = current->next;
			}
			current->next = new node;
			cout<<"enter number :";
			cin>>current->next->info;
			current->next->next = NULL;
		}
	}
	void even(node *temp){
		current = temp;
		count = 0;
		while(current!=NULL){
			count = count+1;
			current = current->next;
		}
		current = temp;
		if(count%2 != 0){
			current = new node;
			current->info = 0;
			current->next = temp;
			head = current;
		}
	}
	int sum(node *temp,node *temp1){
		int sum = 0;
		for(int i=0;i<temp1->info;i++){
			sum = sum + temp->info;
		}
		return sum;
	}
	void add(node *temp,node *temp1){
		int count = 0;
		int count1 = 0;
		int count2 = 0;
		int count3 = 0;
		int count4 = 1;
		int s = 0;
		int a = 0;
		current = temp;
		ptr = temp1;
		while(current!=NULL){
			count++;
			current = current->next;
		}
		while(ptr!=NULL){
			count1++;
			ptr = ptr->next;
		}
		current = temp;
		ptr = temp1;
		int size = count*count1;
		n = new int[size];
		p = n;
		count3 = count;
		while(current!=NULL){
			ptr = temp1;
			count--;
			count1--;
			s = 0;
			a = 0;
			while(ptr!=NULL){
				count2 = count1+count;
				a = sum(current,ptr);
				for(int i = 0;i<count2;i++){
					count4 = count4*10;
				}
				for(int i = 0;i<count4;i++){
					s = s + a;
				}
				count2=0;
				*n = s;
				n = n + 1;
				a = 0;
				s = 0;
				count4 = 1;
				count--;
				ptr = ptr->next;
			}
			count = count3;
			current = current->next;
		}
		int last_sum = 0;
		n = p;
		for(int i = 0;i<size;i++){
			last_sum = last_sum+*n;
			n = n+1;
		}
		cout<<"sum = "<<last_sum<<endl;
	}
};
int main(){
	con_div c1,c2,c;
	cout<<"Enter length of num1"<<endl;
	cin>>c1.length1;
	for(int i = 0;i<c1.length1;i++){
		c1.insertion();
	}
	c1.even(c1.head);
	cout<<"Enter length of num2"<<endl;
	cin>>c2.length2;
	for(int i = 0;i<c2.length2;i++){
		c2.insertion();
	}
	c2.even(c2.head);
	c.add(c1.head,c2.head);
}




