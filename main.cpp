#include <iostream>

using namespace std;

int main()
{
    cout <<"Ahlan ya user ua habibi. \n";
    int choosenumber ;
    cout <<"What do you like to do today? \n";
    cout <<"1- Cipher a message \n";
    cout <<"2- Decipher a message \n";
    cout <<"3- End \n";
    cin >> choosenumber ;
    if (choosenumber == 1 )
    {
        string name ;
        cout <<"Please enter the message to cipher: " ;
        cin.ignore();
        getline(cin, name);
        string  arrayofchar = "abcdefghijklmnopqrstuvwxyz.,";
        string morsecipher[28] = { ".- ", "-... ", "-.-. ", "-.. ", ". ", "..-. ", "--. ", ".... ", ".. ", ".--- ", "-.- ", ".-.. ", "-- ", "-. ", "--- ", ".--. ", "--.- ", ".-. ", "... ", "- ", "..- ", "...- ", ".-- ", "-..- ", "-.-- ", "--.. ", ".-.-.- ", "--..-- " };
        for (int  i = 0 ; i < name.length() ; i++)
        {
            for (int j=0 ; j< 29; j++)
            {
                if (name[i] == arrayofchar[j])
                {
                    cout << morsecipher[j];
                }
                if (name[i] == ' ')
                {
                    cout <<"   ";
                    break;
                }

            }
        }
    }
    else if (choosenumber == 2)
    {
        cout << "Notes : if you want to write more than one cipher please enter  ,  between your words .\n ";
        string cipher[800] ;
        cout <<"Enter your cipher (for example, ... --- ...,... --- ...) : ";
        for ( int i = 0 ; i < 1000 ; i++)
        {
            cin>>cipher[i];
            if (cipher[i] == ".-")
            cout << "a";
            else if (cipher[i] == "," )
                cout << "   ";             // 3 _space if the user Enter the ,
            else if (cipher[i] == "-..." )
                cout << "b";
            else if (cipher[i] == "-.-.")
                cout <<"c";
             else if (cipher[i] == "-.." )
                cout << "d";
            else if (cipher[i] == "." )
                cout << "e";
            else if (cipher[i] == "..-.")
                cout <<"f";
            else if (cipher[i] == "--.")
                cout <<"g";
            else if (cipher[i] == "...." )
                cout << "h";
            else if (cipher[i] == "..")
                cout <<"i";
             else if (cipher[i] == ".---" )
                cout << "j";
            else if (cipher[i] == "-.-" )
                cout << "k";
            else if (cipher[i] == ".-..")
                cout <<"l";
            else if (cipher[i] == "--")
                cout <<"m";
            else if (cipher[i] == "-." )
                cout << "n";
            else if (cipher[i] == "---")
                cout <<"o";
            else if (cipher[i] == ".--." )
                cout << "p";
            else if (cipher[i] == "--.-" )
                cout << "q";
            else if (cipher[i] == ".-.")
                cout <<"r";
            else if (cipher[i] == "...")
                cout <<"s";
            else if (cipher[i] == "-" )
                cout << "t";
            else if (cipher[i] == "..-")
                cout <<"u";
             else if (cipher[i] == "...-" )
                cout << "v";
            else if (cipher[i] == ".--" )
                cout << "w";
            else if (cipher[i] == "-..-")
                cout <<"x";
            else if (cipher[i] == "-.--")
                cout <<"y";
            else if (cipher[i] == "--..")
                    cout << "z";



        }

    }

    return 0;
}
