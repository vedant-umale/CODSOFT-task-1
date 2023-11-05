#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    cout<<"\n\t\t\t*************************************";
    cout<< "\n\t\t\t* Welcome to GUESS THE NUMBER game! *";
    cout<<"\n\t\t\t*************************************\n";
    cout<< "In this game\nYou have to guess a number between 1 and 100.\n"
            "You'll have limited choices based on the level you choose.\nGOOD LUCK!!!"<< endl;

    string name;
    char input;
    cout<<"\nEnter player name : ";
    cin>>name;
    int userinput;
    cout<<endl;

    while(true && input!='N')
    {
        srand(0);
        int NUMBER=rand()%100+1;

            cout<<"Enter the difficulty level: \n""1 for easy!\t""2 for medium!\t""3 for difficult!\t";
            int difficultyLevel;
            cout<< "\nEnter the number: ";
            cin>>difficultyLevel;

        if(difficultyLevel==1){
            cout << "\nYou have 10 choices for finding the number between 1 and 100."<<endl;
            int choices=10;

            for (int i=1;i<=10;i++){
                cout<<"\nEnter any number from 1 to 100 : ";
                cin>>userinput;
                cout<<endl;

                if(userinput==NUMBER){
                    cout<<"CONGRATULATIONS!! You guessed the correct number. "<<endl;
                    cout<<"\t\t\t Thanks for playing...."<<endl;
                    cout<<"Wanna a try again ? (if yes enter Y or enter N for no) : ";
                    cin>>input;
                    cout<<endl;
                    break;
                }
                else{
                    if(userinput>NUMBER){
                        cout<<"SORRY!! Your guess is too high."<<endl;
                    }
                    else{
                        cout<<"SORRY!! Your guess is too low."<<endl;
                    }
                    choices--;
                    cout<<choices<<" choices are left."<<endl;

                    if(choices==0){
                        cout<<"You lose.. you couldn't find the number"<<endl;
                        cout<<"Wanna a try again ? (if yes enter Y or enter N for no) : ";
                        cin>>input;
                        cout<<endl;
                    }
                }
            }
        }
        else if(difficultyLevel==2){
            cout << "\nYou have 6 choices for finding the number between 1 and 100.";
            int choices=6;

            for (int i=1;i<=6;i++){
                cout<<"Enter any number from 1 to 100 : ";
                cin>>userinput;
                cout<<endl;

                if(userinput==NUMBER){
                    cout<<"CONGRATULATIONS!! You guessed the correct number. "<<endl;
                    cout<<"\t\t\t Thanks for playing...."<<endl;
                    cout<<"Wanna a try again ? (if yes enter Y or enter N for no) : ";
                    cin>>input;
                    cout<<endl;
                    break;
                }
                else{
                    if(userinput>NUMBER){
                        cout<<"SORRY!! Your guess is too high."<<endl;
                    }
                    else{
                        cout<<"SORRY!! Your guess is too low."<<endl;
                    }
                    choices--;
                    cout<<choices<<" are left.";

                    if(choices==0){
                        cout<<"You lose.. you couldn't find the number"<<endl;
                        cout<<"Wanna a try again ? (if yes enter Y or enter N for no) : ";
                        cin>>input;
                        cout<<endl;
                    }
                }
            }

        }
        else if(difficultyLevel==3){
            cout << "\nYou have 2 choices for finding the number between 1 and 100.";
            int choices=2;

            for (int i=1;i<=2;i++){
                cout<<"Enter any number from 1 to 100 : ";
                cin>>userinput;
                cout<<endl;

                if(userinput==NUMBER){
                    cout<<"CONGRATULATIONS!! You guessed the correct number. "<<endl;
                    cout<<"\t\t\t Thanks for playing...."<<endl;
                    cout<<"Wanna a try again ? (if yes enter Y or enter N for no) : ";
                    cin>>input;
                    cout<<endl;
                    break;
                }
                else{
                    if(userinput>NUMBER){
                        cout<<"SORRY!! Your guess is too high."<<endl;
                    }
                    else{
                        cout<<"SORRY!! Your guess is too low."<<endl;
                    }
                    choices--;
                    cout<<choices<<" are left.";

                    if(choices==0){
                        cout<<"You lose.. you couldn't find the number"<<endl;
                        cout<<"Wanna a try again ? (if yes enter Y or enter N for no) : ";
                        cin>>input;
                        cout<<endl;
                    }
                }
            }

        }
        else{
            cout<< "So sorry!!\nBut this a wrong choice, Enter valid choice from 0,1,2,3.\n"<<endl;
        }
    }
}
