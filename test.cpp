#include <iostream>
#include <windows.h>

using namespace std;

class Text {
    private: 
    string ingressText;

    public:
    void setText (string text){
        ingressText = text;
    }
    string getText (){
        return ingressText;
    }
};

int main(int argc, char* argv[])
{
    Text* text = new Text();
    cout <<"inserte texto: " <<endl;
    string value;
    cin>>value;
    text->setText(value);
    system ("CLS");
    cout<<text->getText();
    system ("pause");
    
        return 0;
}