#include<iostream>
using namespace std;


int main()
{
    char Input;
    char option;     //not sure if these need to be char or not but its working so far
    char chest;
    char lookback_noflash;
    char lookback_flash;
    char wallspot;
    char door;
    bool gameover = true;
    char restart;


    //it begins here
    while (gameover)
    {
        cout << "Welcome to the dungen" << endl;  // intro to my game
    cout << "you have found your self trapped in a very dark area" << endl;
    cout << "your goal is to escape" << endl;

    cout << "press any key to start" << endl;
    cin >> Input;

    cout << "Good luck" << endl;



    cout << "you walk down a dark path and notice a lightsource ahead." << endl;
    cout << " Do you want to go towards it or avoid it? (press w to go to the light and q to avoid)" << endl; // w = yes and q = no
    cin >> option; //this is the first user input and begins my if else statments

    switch (option)
    {
    
    
        case 'w':
            {
    
            cout << "you have chosen to move towards the light." << endl;

        cout <<"you start to notice somthing under the light as you get closer." << endl;
        cout << "once closer you notice its a wood chest" << endl;
        cout << "open the chest? press y for yes and n for no" << endl; //y = yes and n = no
        cin >> chest;

        if (chest == 'y') 
        {
            cout << "you open the chest and find a flash light!" << endl;
            cout << " with a flaslight you can light your way and feel safer" << endl;
            cout << " footsteps start to sound off in your right ear making you pause in your path with fear";
            cout << "turn around and shine the flashlight? y for yes and n for no" << endl;
            cin >> lookback_flash;

            if (lookback_flash == 'y')
            {
            
                cout << "you turn around and flash the ghostly figure with the flash light" << endl;
                cout << "the light from the flashlight makes the ghost pause in place and disapre!" << endl;
                cout << "deafting the ghost has made a spot on the wall shine do you want to check it out? y for yes and n for no" << endl;
                cin >> wallspot;

                if (wallspot == 'y')
                {
                    cout << "you start to walk towards the shinning spot on the wall" << endl;
                    cout << " as you walk towards the wall it opens up and takes you outside" << endl;
                    cout << " You have escaped the dungen!! Good job!"<< endl;
                    gameover= false;
                }    
                else
                {
                    cout << "you choose not to look at the wall and went a diffrent way" << endl;
                    cout << "after walking around, you find a camp site to rest where a hero saves you! good job!" << endl;
                    gameover = false;
                }
            }
            else
            {

                    cout <<" you choose not to turn around and walk more into the darkness" << endl;
                    cout << " The footsteps get louder and faster untill your knocked down and dragged away" <<endl;
                    gameover = false;
                }
            }
            else
            {
                cout << "you choose to not open the chest" << endl;
                cout << " your chooice leds you to a wall with a door" << endl;
                cout << " open the door? y for yes and n for no" << endl;
                cin >> door;
                
                if (door == 'y')
                {
                    cout << "you opened the door and a bright light hits you upon opening your eyes you see gold!" << endl;
                    cout << " you escape with gold!" << endl;
                    gameover = false;
                }
            }
        }
        break;
        case 'q':
        {
            cout << "you have choose to ignore the light and move on into the darkness" << endl;
            cout << " out of no where you hear slow heavy footsteps coming from behind you" << endl;
            cout << " turn around? y for yes and n for no" << endl;
            cin >> lookback_noflash;

            if (lookback_noflash == 'y')
            {
                cout << "you begin to turn around slowly, feeling the hot air turn cold" << endl;
                cout << "you have nothing to prtoect your self with" << endl;
                cout << "the ghost consume you in the darkness!" << endl;
                gameover = false;
            }
            else
            {
                cout << "you have choose to ignore the foot steps and move faster" << endl;
            }
            gameover= false;
        }
        break;
    default:
        {
        cout << "Invaild option" << endl;
        }
        break;
    }
 }
        if (gameover = true)
        {
            cout <<" do you want to play again? y for yes and n for no" << endl;
            cin >> restart;

            if (restart == 'y')
            {
                gameover = true;
            }
            else
            {
                cout << "thank you for trying my game!" << endl;
            }
        }

    return 0;

}          