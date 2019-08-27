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
    private:
        node * head;
};
