// Print elements of linked lists
//Insert the node at the tail of linked list 
 SinglyLinkedListNode *temp= (struct SinglyLinkedListNode*)malloc(sizeof(struct SinglyLinkedListNode));
    temp->data = data;
    temp->next = NULL;

    if(head==NULL){
        head=temp;
        return head;
    }
    SinglyLinkedListNode* temp2 = head;
    while(temp2->next != NULL) temp2 = temp2>next;
    temp2->next = temp;
    return head;

//Insert a node at nth position from start
SinglyLinkedListNode* temp = (struct SinglyLinkedListNode*)malloc(sizeof(struct SinglyLinkedListNode));
    temp->data = data;
    temp->next = NULL;

    if(position == 1){
        temp->next= head;
        head = temp;
        return head;
    }

    SinglyLinkedListNode* temp2 = head;
    for(auto i=0;i<position-1;i++){
        temp2 = temp2->next;
    }
    temp->next = temp2->next;
    temp2->next = temp;
    return head;

//Delete a node 
SinglyLinkedListNode* temp= head;
    if(position == 0){
        head = temp->next;
        delete(temp);
        return head;
    }
    
    for(auto i=0;i<position-1;i++){
        temp=temp->next;
    }
    SinglyLinkedListNode* temp2 = temp->next;
    temp->next = temp2->next;
    delete(temp2);
    return head;

//reverse a linked list - iterative approach
SinglyLinkedListNode *current,*next,*prev;
	if(head == NULL) return NULL;
	current = head;
	prev = NULL;
	while(current!=NULL){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
	return head;

//Compare 2 linked list
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2){
	if(head1 !=NULL && head2!=NULL){
        if(head1->data == head2->data){
        return compare_lists(head1->next,head2->next);
        }
        else return false;
    }
    
    if(head1 == NULL && head2 == NULL){
        return true;
    }
    return false;

//merge 2 sorted linked list

 if(head1 == NULL && head2 == NULL) return NULL;
    else if(head1 == NULL) return head2;
    else if(head2 == NULL) return head1;

    if(head2->data<head1->data){
        head2->next= mergeLists(head2->next,head1);
    }
    else{
        SinglyLinkedListNode* temp = head1;
        head1 = head1->next;
        temp->next = head2;
        head2 = temp;
        head2->next = mergeLists(head2->next,head1);
        
    }
    return head2;

//Delete duplicate values from linked list
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    if(head == NULL) return NULL;
    SinglyLinkedListNode *current,*temp;
    current = head;
    while(current->next!=NULL){
        temp = current->next; 
        if(current->data!=temp->data){
            current=current->next;
        }
        else{
            current->next = temp->next;
            delete(temp);
        }
    }
    return head;
    
}

//Cycle detection 
bool has_cycle(SinglyLinkedListNode* head){
	SinglyLinkedListNode* fast = head->next;
	SinglyLinkedListNode* slow = head;

	while(fast!=slow){
		if(fast->data != slow->data) return false;

		slow = slow->next;
		fast = fast->next->next;

	} 
	return true;
}

//merge point of 2 linked list 
//solution complexity - O(m log n + n log n)

//first, we calculate the length of list
int length(SinglyLinkedListNode* head){
	int len = 0;
	while(head!=null){
		len++;
		head = head->next; 
	}
	return len;
}

int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2){
	set<SinglyLinkedListNode*> addressB;
	int m = length(head1);
	int n = length(head2);

	for(int i=0;i<n;i++){
		addressB.insert(head2);
		head2 = head2->next;
	}
	for(int j=0;j<m;j++){
		if(addressB.find(head1) != addressB.end()){
			return head->data;
		}
		head1 = head1->next;

	}
	return 0;

}