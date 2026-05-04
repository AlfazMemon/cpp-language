#include <iostream>
using namespace std;


//  Abstract Class
class LibraryItem {
private:
    string title;
    string author;
    string dueDate;

public:
    // Setters 
    void setTitle() {
        cout << "Enter Title: ";
        cin >> title;
    }

    void setAuthor() {
        cout << "Enter Author: ";
        cin >> author;
    }

    void setDueDate() {
        cout << "Enter Due Date: ";
        cin >> dueDate;
    }

    // Getters
    string getTitle() { return title; }
    string getAuthor() { return author; }
    string getDueDate() { return dueDate; }

    // Pure Virtual Functions
    virtual void checkOut() = 0;
    virtual void returnItem() = 0;
    virtual void displayDetails() = 0;

    virtual ~LibraryItem() {}
};

// 🔷 Book Class
class Book : public LibraryItem {
private:
    int pages;

public:
    Book() {
        setTitle();
        setAuthor();
        setDueDate();

        cout << "Enter Pages: ";
        cin >> pages;

        if (pages < 0)
            throw "Invalid pages!";
    }

    void checkOut() override {
        cout << "Book Checked Out: " << getTitle() << endl;
    }

    void returnItem() override {
        cout << "Book Returned: " << getTitle() << endl;
    }

    void displayDetails() override {
        cout << "\n[Book]\nTitle: " << getTitle()
             << "\nAuthor: " << getAuthor()
             << "\nDue Date: " << getDueDate()
             << "\nPages: " << pages << endl;
    }
};

//  DVD Class
class DVD : public LibraryItem {
private:
    int duration;

public:
    DVD() {
        setTitle();
        setAuthor();
        setDueDate();

        cout << "Enter Duration: ";
        cin >> duration;

        if (duration < 0)
            throw "Invalid duration!";
    }

    void checkOut() override {
        cout << "DVD Checked Out: " << getTitle() << endl;
    }

    void returnItem() override {
        cout << "DVD Returned: " << getTitle() << endl;
    }

    void displayDetails() override {
        cout << "\n[DVD]\nTitle: " << getTitle()
             << "\nAuthor: " << getAuthor()
             << "\nDue Date: " << getDueDate()
             << "\nDuration: " << duration << " mins" << endl;
    }
};

//  Magazine Class
class Magazine : public LibraryItem {
private:
    int issueNumber;

public:
    Magazine() {
        setTitle();
        setAuthor();
        setDueDate();

        cout << "Enter Issue Number: ";
        cin >> issueNumber;

        if (issueNumber < 0)
            throw "Invalid issue number!";
    }

    void checkOut() override {
        cout << "Magazine Checked Out: " << getTitle() << endl;
    }

    void returnItem() override {
        cout << "Magazine Returned: " << getTitle() << endl;
    }

    void displayDetails() override {
        cout << "\n[Magazine]\nTitle: " << getTitle()
             << "\nAuthor: " << getAuthor()
             << "\nDue Date: " << getDueDate()
             << "\nIssue No: " << issueNumber << endl;
    }
};

//  Main Function
int main() {
    LibraryItem *items[10];
    int count = 0;
    int choice;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Add Book\n2. Add DVD\n3. Add Magazine\n";
        cout << "4. Display All\n5. Check Out\n6. Return Item\n0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        try {
            switch (choice) {
                case 1:
                    items[count++] = new Book();
                    break;

                case 2:
                    items[count++] = new DVD();
                    break;

                case 3:
                    items[count++] = new Magazine();
                    break;

                case 4:
                    for (int i = 0; i < count; i++) {
                        items[i]->displayDetails();
                    }
                    break;

                case 5: {
                    int index;
                    cout << "Enter index: ";
                    cin >> index;
                    index = index - 1;
                    items[index]->checkOut();
                    break;
                }

                case 6: {
                    int index;
                    cout << "Enter index: ";
                    cin >> index;
                    index = index - 1;
                    items[index]->returnItem();
                    break;
                }

                case 0:
                    cout << "Exiting..."<<endl;
                    break;

                default:
                    cout << "Invalid choice!"<<endl;
            }

        } catch (const char* msg) {
            cout << "Error: " << msg << endl;
        }

    } while (choice != 0);

    // Memory cleanup
    for (int i = 0; i < count; i++) {
        delete items[i];
    }

    return 0;
}