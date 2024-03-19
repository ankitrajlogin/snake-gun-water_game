
#include <iostream>
#include<time.h>

using namespace std;


int snakeWaterGun(char you , char comp){
    if(you == comp){
        return 0 ; 
    }
    else if(you == 's' && comp == 'g')
	{
		return -1;
	}

	else if (you == 'g' && comp == 's')
	{
		return 1;
	}

	if (you == 's' && comp == 'w')
	{
		return 1;
	}
	else if (you == 'w' && comp == 's')
	{
		return -1;
	}

	if (you == 'g' && comp == 'w')
	{
		return -1;
	}
	else if (you == 'w' && comp == 'g')
	{
		return 1;
	}
}

int game(){
    char you , comp ; 

    srand(time(0)) ; 

    int number = rand()%100 +1 ; 

    if(number < 33){
        comp = 's' ; 
    }
    else if(number > 33 && number < 66){
        comp = 'w' ;
    }
    else{
        comp = 'g' ;
    }

    cout <<  "Enter 's' for snake, 'w' for "
		"water and 'g' for gun\n" ; 

    cin >> you ; 

     

    if(you != 's' && you != 'w' && you != 'g'){
        cout << "Invalid choice" << endl; 
        return 0 ; 
    }
    else{
        int result = snakeWaterGun(you , comp) ;
        if(result == 0){
            cout << "Game draw '-'" << endl; 
        }
        else if(result == 1){
            cout << "You win :)" << endl; 
        }
        else{
            cout << "You Lose :(" << endl; 
        }

        cout << "you choose : " << you << endl; 
        cout << "computer choose : " << comp << endl; 

        return result ; 

    }
   


}

int main(){

    int time  ; 

    cout << "=====================================" << endl; 
    cout << "Welcome to snake, gun and Water Game" << endl; 
    cout << "=====================================" << endl; 


    cout << "Enter total number of this you want to play with computer" << endl; 
    cin >> time ; 

    int count = 0 ; 
    int i = 1; 

    while(i <=time){
        cout << "-----------------------------" << endl; 
        cout << "Game no.: " << i << endl; 
        cout << "-----------------------------" << endl; 
        count+=game() ; 
        i++ ; 
    }


    cout << "------ Final Winner is : ------------ " << endl; 

    if(count > 0){
        cout << "You" << endl; 
    }
    else if(count == 0){
        cout << "Draw" << endl ; 
    }
    else{
        cout << "***Computer***" << endl; 
    }




 





    

    return 0 ;
}