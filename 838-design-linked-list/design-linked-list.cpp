class MyLinkedList {
public:
    class Node {
    public:
        int data;
        Node* next;
        Node(int val) {
            data = val;
            next = NULL;
        }
    };
    Node* head;
    MyLinkedList() { head = NULL; }

    int get(int index) {
        Node* temp = head;
        int count = 0;
        while (temp != NULL) {
            if (count == index) {
                return temp->data;
            }

            temp = temp->next;
            count++;
        }
        return -1;
    }

    void addAtHead(int val) {
        Node* New = new Node(val);
        New->next = head;
        head = New;
    }

    void addAtTail(int val) {
        Node* New = new Node(val);

        if (head == NULL) {
            head = New;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = New;
    }
    void addAtIndex(int index, int val) {
        if (index < 0) {
            return;
        }
        if (index == 0) {
            addAtHead(val);
            return;
        }
        Node* temp = head;
        int count = 0;
        while (temp != NULL && count < index - 1) {
            temp = temp->next;
            count++;
        }
        if (temp == NULL) {
            return;
        }
        Node* New = new Node(val);
        New->next = temp->next;
        temp->next = New;
    }
    void deleteAtIndex(int index) {
        if (index < 0 || head == NULL) {
            return;
        }
        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* temp = head;
        int count = 0;
        while (temp != NULL && count < index - 1) {
            temp = temp->next;
            count++;
        }
        if (temp == NULL || temp->next == NULL) {
            return;
        }
        Node* del = temp->next;
        temp->next = del->next;
        delete del;
    }
};

    /**
     * Your MyLinkedList object will be instantiated and called as such:
     * MyLinkedList* obj = new MyLinkedList();
     * int param_1 = obj->get(index);
     * obj->addAtHead(val);
     * obj->addAtTail(val);
     * obj->addAtIndex(index,val);
     * obj->deleteAtIndex(index);
     */