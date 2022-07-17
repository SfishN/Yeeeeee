# include <iostream>
using namespace std;

struct Node {
	int val;
	Node* next;
};

Node* add(Node* l, int n) {

	Node* tmp = new Node;

	tmp->val = n;
	tmp->next = l;

	return tmp;

}

void NodeAdd(int a, Node*& head) {

	Node* tmp = new Node;

	tmp->val = a;
	tmp->next = head;

	head = tmp;
}

bool replace_list(int e, int n, Node* l, int all) {
	int count = 0;
	while (l) {
		if (l-> val == e) {
			l-> val = n;
			count++;
			if (all == 0) {
				return 1;
			}
		}
		l = l->next;
	}
	if (count == 0) {
		return 0;
	}
	else {
		return 1;
	}
}

int length(Node* l) {
	if (l == nullptr)	return 0;
	return 1 + length(l->next);
}

bool search(int e, Node* l) {
	if (l == nullptr) return 0;
	if (l->val == e) return 1;
	return search(e, l->next);
}

Node* reversed_copy_list(Node* l) {
	Node* head = nullptr;

	while (l){
		head = add(head,l->val);
		l = l -> next;
	}

	return head;
}

int main() {
	Node* head = nullptr;

	NodeAdd(2, head);
	NodeAdd(3, head);
	NodeAdd(4, head);
	NodeAdd(35, head); 
	NodeAdd(2, head);
	NodeAdd(11, head);

	/*head = add(head, 12);*/

	/*tmp->val = 1;
	tmp->next = head;
	head = tmp;

	tmp = new Node;
	tmp->val = 2;
	tmp->next = head;

	head = tmp;*/
	
	int num = 27;

	Node* p1 = head;

	//cout<< replace_list(2, 0, head, 1);

	//head = reversed_copy_list(head);

	cout << length(head) << " " << search(2, head)<<"\n";

	while (head) {
		cout << (*head).val << " ";
		head = head -> next;
	}	
}

