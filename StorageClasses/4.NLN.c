static int i = 10;

int next() {
    return (i += 1);
}

int last () {
    return (i -= 1);
}

int new(i)

int i;
{
    static int j = 5;
    return (i = j += i);
}