#include <iostream>
#include <cstring>
using namespace std;
// pure virtual fucntion 
// abstract base class is somthing that has atleast one pure virtual function we make after inheriting classes from abstract class and use therir obj dont create obj from abstact class


class CWH
{
protected:
    string title;
    float rating;
public:
    CWH(string s, float r)
    {
        title = s; // string function that copyies title into s;
        rating = r;
    }
    // void display(){cout<<"bogus code";}
    virtual void display() = 0; //-->do nothing function/pure virtual function
};



class CWHVideo : public CWH
{
    float videolength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }
    void display()
    {   cout<<endl<<endl;
        cout << "this is an amazing video with title " <<title<< endl;
        cout << "Rating : " << rating << "out of 5 stars" << endl;
        cout << "lenghtht of thiis video is " << videolength << "minutes" << endl
             << endl;
    }
};



class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }

    void display()
    {
        cout << "this is an amazing text tutorial with title " <<title<< endl;
        cout << "Rating of text tutorial : " << rating << "out of 5 stars" << endl;
        cout << "number of words of this tutorial has is " << words;
       cout<<endl<<endl;
    }
};





int main()
{
    string title;
    float rating, vlen;
    int words;

    // for CWHVideo
    title = "django tutorial ";
    vlen = 4.56;
    rating = 3.5;
    CWHVideo djVideo(title, rating, vlen);
    // djVideo.display();

    // for CWHText
    title = "django text tutorial ";
    rating = 4.5;
    words = 789;
    CWHText djtext(title, rating, words);
    // djtext.display();

    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}


