#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file("my_fav_songs.txt");

    file<<"Perfect"<<endl;
    file<<"Believer"<<endl;
    file<<"Shape of You"<<endl;
    file<<"Let Me Down Slowly"<<endl;
    file<<"Night Changes"<<endl;

    file.close();

    cout<<"Songs written to file.";

    return 0;
}
