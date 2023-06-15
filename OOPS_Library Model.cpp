#include<iostream>
using namespace std ;


// Define a base class called Material to represent all types of materials
class Material {
protected:
    std::string title;  // Title of the material
    
public:
    // Constructor to initialize the title of the material
    Material(std::string title) {
        this->title = title;
    }
    
    // Virtual function to display the details of the material
    virtual void display() = 0;
};


// Define a derived class called Book to represent the book material
class Book : public Material {
private:
    std::string author;  // Author of the book
    std::string isbn;    // ISBN number of the book
    int numPages;        // Number of pages in the book
    
public:
    // Constructor to initialize the derived class variables
    Book(std::string title, std::string author, std::string isbn, int numPages)
        : Material(title) {
        this->author = author;
        this->isbn = isbn;
        this->numPages = numPages;
    }
    
    // Override the display function for the book
    void display() override {
        std::cout << "Book: " << title << " by " << author << ", ISBN " << isbn << ", " << numPages << " pages" << std::endl;
    }
};


// Define a derived class called Magazine to represent the magazine material
class Magazine : public Material {
private:
    std::string publisher;      // Publisher of the magazine
    std::string issueNumber;    // Issue number of the magazine
    std::string publicationDate;// Publication date of the magazine
    
public:
    // Constructor to initialize the derived class variables
    Magazine(std::string title, std::string publisher, std::string issueNumber, std::string publicationDate)
        : Material(title) {
        this->publisher = publisher;
        this->issueNumber = issueNumber;
        this->publicationDate = publicationDate;
    }
    
    // Override the display function for the magazine
    void display() override {
        std::cout << "Magazine: " << title << " by " << publisher << ", issue " << issueNumber << ", " << publicationDate << std::endl;
    }
};
int main() {
    // Create instances of each material class
    Book book("The C++ Programming Language", "Bjarne Stroustrup", "978-0321563842", 1376);
    Magazine magazine("National Geographic", "National Geographic Society", "March 2023", "March 1, 2023");
    
    // Call the display function for each material
    book.display();
    magazine.display();
    
    return 0;
}