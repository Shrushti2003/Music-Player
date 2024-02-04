#include<iostream>
#include<stdio.h>
using namespace std;
#include<windows.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include <iomanip>
#include<mmsystem.h>


string url;
void h_single();
void e_single();
void formalities();

class login
{
public:
    char p;
    string username = "Groot";
    string pass = "123456";         //password
//public:
    login()
    {
        //HANDLE is a data type,identifiers for various system resources, such as files, devices, or in this case, the console.
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // finds and get back(retrieves) a handle to the standard output stream, which represents the console where text is displayed.
        SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY | FOREGROUND_INTENSITY); //change the text attributes of the console, like text color and intensity.
        cout<<"\x1b[1m\x1b[3m";  // ANSI escape code for bold(\x1b[1m) and italics(\x1b[3m)
        cout<<"\x1b[97;104m";    // ANSI escape code for white(97) text on blue(104) background
        cout <<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl; //create vertical spacing
        cout<<"\x1b[Om";        // ANSI escape code to reset text formatting
        cout<<"\x1b[33;100m";
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n"; // Vertical spacing
        cout << "\t\t\t\t\t\t\t AURAL" << endl;  // Company name
        cout << "\t\t\t\t\t\t\t Echo the Extraordinary" << endl; // Tagline
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        cout<< "\x1b[Om";   //[O ->  it is an Operating System Command (OSC) sequence, m ->  terminate/end the OSC sequence and signal the end of the command.
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t Enter username: ";
        cin>>username;
        cout << "\n\n\t\t\t\t\t\t\t Enter password: ";
        for(int i=0;;)     //double semicolon = infinite loop,  Starts an infinite loop to capture the user's password character by character.
        {
            p = getch();   // <conio.h> library) to capture a single character from the user.
            if(p>='0' && p<='9')
            {
                pass[i]=p;       // ex:- if pass = 12345 , pass[0]=1, pass[1]=2, etc...
                i++;
                cout<<"*";       // To hide password
            }
            if(p =='\b' && i>=1)  //checks if the character p is the backspace character ('\b') and if the index i is greater than or equal to 1 (ex;- 5>=1,
            {
                cout<<"\b \b";        //1234\b
                i--;                  //1234
            }
            if(p == '\r')   //Enter key ('\r') and marks the end of the password input.
            {
                pass[i] = '\0'; //making it a valid C-string, by adding null terminator.
                break;          //exiting the loop
            }
        }
    }
};

int main()
{
    cout<<"\n\n\n\t To close the Program Press anywhere Ctrl+C.";
    system("color 48");     // background color, text color
    for(int i=0; i!='\n'; i++)
    {
        login obj;
        if(obj.username=="Groot" && obj.pass=="123456")
        {
            system("color 0A");
            system("color D");
            break;
        }
        else
        {
            system("CLS");
            system("color 5E");
            cout<<endl<<endl<<endl<<endl<<endl<<"\t\t Enter correct USERNAME and PASSWORD."<<endl;
        }
    }
    system("CLS");
    formalities();
    return 0;
}

void formalities()
{
    system("color 1F");
    cout << "\n\n\n\n\n\n\n\n\n\n" // Vertical spacing
         << "\t\t\t\t\t\t\t---Drop Beats, Not Bombs - WELCOME,HOMIE!---\n";

    int i;
    cout<<endl<<endl<<endl<<"\t Would you prefer to play the song using your own URL link or select a single song?"<<endl<<endl<<"\t For URL link tab 1 and for song tab 2 :";
    cout<<endl<<endl<<"\t Select your choice: ";
    cin>>i; //User choice stored here,URL:-1 or song:-2.
    system("color 2F");
    if(i==2)  // if the user chose to select a song from the list.
    {
        cout<<endl<<"\t For Hindi songs, Press 1. For English songs, Press 2 : ";
        cout<<endl<<"\t Your choice :";
        int c;
        cin>>c; //User choice stored here,either to choose between Hindi songs(1) or English songs(2).
        system("CLS");
        cout << "\n\n\n\n\n\n\n\n\n\n" // Vertical spacing
             << "\t\t\t\t\t\t\t---Drop Beats, Not Bombs - WELCOME, HOMIE!---\n";
        if(c==1)
        {
            h_single(); //Will display list of Hindi Songs.
        }
        else if(c==2)
        {
            e_single(); //Will display list of English Songs.
        }
        else
        {
            system("CLS");
            cout<<endl<<"\n\n\n\t Enter correct number.";
            formalities();
        }
    }
    else if(i==1)  //If the user chose to play a song using a URL.
    {
        system("CLS"); //console cleared
        cout << "\n\n\n\n\n\n\n\n\n\n" // Vertical spacing
             << "\t\t\t\t\t\t\t---Drop Beats, Not Bombs - WELCOME, HOMIE!---" << endl << endl << endl << endl << endl;
        cout<<"\t Enter URL : ";
        cin>>url;
        cout<<endl;
        ShellExecute(NULL,"open",url.c_str(),NULL,NULL,SW_SHOWNORMAL);
//SE:-For executing commnad,NULL:- function does not need a parent window,open:- function will open the URL url.c_str(),url.c_str():-This is the URL(web address) to be opened;converts C-style string which is required by SE function,Two NULL's:-For opening a URL,optional parameters are not needed,so NULL is passed, SW_SHOWNORMAL:-window should be opened with its default size and position.
    }
}
void e_single()
{
    system("CLS");
    cout << "\n\n\n\n\n\n\n\n\n\n" // Vertical spacing
         << "\t\t\t\t\t\t\t---Drop Beats, Not Bombs - WELCOME, HOMIE!---\n"<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    int e;
    const int width = 50; // Adjust this width as needed
    cout << left; // Align text to the left within the given width

    // Displaying the songs
    cout << setw(width) << "1. Adore You" << "2. Agora Hills" << endl;
    cout << setw(width) << "3. Bad At Love" << "4. Capsize" << endl;
    cout << setw(width) << "5. Come With Me" << "6. Cross Me (feat. Chance the Rapper & PnB Rock)" << endl;
    cout << setw(width) << "7. Daddy Issues" << "8. Echo (feat. blackbear)" << endl;
    cout << setw(width) << "9. Elastic Heart" << "10. Everybody Kanye West" << endl;
    cout << setw(width) << "11. Father Stretch My Hands Pt.1" << "12. Fire for You" << endl;
    cout << setw(width) << "13. Free (with Drew Love)" << "14. Happier" << endl;
    cout << setw(width) << "15. Hold On, We're Going Home" << "16. I Really Like You" << endl;
    cout << setw(width) << "17. I Took a Pill in Ibiza-Seeb Remix" << "18. I Wanna Love You" << endl;
    cout << setw(width) << "19. I Was Never There" << "20. All We Know" << endl;
    cout << setw(width) << "21. Landslide" << "22. Live Before I Die-Naughty Boy*Mike Posner" << endl;
    cout << setw(width) << "23. Los Angeles" << "24. Magic" << endl;
    cout << setw(width) << "25. Meant To Be" << "26. Mirrors" << endl;
    cout << setw(width) << "27. my eyes-pt.2" << "28. My Way" << endl;
    cout << setw(width) << "29. New Romantics" << "30. Ocean Eyes-Astronomyy Remix" << endl;
    cout << setw(width) << "31. One Love" << "32. One of The Girls (with JENNIE, Lily Rose Depp)" << endl;
    cout << setw(width) << "33. oui" << "34. Popular (with Playboi Carti & Madonna)" << endl;
    cout << setw(width) << "35. Pray For Me" << "36. Pumped Up Kicks" << endl;
    cout << setw(width) << "37. Ribs" << "38. Rich Love (with Seeb)" << endl;
    cout << setw(width) << "39. Roses" << "40. sdp interlude*MY EYES-Tiktok Remix" << endl;
    cout << setw(width) << "41. Selfish Love (with Selena Gomez)" << "42. Shed a Light" << endl;
    cout << setw(width) << "43. So High" << "44. Sorry" << endl;
    cout << setw(width) << "45. Suga Suga" << "46. Sunflower-Spider-Man Into the Spider-Verse" << endl;
    cout << setw(width) << "47. The Night We Met" << "48. Tightrope" << endl;
    cout << setw(width) << "49. Touch" << "50. Tumblr Girls (feat. Christoph Andersson)" << endl;
    cout << setw(width) << "51. You Know How We Do It" << endl;

    cout<<endl<<endl<<"\t Select Your choice : ";
    int c;
    cin>>c;
    system("color 60");
    if(c==1)
    {
        PlaySound(TEXT("spotifydown.com - Adore You.wav"),NULL,SND_SYNC);
    }
    else if(c==2)
    {
        PlaySound(TEXT("spotifydown.com - Agora Hills.wav"),NULL,SND_SYNC);
    }
    else if(c==3)
    {
        PlaySound(TEXT("spotifydown.com - Bad At Love.wav"),NULL,SND_SYNC);
    }
    else if(c==4)
    {
        PlaySound(TEXT("spotifydown.com - Capsize.wav"),NULL,SND_SYNC);
    }
    else if(c==5)
    {
        PlaySound(TEXT("spotifydown.com - Come With Me.wav"),NULL,SND_SYNC);
    }
    else if(c==6)
    {
        PlaySound(TEXT("spotifydown.com - Cross Me (feat. Chance the Rapper & PnB Rock).wav"),NULL,SND_SYNC);
    }
    else if(c==7)
    {
        PlaySound(TEXT("spotifydown.com - Daddy Issues.wav"),NULL,SND_SYNC);
    }
    else if(c==8)
    {
        PlaySound(TEXT("spotifydown.com - Echo (feat. blackbear).wav"),NULL,SND_SYNC);
    }
    else if(c==9)
    {
        PlaySound(TEXT("spotifydown.com - Elastic Heart.wav"),NULL,SND_SYNC);
    }
    else if(c==10)
    {
        PlaySound(TEXT("spotifydown.com - Everybody Kanye West.wav"),NULL,SND_SYNC);
    }
    else if(c==11)
    {
        PlaySound(TEXT("spotifydown.com - Father Stretch My Hands Pt. 1.wav"),NULL,SND_SYNC);
    }
    else if(c==12)
    {
        PlaySound(TEXT("spotifydown.com - Fire for You.wav"),NULL,SND_SYNC);
    }
    else if(c==13)
    {
        PlaySound(TEXT("spotifydown.com - Free (with Drew Love).wav"),NULL,SND_SYNC);
    }
    else if(c==14)
    {
        PlaySound(TEXT("spotifydown.com - Happier.wav"),NULL,SND_SYNC);
    }
    else if(c==15)
    {
        PlaySound(TEXT("spotifydown.com - Hold On, We're Going Home.wav"),NULL,SND_SYNC);
    }
    else if(c==16)
    {
        PlaySound(TEXT("spotifydown.com - I Really Like You.wav"),NULL,SND_SYNC);
    }
    else if(c==17)
    {
        PlaySound(TEXT("spotifydown.com - I Took A Pill In Ibiza - Seeb Remix.wav"),NULL,SND_SYNC);
    }
    else if(c==18)
    {
        PlaySound(TEXT("spotifydown.com - I Wanna Love You.wav"),NULL,SND_SYNC);
    }
    else if(c==19)
    {
        PlaySound(TEXT("spotifydown.com - I Was Never There.wav"),NULL,SND_SYNC);
    }
    else if(c==20)
    {
        PlaySound(TEXT("spotifydown.com - All We Know.wav"),NULL,SND_SYNC);
    }
    else if(c==21)
    {
        PlaySound(TEXT("spotifydown.com - Landslide.wav"),NULL,SND_SYNC);
    }
    else if(c==22)
    {
        PlaySound(TEXT("spotifydown.com - Live Before I Die - Naughty Boy x Mike Posner.wav"),NULL,SND_SYNC);
    }
    else if(c==23)
    {
        PlaySound(TEXT("spotifydown.com - Los Angeles.wav"),NULL,SND_SYNC);
    }
    else if(c==24)
    {
        PlaySound(TEXT("spotifydown.com - Magic.wav"),NULL,SND_SYNC);
    }
    else if(c==25)
    {
        PlaySound(TEXT("spotifydown.com - Meant To Be.wav"),NULL,SND_SYNC);
    }
    else if(c==26)
    {
        PlaySound(TEXT("spotifydown.com - Mirrors.wav"),NULL,SND_SYNC);
    }
    else if(c==27)
    {
        PlaySound(TEXT("spotifydown.com - my eyes - pt.2.wav"),NULL,SND_SYNC);
    }
    else if(c==28)
    {
        PlaySound(TEXT("spotifydown.com - My Way.wav"),NULL,SND_SYNC);
    }
    else if(c==29)
    {
        PlaySound(TEXT("spotifydown.com - New Romantics.wav"),NULL,SND_SYNC);
    }
    else if(c==30)
    {
        PlaySound(TEXT("spotifydown.com - Ocean Eyes - Astronomyy Remix.wav"),NULL,SND_SYNC);
    }
    else if(c==31)
    {
        PlaySound(TEXT("spotifydown.com - One Love.wav"),NULL,SND_SYNC);
    }
    else if(c==32)
    {
        PlaySound(TEXT("spotifydown.com - One Of The Girls (with JENNIE, Lily Rose Depp).wav"),NULL,SND_SYNC);
    }
    else if(c==33)
    {
        PlaySound(TEXT("spotifydown.com - oui.wav"),NULL,SND_SYNC);
    }
    else if(c==34)
    {
        PlaySound(TEXT("spotifydown.com - Popular (with Playboi Carti & Madonna) - Music from the HBO Original Series.wav"),NULL,SND_SYNC);
    }
    else if(c==35)
    {
        PlaySound(TEXT("spotifydown.com - Pray For Me.wav"),NULL,SND_SYNC);
    }
    else if(c==36)
    {
        PlaySound(TEXT("spotifydown.com - Pumped Up Kicks.wav"),NULL,SND_SYNC);
    }
    else if(c==37)
    {
        PlaySound(TEXT("spotifydown.com - Ribs.wav"),NULL,SND_SYNC);
    }
    else if(c==38)
    {
        PlaySound(TEXT("spotifydown.com - Rich Love (with Seeb).wav"),NULL,SND_SYNC);
    }
    else if(c==39)
    {
        PlaySound(TEXT("spotifydown.com - Roses.wav"),NULL,SND_SYNC);
    }
    else if(c==40)
    {
        PlaySound(TEXT("spotifydown.com - sdp interlude x MY EYES - Tiktok Remix.wav"),NULL,SND_SYNC);
    }
    else if(c==41)
    {
        PlaySound(TEXT("spotifydown.com - Selfish Love (with Selena Gomez).wav"),NULL,SND_SYNC);
    }
    else if(c==42)
    {
        PlaySound(TEXT("spotifydown.com - Shed a Light.wav"),NULL,SND_SYNC);
    }
    else if(c==43)
    {
        PlaySound(TEXT("spotifydown.com - So High.wav"),NULL,SND_SYNC);
    }
    else if(c==44)
    {
        PlaySound(TEXT("spotifydown.com - Sorry.wav"),NULL,SND_SYNC);
    }
    else if(c==45)
    {
        PlaySound(TEXT("spotifydown.com - Suga Suga.wav"),NULL,SND_SYNC);
    }
    else if(c==46)
    {
        PlaySound(TEXT("spotifydown.com - Sunflower - Spider-Man_ Into the Spider-Verse.wav"),NULL,SND_SYNC);
    }
    else if(c==47)
    {
        PlaySound(TEXT("spotifydown.com - The Night We Met.wav"),NULL,SND_SYNC);
    }
    else if(c==48)
    {
        PlaySound(TEXT("spotifydown.com - Tightrope.wav"),NULL,SND_SYNC);
    }
    else if(c==49)
    {
        PlaySound(TEXT("spotifydown.com - Touch.wav"),NULL,SND_SYNC);
    }
    else if(c==50)
    {
        PlaySound(TEXT("spotifydown.com - Tumblr Girls (feat. Christoph Andersson).wav"),NULL,SND_SYNC);
    }
    else if(c==51)
    {
        PlaySound(TEXT("spotifydown.com - You Know How We Do It.wav"),NULL,SND_SYNC);
    }
//PlaySound:-to play a sound,TEXT:- specifies the name of the sound file to play;It should exactly match the name of the sound file you want to play,NULL:- sound is played from a file,SND_SNYC:-sound is played synchronously,the function will wait until the entire sound has finished.
    else
    {
        system("CLS");
        cout<<endl<<"\t Enter correct number"<<endl<<endl<<endl;
        e_single();
    }
    cout << endl << endl;
    cout << "\t\t\t\t\t\t\t---THANKS FOR CHOOSING OUR SOUND JOURNEY!---" << endl;
        char a;
    cout<<"\n\n\t Ready for another go? Press 'y' or 'Y' to dive back in, or any key to journey elsewhere.:";
    cin>>a;
    if(a=='y' || a=='Y')
    {
        cout<<endl<<"\n\n\n\t For Hindi songs, Press 1. For English songs, Press 2 : ";
        cout<<endl<<"\n\n\t Your choice :";
        int c;
        cin>>c;
        if(c==1)
            h_single();
        else
            e_single();
    }
}
void h_single()
{
    system("CLS");
    cout << "\n\n\n\n\n\n\n\n\n\n" // Vertical spacing
         << "\t\t\t\t\t\t\t---Drop Beats, Not Bombs - WELCOME,HOMIE!---\n"<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    int e;
    const int width = 50; // Adjust this width as needed
    cout << left; // Align text to the left within the given widt
    // Displaying the songs
    cout << setw(width) << "1. 12 Saal" << "2. Aaoge Jab Tum" << endl;
    cout << setw(width) << "3. Aasman Ko Chukar" << "4. Abhi Na Jao Chhod Kar" << endl;
    cout << setw(width) << "5. Agar Tum Saath Ho" << "6. Aisay Kaisay" << endl;
    cout << setw(width) << "7. Ay Hairathe" << "8. Bol Na Halke Halke" << endl;
    cout << setw(width) << "9. Chidiya" << "10. Daryaa" << endl;
    cout << setw(width) << "11. Desi Kalakaar" << "12. Dildaara (Stand By Me)" << endl;
    cout << setw(width) << "13. For Aisha (Featured in _The Sky is Pink_)" << "14. Gal Mitthi Mitthi" << endl;
    cout << setw(width) << "15. Guitar Sikhda" << "16. Hona Tha Pyar" << endl;
    cout << setw(width) << "17. Issey Kehte Hain Hip Hop" << "18. It's the Time to Disco" << endl;
    cout << setw(width) << "19. Jashne-E-Bahaaraa" << "20. Jhoom-R&B Mix" << endl;
    cout << setw(width) << "21. Jiya Lage Na" << "22. Kabira" << endl;
    cout << setw(width) << "23. Kaise Ab Kahein-From _Guitar Gu_" << "24. Kalank - Title Track" << endl;
    cout << setw(width) << "25. Kalle Kalle (From _Chandigarh Kare Aashiqui_)" << "26. Kesariya" << endl;
    cout << setw(width) << "27. Kuch Is Tarah" << "28. Kun Faya Kun" << endl;
    cout << setw(width) << "29. Lover" << "30. Maahi Ve" << endl;
    cout << setw(width) << "31. Mehmaan" << "32. Mileya Mileya" << endl;
    cout << setw(width) << "33. Nazar Na Lag Jaaye (From _Stree_)" << "34. Pata Chalgea" << endl;
    cout << setw(width) << "35. Rait Zara Si (From _Atrangi Re_)" << "36. Roothe Saiyaan" << endl;
    cout << setw(width) << "37. Safarnama" << "38. Saiyaan Dil Main" << endl;
    cout << setw(width) << "39. Shri Krishna Govind Hare Murari" << "40. Still Rollin" << endl;
    cout << setw(width) << "41. Tera Zikr" << "42. Tere Naina" << endl;
    cout << setw(width) << "43. Tere Pyaar Mein" << "44. Tomar Ghore Bosot Kore" << endl;
    cout << setw(width) << "45. True Stories" << "46. Tu Hai" << endl;
    cout << setw(width) << "47. Tu Hi Hai" << "48. Tum Prem Ho - Reprise" << endl;
    cout << setw(width) << "49. Why This Kolaveri Di - The Soup of Love" << "50. Yun Hi Chala Chal" << endl;
    cout << setw(width) << "51. Zakir" << "52. Haal Kaisa Hai Janab Ka" << endl;
    cout << setw(width) << "53. Mere Angne Men" << "54. Bade Achhe Lagte Hain" << endl;

    cout<<endl<<endl<< "\t Select Your choice: ";
    int c;
    cin>>c;
    system("color 4F");
    if(c==1)
    {
        PlaySound(TEXT("spotifydown.com - 12 Saal.wav"),NULL,SND_SYNC);
    }
    else if(c==2)
    {
        PlaySound(TEXT("spotifydown.com - Aaoge Jab Tum.wav"),NULL,SND_SYNC);
    }
    else if(c==3)
    {
        PlaySound(TEXT("spotifydown.com - Aasman Ko Chukar.wav"),NULL,SND_SYNC);
    }
    else if(c==4)
    {
        PlaySound(TEXT("spotifydown.com - Abhi Na Jao Chhod Kar.wav"),NULL,SND_SYNC);
    }
    else if(c==5)
    {
        PlaySound(TEXT("spotifydown.com - Agar Tum Saath Ho.wav"),NULL,SND_SYNC);
    }
    else if(c==6)
    {
        PlaySound(TEXT("spotifydown.com - Aisay Kaisay.wav"),NULL,SND_SYNC);
    }
    else if(c==7)
    {
        PlaySound(TEXT("spotifydown.com - Ay Hairathe.wav"),NULL,SND_SYNC);
    }
    else if(c==8)
    {
        PlaySound(TEXT("spotifydown.com - Bol Na Halke Halke.wav"),NULL,SND_SYNC);
    }
    else if(c==9)
    {
        PlaySound(TEXT("spotifydown.com - Chidiya.wav"),NULL,SND_SYNC);
    }
    else if(c==10)
    {
        PlaySound(TEXT("spotifydown.com - Daryaa.wav"),NULL,SND_SYNC);
    }
    else if(c==11)
    {
        PlaySound(TEXT("spotifydown.com - Desi Kalakaar.wav"),NULL,SND_SYNC);
    }
    else if(c==12)
    {
        PlaySound(TEXT("spotifydown.com - Dildaara (Stand By Me).wav"),NULL,SND_SYNC);
    }
    else if(c==13)
    {
        PlaySound(TEXT("spotifydown.com - For Aisha (Featured in _The Sky Is Pink_).wav"),NULL,SND_SYNC);
    }
    else if(c==14)
    {
        PlaySound(TEXT("spotifydown.com - Gal Mitthi Mitthi.wav"),NULL,SND_SYNC);
    }
    else if(c==15)
    {
        PlaySound(TEXT("spotifydown.com - Guitar Sikhda.wav"),NULL,SND_SYNC);
    }
    else if(c==16)
    {
        PlaySound(TEXT("spotifydown.com - Hona Tha Pyar.wav"),NULL,SND_SYNC);
    }
    else if(c==17)
    {
        PlaySound(TEXT("spotifydown.com - Issey Kehte Hain Hip Hop.wav"),NULL,SND_SYNC);
    }
    else if(c==18)
    {
        PlaySound(TEXT("spotifydown.com - It's the Time to Disco.wav"),NULL,SND_SYNC);
    }
    else if(c==19)
    {
        PlaySound(TEXT("spotifydown.com - Jashn-E-Bahaaraa.wav"),NULL,SND_SYNC);
    }
    else if(c==20)
    {
        PlaySound(TEXT("spotifydown.com - Jhoom - R&B Mix.wav"),NULL,SND_SYNC);
    }
    else if(c==21)
    {
        PlaySound(TEXT("spotifydown.com - Jiya Lage Na.wav"),NULL,SND_SYNC);
    }
    else if(c==22)
    {
        PlaySound(TEXT("spotifydown.com - Kabira.wav"),NULL,SND_SYNC);
    }
    else if(c==23)
    {
        PlaySound(TEXT("spotifydown.com - Kaise Ab Kahein - From _Gutar Gu_.wav"),NULL,SND_SYNC);
    }
    else if(c==24)
    {
        PlaySound(TEXT("spotifydown.com - Kalank - Title Track.wav"),NULL,SND_SYNC);
    }
    else if(c==25)
    {
        PlaySound(TEXT("spotifydown.com - Kalle Kalle (From _Chandigarh Kare Aashiqui_).wav"),NULL,SND_SYNC);
    }
    else if(c==26)
    {
        PlaySound(TEXT("spotifydown.com - Kesariya.wav"),NULL,SND_SYNC);
    }
    else if(c==27)
    {
        PlaySound(TEXT("spotifydown.com - Kuch Is Tarah.wav"),NULL,SND_SYNC);
    }
    else if(c==28)
    {
        PlaySound(TEXT("spotifydown.com - Kun Faya Kun.wav"),NULL,SND_SYNC);
    }
    else if(c==29)
    {
        PlaySound(TEXT("spotifydown.com - Lover.wav"),NULL,SND_SYNC);
    }
    else if(c==30)
    {
        PlaySound(TEXT("spotifydown.com - Maahi Ve.wav"),NULL,SND_SYNC);
    }
    else if(c==31)
    {
        PlaySound(TEXT("spotifydown.com - Mehmaan.wav"),NULL,SND_SYNC);
    }
    else if(c==32)
    {
        PlaySound(TEXT("spotifydown.com - Mileya Mileya.wav"),NULL,SND_SYNC);
    }
    else if(c==33)
    {
        PlaySound(TEXT("spotifydown.com - Nazar Na Lag Jaaye (From _Stree_).wav"),NULL,SND_SYNC);
    }
    else if(c==34)
    {
        PlaySound(TEXT("spotifydown.com - Pata Chalgea.wav"),NULL,SND_SYNC);
    }
    else if(c==35)
    {
        PlaySound(TEXT("spotifydown.com - Rait Zara Si (From _Atrangi Re_).wav"),NULL,SND_SYNC);
    }
    else if(c==36)
    {
        PlaySound(TEXT("spotifydown.com - Roothe Saiyaan.wav"),NULL,SND_SYNC);
    }
    else if(c==37)
    {
        PlaySound(TEXT("spotifydown.com - Safarnama.wav"),NULL,SND_SYNC);
    }
    else if(c==38)
    {
        PlaySound(TEXT("spotifydown.com - Saiyaan Dil Main.wav"),NULL,SND_SYNC);
    }
    else if(c==39)
    {
        PlaySound(TEXT("spotifydown.com - Shri Krishna Govind Hare Murari.wav"),NULL,SND_SYNC);
    }
    else if(c==40)
    {
        PlaySound(TEXT("spotifydown.com - Still Rollin.wav"),NULL,SND_SYNC);
    }
    else if(c==41)
    {
        PlaySound(TEXT("spotifydown.com - Tera Zikr.wav"),NULL,SND_SYNC);
    }
    else if(c==42)
    {
        PlaySound(TEXT("spotifydown.com - Tere Naina.wav"),NULL,SND_SYNC);
    }
    else if(c==43)
    {
        PlaySound(TEXT("spotifydown.com - Tere Pyaar Mein.wav"),NULL,SND_SYNC);
    }
    else if(c==44)
    {
        PlaySound(TEXT("spotifydown.com - Tomar Ghore Bosot Kore.wav"),NULL,SND_SYNC);
    }
    else if(c==45)
    {
        PlaySound(TEXT("spotifydown.com - True Stories.wav"),NULL,SND_SYNC);
    }
    else if(c==46)
    {
        PlaySound(TEXT("spotifydown.com - Tu Hai.wav"),NULL,SND_SYNC);
    }
    else if(c==47)
    {
        PlaySound(TEXT("spotifydown.com - Tu Hi Hai.wav"),NULL,SND_SYNC);
    }
    else if(c==48)
    {
        PlaySound(TEXT("spotifydown.com - Tum Prem Ho - Reprise.wav"),NULL,SND_SYNC);
    }
    else if(c==49)
    {
        PlaySound(TEXT("spotifydown.com - Why This Kolaveri Di_ - The Soup of Love.wav"),NULL,SND_SYNC);
    }
    else if(c==50)
    {
        PlaySound(TEXT("spotifydown.com - Yun Hi Chala Chal.wav"),NULL,SND_SYNC);
    }
    else if(c==51)
    {
        PlaySound(TEXT("spotifydown.com - Zakir.wav"),NULL,SND_SYNC);
    }
    else if(c==52)
    {
        PlaySound(TEXT("spotifydown.com - Haal Kaisa Hai Janab Ka.wav"),NULL,SND_SYNC);
    }
    else if(c==53)
    {
        PlaySound(TEXT("spotifydown.com - Mere Angne Men.wav"),NULL,SND_SYNC);
    }
    else if(c==54)
    {
        PlaySound(TEXT("spotifydown.com - Bade Achhe Lagte Hain.wav"),NULL,SND_SYNC);
    }
    else
    {
        system("CLS");
        cout<<endl<<"\t Enter correct number"<<endl<<endl<<endl;
        h_single();
    }
    cout << endl << endl;
    cout << "\t\t\t\t\t\t\t---THANKS FOR CHOOSING OUR SOUND JOURNEY!---" << endl;
        char b;
    cout<<"\n\n\t Ready for another go? Press 'y' or 'Y' to dive back in, or any key to journey elsewhere : ";
    cin>>b;
    if(b=='y' || b=='Y')
    {
        cout<<endl<<"\t For Hindi songs, Press 1. For English songs, Press 2 : ";
        cout<<endl<<"\t Your choice :";
        int c;
        cin>>c;
        if(c==1)
            h_single();
        else
            e_single();
    }
}
