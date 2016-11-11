class Picture {
  public:
    void add(Shape * sp) {
        ShapeLinkedList * p = head;
        ShapeLinkedList * temp = new ShapeLinkedList(sp, NULL);

        if (head == NULL) {
            head = temp;
        } else {
            while(p->next != NULL) {
                p = p -> next;
            }
            p -> next = temp;
        }
    }

    void drawAll() {
        ShapeLinkedList * p = head;
        while(p != NULL) {
            p->info->draw();
            cout << endl << endl;
            p = p->next;
        }
    }

    ~Picture() {
        deleteNode(head);
    }


    double totalArea() {
        ShapeLinkedList * p = head;
        double totalArea = 0;
        while(p != NULL) {
            totalArea += p->info->area();
            p = p->next;
        }
        return totalArea;
    }

    private:
        // inner class to implement linked list
        class ShapeLinkedList
        {
        public:
            Shape * info;
            ShapeLinkedList * next;
            ShapeLinkedList( Shape * newInfo, ShapeLinkedList * newNext = NULL)
                    : info(newInfo), next( newNext )
            {
            }
        };

        void deleteNode(ShapeLinkedList * node) {
            if (node != NULL) {
                deleteNode(node->next);
                delete node->info;
                delete node;
            }
        }
        ShapeLinkedList * head;
};
