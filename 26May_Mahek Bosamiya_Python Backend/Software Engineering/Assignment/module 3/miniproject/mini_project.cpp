#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Content
{
public:
    string title;
    string platform;
    int views;
    string status;

    void display()
    {
        cout << title << " - " << platform << endl;
    }
};

Content c[50];
int count = 0;

// Read data from file
void readFile()
{
    ifstream file("content_list.txt");
    count = 0;

    while (getline(file, c[count].title))
    {
        getline(file, c[count].platform);
        file >> c[count].views;
        file.ignore();
        getline(file, c[count].status);

        count++;
    }

    file.close();
}

// Save all data to file
void saveFile()
{
    ofstream file("content_list.txt");

    for (int i = 0; i < count; i++)
    {
        file << c[i].title << endl;
        file << c[i].platform << endl;
        file << c[i].views << endl;
        file << c[i].status << endl;
    }

    file.close();
}

// Add new content
void addContent()
{
    cin.ignore();

    cout << "Enter title: ";
    getline(cin, c[count].title);

    cout << "Enter platform: ";
    getline(cin, c[count].platform);

    cout << "Enter views: ";
    cin >> c[count].views;

    cin.ignore();

    cout << "Enter status: ";
    getline(cin, c[count].status);

    count++;

    saveFile();

    cout << "Content added successfully!\n";
}

// Display content
void displayContent()
{
    readFile();

    if (count == 0)
    {
        cout << "No content found.\n";
        return;
    }

    cout << "\nContent List:\n";

    for (int i = 0; i < count; i++)
    {
        cout << i + 1 << ". ";
        c[i].display();
    }
}

// Update status
void updateStatus()
{
    readFile();

    displayContent();

    if (count == 0)
        return;

    int number;

    cout << "\nEnter content number: ";
    cin >> number;

    if (number < 1 || number > count)
    {
        cout << "Invalid number!\n";
        return;
    }

    cin.ignore();

    cout << "Enter new status: ";
    getline(cin, c[number - 1].status);

    saveFile();

    cout << "Status updated successfully!\n";
}

// Delete content
void deleteContent()
{
    readFile();

    displayContent();

    if (count == 0)
        return;

    int number;

    cout << "\nEnter content number to delete: ";
    cin >> number;

    if (number < 1 || number > count)
    {
        cout << "Invalid number!\n";
        return;
    }

    for (int i = number - 1; i < count - 1; i++)
    {
        c[i] = c[i + 1];
    }

    count--;

    saveFile();

    cout << "Content deleted successfully!\n";

    displayContent();
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== CONTENT MANAGER =====\n";
        cout << "1. Add Content\n";
        cout << "2. Display Content\n";
        cout << "3. Update Status\n";
        cout << "4. Delete Content\n";
        cout << "5. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addContent();
            break;

        case 2:
            displayContent();
            break;

        case 3:
            updateStatus();
            break;

        case 4:
            deleteContent();
            break;

        case 5:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}
