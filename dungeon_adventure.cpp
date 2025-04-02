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


    cout << "Welcome to the dungen" << endl;  // intro to my game
    cout << "you have found your self trapped in a very dark area" << endl;
    cout << "your goal is to escape" << endl;

    cout << "press any key to start" << endl;
    cin >> Input;

    cout << "Good luck" << endl;

    //it begins here
    cout << "you walk down a dark path and notice a lightsource ahead." << endl;
    cout << " Do you want to go towards it or avoid it? (press w to go to the light and q to avoid)" << endl; // w = yes and q = no
    cin >> option; //this is the first user input and begins my if else statments

    if (option == 'w')
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
        
        {
            cout << "you have chosen to ignore the chest and move to the next area" <<endl;

        }

                if (wallspot == 'y')
                {
                    cout << "you start to walk towards the shinning spot on the wall" << endl;
                    cout << " as you walk towards the wall it opens up and takes you outside" << endl;
                    cout << " You have escaped the dungen!! Good job!"<< endl;
                }
            }
        }else
        {
            cout << "" << endl;

        }
    }    
    else if (option == 'q')
    {   
            cout << "you have decided to ignore the light and move on in the darkness" << endl;
            cout << "out of no where you hear slow foot steps coming from behind you" << endl;
            cout << "turn around? y for yes and n for no" << endl;
            cin >> lookback_noflash;


            if (lookback_noflash == 'y')
            {
                cout << " you begin to turn around slowly feeling the hot air begin to chill and your skin begins to shiver" <<endl;
            }  else
               {
                cout << " you have deiced to ignore the footsteps and move faster" << endl;
               }          

    }
    else
    {
        cout << "invaild option please try again" <<endl;
    }


    return 0;
}
    

    
    