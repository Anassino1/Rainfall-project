main function

struct node {
    int value;
    char *buffer;
};

int main(int ac, char **av)
{
    node *a = malloc(8);
    a->value = 1;
    a->buffer = malloc(8);

    node *b = malloc(8);
    b->value = 2;
    b->buffer = malloc(8);

    strcpy(a->buffer, av[1]);
    strcpy(b->buffer, av[2]);

    puts("~~");
}