#include <iostream>
using namespace std;

class Publication
{
protected:
    string title;

public:
    Publication(string t)
    {
        title = t;
    }

    void print()
    {
        cout << "Title: " << title << endl;
    }
};

class Book : public Publication
{
protected:
    int accession_no;

public:
    Book(string t, int a) : Publication(t)
    {
        accession_no = a;
    }

    void print()
    {
        Publication::print();
        cout << "Accession Number: " << accession_no << endl;
    }
};

class Magazine : public Publication
{
protected:
    int volume_no;

public:
    Magazine(string t, int v) : Publication(t)
    {
        volume_no = v;
    }

    void print()
    {
        Publication::print();
        cout << "Volume Number: " << volume_no << endl;
    }
};

class Journal : public Book, public Magazine
{
public:
    Journal(string t, int a, int v)
        : Book(t, a), Magazine(t, v)
    {
    }

    void print()
    {
        Book::print();
        Magazine::print();
    }
};

int main()
{
    Journal j("IEEEOOP", 681.3, 1);
    j.print();
    return 0;
}
