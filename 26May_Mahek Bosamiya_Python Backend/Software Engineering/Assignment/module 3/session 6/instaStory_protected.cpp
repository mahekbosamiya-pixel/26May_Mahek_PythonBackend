#include<iostream>
using namespace std;

class InstaStory
{
protected:
    int storyViews;
};

class SponsoredStory : public InstaStory
{
public:
    void setViews(int views)
    {
        storyViews=views;
    }

    void displayViews()
    {
        cout<<"Story Views: "<<storyViews<<endl;
    }
};

int main()
{
    SponsoredStory s;

    s.setViews(5000);
    s.displayViews();

    return 0;
}
