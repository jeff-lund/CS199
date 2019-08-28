struct node
{
    int value;
    node * next;
};

class linked_list
{
    public:
        linked_list();
        void display();
        void add_front(int);
        void add_back(int);
    private:
        node * head;
};
