//Name: Michael robert A.Maritana
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void promptandwait();
void PlayGame();
void Scores(int score);
void EraseData(int score);
int score = 0;

int main()
{

    int ch, wait = 0, temp;
    
    do
    {

        system("cls");
        cout << " << WELCOME TO SQUID GAME, PLEASE CHOOSE BELOW >>" << endl;
        cout << " [1] Game start " << endl;
        cout << " [2] Results" << endl;
        cout << " [3] Clear data files" << endl;
        cout << " [0] Exit" << endl;
        cout << " Please select an option! : ";
        cin >> ch;

        switch(ch)
        {
            case 1:
            {
                PlayGame();
                promptandwait();
                break;
            }
            case 2:
            {
                Scores(score);
                promptandwait();
                break;
            }
            case 3:
            {
                EraseData(score);
                promptandwait();
                break;
            }
            case 0:
            {
                cout << "Did you have fun?.....IF YES THANK YOU!";
                return 0;
                break;
            }
            default:
            {
                cout << "Input is invalid try again ";
                promptandwait();
                break;
            }
        }

    }while(wait == 0);
}

void promptandwait()
{

    cin.ignore();
    cout << "\nPress Enter Continue...";
    cin.get();

}

void PlayGame()
{

    string name;
    cout << "<---------Enter your name or alias:  --------->      ";
    cin >> name;

    string list[34]{"[A] Bill michael", "[B] Billy crawford", "[C] Bill gates", 
  "[A] Jack ma ", "[B] Bill gates", "[C] Xilong muskzxc", 
  "[A] Brin and Page ", "[B] Ben and Ben", "[C] Xiao and Nima", 
  "[A] Jesus christ ", "[B] Ada lovelace", "[C] Dubidubidapdap", 
  "[A] Steve homeless ", "[B] Steve jobs","[C] steve has no job",
  "[A] Steve Chen, Chad Hurley, and Jawed Karim. ", "[B] Isko moreno , Leni robredo and Bong-bong marcos","[C]Yin yang ,Ligma bowls and ship wreck"};
  
   char ans;
   int score = 0;

   cout << "HE IS THE FOUNDER OF MICROSOFT? " << endl;
   cout << list[0] << endl;
   cout << list[1] << endl;
   cout << list[2] << endl;
   cin >> ans;

   if(ans == 'C' || ans == 'c')
   {
       cout << " <---------Great it is correct ^_^ --------->" << endl;
       score ++;
   }

   else{
       cout << " Better luck next time :( " << endl;
   }

   cout << "NO.1 RICHEST PERSON IN THE WORLD" << endl;
   cout << list[3] << endl;
   cout << list[4] << endl;
   cout << list[5] << endl;
   cin >> ans;

   if(ans == 'B' || ans == 'b')
   {
       cout << " <---------Great it is correct ^_^ --------->" << endl;
       score ++;
   }

   else{
       cout << " Better luck next time :( " << endl;
   }

   cout << "WHO IS THE REAL FOUNDER OF GOOGLE? " << endl;
   cout << list[6] << endl;
   cout << list[7] << endl;
   cout << list[8] << endl;
   cin >> ans;

   if(ans ==    'A'     || ans ==   'a' )
   {
       cout << " <---------Great it is correct ^_^ --------->" << endl;
       score ++;
   }

   else{
       cout << " Better luck next time :( " << endl;
   }

   cout << "CREDITED AS FIRST IN THE HISTORY TO WRITE A COMPUTER PROGRAM" << endl;
   cout << list[9] << endl;
   cout << list[10] << endl;
   cout << list[11] << endl;
   cin >> ans;

   if(ans == 'B' || ans == 'b')
   {
       cout << "<---------Great it is correct ^_^ --------->" << endl;
       score ++;
   }

   else{
       cout << " Better luck next time :( " << endl;
   }

   cout << "WHO IS THE CO-FOUNDER OR FOUNDER OF APPLE? " << endl;
   cout << list[12] << endl;
   cout << list[13] << endl;
   cout << list[14] << endl;
   cin >> ans;

   if(ans == 'B' || ans == 'b')
   {
       cout << " <---------Great it is correct ^_^---------> " << endl;
       score ++;
   }

   else{
       cout << " Better luck next time :( " << endl;
   }

   cout << "WHO IS THE FOUNDER OF YOUTUBE? " << endl;
   cout << list[15] << endl;
   cout << list[16] << endl;
   cout << list[17] << endl;
   cin >> ans;

   if(ans == 'A' || ans == 'a')
   {
       cout << "<---------Great it is correct ^_^ --------->" << endl;
       score ++;
   }

   else{
       cout << " Better luck next time :( " << endl;
   
   }

    ofstream File;
    File.open("Scores.txt", ios:: app);
   
    File << name << " " << "Score: " <<score << endl;

    File.close();

}

void Scores(int score)
{
   
    string data;

    ifstream ReadFile("Results.txt");

    while (getline (ReadFile, data)) 
    {
        cout << data << endl;
    }

    ReadFile.close();

}

void EraseData(int score)
{

    fstream Clear;

    Clear.open("Scores.txt", ios::out | ios::trunc); 
    cout << "<---------Data has been Erased!--------->" << endl;

}
