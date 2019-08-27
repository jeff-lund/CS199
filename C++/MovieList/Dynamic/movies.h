#define RESET "\x1B[0m"
#define GREEN "\x1B[32m"
#define RED "\x1B[31m"

const int STARS = 20;
const int SIZE = 100;
struct movie
{
    char title;
    char description;
    char rating;
    char genre;
};

class movie_list
{
  public:
    movie_list(int);
    ~movie_list();
    void add();
    void remove_title(const char*);
    void display();
    void load_collection();
    void store_collection();
  private:
    movie * my_movies;
    int num_movies;
    int max_size;
};

void read_movie(movie&);
void display_movie(movie&);
int correct(void);
void starprint(int);
