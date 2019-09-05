struct node
{
    int value;
    node * next;
};

class linked_list
{
    public:
        linked_list();
        ~linked_list();
        void display();
        void add_front(int);
        void add_back(int);
        // Class problems
        void display_last(void);
        void display_alternating(void);
        void insert_second(int);
        void insert_behind_tail(int);
        // Day 2 functions
        void add_sorted(int);
        void remove(int);
        void remove_rec(int);
        void remove_r(node **, int);
        // Final problems
        int count(void);
        void insert_middle(int);
        void remove_three(void);
        void insert_eo(int);
        void reverse();
    private:
        node * head;
        void insert_even(int);
        void insert_odd(int);
};
