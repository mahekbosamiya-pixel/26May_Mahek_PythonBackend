#include<iostream>
using namespace std;

class SocialMediaUploader
{
public:
    virtual void uploadContent()
    {
        cout<<"Uploading content"<<endl;
    }
};

class InstagramUploader : public SocialMediaUploader
{
public:
    void uploadContent()
    {
        cout<<"Uploading photo or reel on Instagram"<<endl;
    }
};

class YouTubeUploader : public SocialMediaUploader
{
public:
    void uploadContent()
    {
        cout<<"Uploading video on YouTube"<<endl;
    }
};

int main()
{
    SocialMediaUploader *i=new InstagramUploader();
    SocialMediaUploader *y=new YouTubeUploader();

    i->uploadContent();
    y->uploadContent();

    return 0;
}
