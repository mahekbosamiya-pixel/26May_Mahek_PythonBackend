#include<iostream>
using namespace std;

class FlipkartSearch
{
public:
    void searchProduct(string productName)
    {
        cout<<"Searching for: "<<productName<<endl;
    }

    void searchProduct(string productName, string category)
    {
        cout<<"Searching for: "<<productName;
        cout<<" in category: "<<category<<endl;
    }
};

int main()
{
    FlipkartSearch s;

    s.searchProduct("Laptop");
    s.searchProduct("Laptop","Electronics");

    return 0;
}
