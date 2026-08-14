
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file("wishlist.txt");

    string product;
    float price;

    for(int i=1;i<=3;i++)
    {
        cout<<"Enter product name: ";
        getline(cin,product);

        cout<<"Enter price: ";
        cin>>price;
        cin.ignore();

        file<<product<<"|"<<price<<endl;
    }

    file.close();

    ifstream readFile("wishlist.txt");

    cout<<"\nWishlist:"<<endl;

    while(getline(readFile,product,'|'))
    {
        readFile>>price;
        readFile.ignore();

        cout<<"Product: "<<product<<"  Price: "<<price<<endl;
    }

    readFile.close();

    return 0;
}


