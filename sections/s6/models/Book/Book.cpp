//
// Created by dustinkgreco on 2/26/22.
//

#include <iostream>
#include "Book.h"

Book::Book(string author, string title, string genre, int numPages)
{
    this->author = author;
    this->title = title;
    this->genre  = genre;
    this->numPages = numPages;
}

string Book::getAuthor() const
{
    return this->author;
}

string Book::getTitle() const
{
    return this->title;
}

string Book::getGenre() const
{
    return this->genre;
}

int Book::getNumPages() const
{
    return this->numPages;
}

void Book::printBookDetails() const
{
    cout << "Referencing: " << this->getTitle() << endl;
    cout << "Author: " << this->getAuthor() << endl;
    cout << "Genre: " << this->getGenre() << endl;
    cout << "Number of Pages: " << this->getNumPages() << endl;
}