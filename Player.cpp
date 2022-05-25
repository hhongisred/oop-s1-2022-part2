// player has a function that allows it to choose what pokemon it has

#include <iostream>

  Player(int choice){ //maybe change choice to a string so the user has to type it 
        if (choice==1){   
        playerClass = "Charmander";  
        HP= 0;
        }
        
        if(choice == 2){
            playerClass = "Bulbosaur";
            HP=0; //change this later as well 
        }
        if (choice ==3){
            playerClass = "Squirtle";
            HP=0 // we might not need this here
        
        }
        
    }
    
    //this would go inside the main function I think
    //user menu to choose pokemon type and we'll print the ASCII pokemon characters 
string check_pokemon(int choice)
{
    if(choice == 1)
    {
        cout<<"Type:Fire"<<endl;
        cout<<"Skill:"<<endl;
        cout<<"Ember: Spews a blast of fire that deals 40 damage to the enemy."<<endl;
        cout<<"Dragon Breath: Blow strong breath at your opponent for 60 damage."<<endl;
        cout<<"Jump Kick: Jump up and kick your opponent for 100 damage."<<endl;
    }
    
    else if(choice == 2)
    {
        cout<<"Type: Grass"<<endl;
        cout<<"Skill:"<<endl;
        cout<<"Razor Leaf: Slicing your opponent with a sharp blade deals 55 damage."<<endl;
        cout<<"Absorb: Absorbs energy, deals 20 damage to enemies and heals half of your own damage."<<endl;
        cout<<"Headbutt: Head-butting an enemy for 70 damage."endl;
    }
    
    else:
    {
        cout<<"Type: Water"<<endl;
        cout<<"Skill:"<<endl;
        cout<<"Surf: Attack your opponent with surf and deal 90 damage."<<endl;
        cout<<"Water Gun: Spews powerful streams of water to attack opponents with 40 damage."<<endl;
        cout<<"Body Slam: Hit your opponent with a heavy body with 85 damage."<<endl;
    }
}