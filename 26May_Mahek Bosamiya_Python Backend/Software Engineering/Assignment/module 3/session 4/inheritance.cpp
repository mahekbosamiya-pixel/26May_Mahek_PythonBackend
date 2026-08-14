
#include <iostream>
using namespace std;


class SocialMediaUser
{
public:
    string username;
    int followers;

    void displayProfile()
    {
        cout << "Username: " << username << endl;
        cout << "Followers: " << followers << endl;
    }
};


class YouTuber : public SocialMediaUser
{
public:
    string channelName;

    void uploadVideo(string title)
    {
        cout << "Video " << title << " uploaded to " << channelName << endl;
    }
};

// Podcaster inherits SocialMediaUser
class Podcaster : public SocialMediaUser
{
public:
    string podcastName;

    void publishEpisode(string episodeTitle)
    {
        cout << "Episode " << episodeTitle
             << " published on " << podcastName << endl;
    }
};


class GamingYouTuber : public YouTuber
{
public:
    void streamGame(string gameName)
    {
        cout << username << " is now streaming "
             << gameName << " on " << channelName << endl;
    }
};


class InstagramInfluencer : public SocialMediaUser
{
public:
    void postStory(string storyTitle)
    {
        cout << username << " posted a new story: "
             << storyTitle << endl;
    }
};

int main()
{
    
    YouTuber y;
    y.username = "TechGuy";
    y.followers = 5000;
    y.channelName = "Tech World";

    y.displayProfile();
    y.uploadVideo("C++ Tutorial");

    cout << endl;

    
    Podcaster p;
    p.username = "John";
    p.followers = 3000;
    p.podcastName = "Tech Talks";

    p.displayProfile();
    p.publishEpisode("Episode 10");

    cout << endl;

    
    GamingYouTuber g;
    g.username = "GamerX";
    g.followers = 10000;
    g.channelName = "GamerX Gaming";

    g.displayProfile();
    g.uploadVideo("GTA 5");
    g.streamGame("Minecraft");

    cout << endl;

    // InstagramInfluencer object
    InstagramInfluencer i;
    i.username = "FashionGirl";
    i.followers = 8000;

    i.displayProfile();
    i.postStory("New Outfit");

    return 0;
}


