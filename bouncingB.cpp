#include<iostream>
#include<conio.h>
#include<windows.h>
#include<dos.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

char mapH[30][70]= {
	"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!",
	"!H[]H|_                                                      !",
	"!HHHH|                                                       !",
	"!H[]H|                                                       !",
	"!HHHH|                                                       !",
	"!H[]H|                                                       !",
	"!HHHH|                                                       !",//Map for Level 2
	"!HHHH|                                                       !",
	"!HHHH|                                                       !",
	"!HHHH|                                                       !",
	"!HHHH|                                                       !",
	"!HHHH|                                                       !",
	"!HHHH|_                                      ***********     !",
	"!HHHH|                                        *   @   ****   !",
	"!HHHH|                                        *  @@@  ****** !",
	"!HHHH|               =                        *   @   ****** !",
	"!HHHH|                                        ***O***** O    !",
	"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!",
};
char map[30][70]= {
	"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!",
	"!H[]H|_                                                      !",
	"!HHHH|                                                       !",
	"!H[]H|                                                       !",
	"!HHHH|                                                       !",
	"!H[]H|                                                       !",
	"!HHHH|                                                       !",
	"!HHHH|                                                       !",//Map for Level 1
	"!HHHH|                                                       !",
	"!HHHH|                                                       !",
	"!HHHH|                                                       !",
	"!HHHH|                                                       !",
	"!HHHH|                                       ***********     !",
	"!HHHH|                                        *   @   ****   !",
	"!HHHH|                                        *  @@@  ****** !",
	"!HHHH|               =                        *   @   ****** !",
	"!HHHH|                                        ***O***** O    !",
	"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!",
};
//DECLARE VARIABLES
int score=0;
int lives=5;
bool gameon=true;
//fUNCTION FOR LEVEL 1
void level1(){
		system("cls");
	    cout<<endl;
		cout<<endl;
		cout<<"Patience is the key to Catch the 'B's"<<endl;//A little loading screen
		cout<<endl;
		cout<<endl;
		cout<<"You can Play in 3";
		cout<<".";
		Sleep(200);
		cout<<".";
		Sleep(200);
		cout<<".";

		Sleep(200);
		cout<<"2";
		cout<<".";
		Sleep(200);
		cout<<".";
		Sleep(200);
		cout<<".";
	
		Sleep(200);
		cout<<"1";
		Sleep(200);
	    while(gameon==true) {
		srand(time(0));
		system("cls");
		
		
		for(int v=0; v<20; v++) {//printing the map
			cout<<map[v]<<endl;
		}
		cout<<"*&*&*&*&*&*&*&*&*&*&*&*"<<endl;
		cout<<"*                     *"<<endl;
		cout<<"* Score           ="<<score<<"  *"<<endl;//Display score and lives
		cout<<"*                     *"<<endl;
		cout<<"* Remaining lives ="<<lives<<"  *"<<endl;
		cout<<"*                     *"<<endl;
		cout<<"*&*&*&*&*&*&*&*&*&*&*&*"<<endl;
		
		for(int i=0; i<30; i++) {
			for(int j=0; j<70; j++) {
					
				switch(map[i][j]) {
					case'=': {
						//moving the = with arrow keys
							if (GetAsyncKeyState(VK_LEFT) !=0) {
								int newj=j-11;


								switch(map[i][newj]) {
									case' ': {
											map[i][j]=' ';
										
										
											
											j--;
											map[i][newj]='=';
										
										
											break;
										}
								}
							} else if (GetAsyncKeyState(VK_RIGHT) !=0) {
								Sleep(20);
								int newk=j+11;
								switch(map[i][newk]) {
									case' ': {
											map[i][j]=' ';
										
										
											
											j++;
											map[i][newk]='=';
										
										
											break;
										}
								}
							}
							break;
						}
				
					
    
					case '_': {
							int randomNum=rand() %15+1;//Generating the B s
							if (randomNum==1||randomNum==2) {
								j++;
								map[i][j]='B';
							}

							break;
						}
					case 'B': {
						
					map[i][j]=' ';
							i++;
							j++;
							Sleep(50);
							if (map[i][j]!='!' && map[i][j] != '=' && map[i][j]!='_'&&map[i][j]!='*') {
								
								map[i][j]='B';
							}else if(map[i][j]=='='){
								
								map[i][j]='=';
								map[i-10][j+1]='B';//B bouncing when it hits the =
								
								
							
								
							}else if(map[i][j]=='!'){
								map[i][j]='!';
								cout<<"\a";
								lives--;
								if(lives==0){//when lives =0 game over 
									gameon=false;
									system("cls");
									    cout<<"------------------------------------Game Over------------------------------------"<<endl;
										cout<<"                                 Score           ="<<score<<endl;
                                        cout<<"                                 Remianing lives ="<<lives<<endl;
                                        system("pause");
                                        
								}
								
								
							}else if(map[i][j]=='*'){
								map[i][j]='*';
								score++;
								if(score==10){//when score =10 level compeleted
									gameon=false;
									system("cls");
									    cout<<"---------------------------------YOU HAVE FINISHED THE lEVEL-1----------------------------------"<<endl;
										cout<<"                                 Score           ="<<score<<endl;
                                        cout<<"                                 Remianing lives ="<<lives<<endl;
                                        system ("pause");                                        
                                        
                                        
								}
							}
                          break;
						}
						
						}
						}
			}
		}
	
}
//FUNCTION FOR lEVEL 2
void level2(){
    	system("cls");
    	cout<<endl;
		cout<<endl;
		cout<<"Patience is the key to Catch the 'B's"<<endl;
	    cout<<endl;
		cout<<endl;
		cout<<"You can Play in 3";
		cout<<".";
		Sleep(200);
		cout<<".";
		Sleep(200);
		cout<<".";
		Sleep(200);
		
		cout<<"2";
		cout<<".";
		Sleep(200);
		cout<<".";
		Sleep(200);
		cout<<".";
		Sleep(200);
	
		cout<<"1";
		Sleep(200);
		system("cls");
		while(gameon==true) {
		srand(time(0));
		system("cls");
		
		for(int v=0; v<20; v++) {
			cout<<mapH[v]<<endl;
		}
		cout<<"*&*&*&*&*&*&*&*&*&*&*&*"<<endl;
		cout<<"*                     *"<<endl;
		cout<<"* Score           ="<<score<<"  *"<<endl;
		cout<<"*                     *"<<endl;
		cout<<"* Remaining lives ="<<lives<<"  *"<<endl;
		cout<<"*                     *"<<endl;
		cout<<"*&*&*&*&*&*&*&*&*&*&*&*"<<endl;
		for(int i=0; i<30; i++) {
			for(int j=0; j<70; j++) {
			
				switch(mapH[i][j]) {
					case'=': {
							if (GetAsyncKeyState(VK_LEFT) !=0) {
							
								int newj=j-11;


								switch(mapH[i][newj]) {
									case' ': {
											mapH[i][j]=' ';
										
											
											j--;
											mapH[i][newj]='=';
										
										
											break;
										}
								}
							} else if (GetAsyncKeyState(VK_RIGHT) !=0) {
									Sleep(20);
								int newj=j+11;
								switch(mapH[i][newj]) {
									case' ': {
											mapH[i][j]=' ';
										
											
											j++;
											mapH[i][newj]='=';
											
										
											break;
										}
								}
							}
							break;
						}
				
					
    
					case '_': {
							int randomNum=rand() %20+1;
							if (randomNum==1||randomNum==2) {
								j++;
								mapH[i][j]='B';
							}

							break;
						}
					case 'B': {
						
					mapH[i][j]=' ';
							i++;
							j++;
							Sleep(50);
							if (mapH[i][j]!='!' && mapH[i][j] != '=' && mapH[i][j]!='_'&&mapH[i][j]!='*') {
								mapH[i][j]='B';
							}else if(mapH[i][j]=='='){
								
								mapH[i][j]='=';
								mapH[i-10][j+1]='B';
								
								
							
								
							}else if(mapH[i][j]=='!'){
								mapH[i][j]='!';
							
								lives--;
								if(lives==0){
									gameon=false;
									system("cls");
									    cout<<"------------------------------------Game Over------------------------------------"<<endl;
										cout<<"                                 Score           ="<<score<<endl;
                                        cout<<"                                 Remianing lives ="<<lives<<endl;
                                        system("pause");
                                        
								}
								
								
							}else if(mapH[i][j]=='*'){
								mapH[i][j]='*';
								score++;
								if(score==10){
									gameon=false;
									system("cls");
									    cout<<"------------------------------YOU HAVE FINISHED THE DOUBLE TROUBLE ----------------------------------"<<endl;
										cout<<"                                 Score           ="<<score<<endl;
                                        cout<<"                                 Remianing lives ="<<lives<<endl;
                                        system("pause");
                                       
								}
							}
                          break;
						}
						
						}
						}
			}
		}
}
int main(){
lives=5;
score=0;
system("cls");
	gameon=true;
	cout<<"------------------------------------|Welcome|------------------------------------"<<endl;//Drawng Menu Items
	cout<<endl;
	cout<<"----------------------------------BOUNCING 'B's----------------------------------"<<endl;
	cout<<endl;
	cout<<"                              Press S to start playing                     "<<endl;
	cout<<endl;
	cout<<"                              Press I for instructions                     "<<endl;
	cout<<endl;
	cout<<"                              Press A for About the game                     "<<endl;
	char input;
	input=getch();
	switch(input){//Doing tasks according to the inputs
		case 's':
	    case 'S':{
	    	system("cls");
	    	cout<<endl;
	    	cout<<endl;
	    	cout<<"                              Press 1 to start playing level 1                  "<<endl;
	    	cout<<endl;
	    	cout<<"                     Press 2 to start playing Bouncing 'B's Double Trouble                 "<<endl;
	    	char input2;
	    	input2=getch();
	    	switch(input2){
	    		case '1':{
	    			level1();
	    			return main();
					break;
					
				}
				case'2':{
					level2();
					return main();
					break;
					
				}
				default:{
					cout<<"Invalid Input"<<endl;
						system("pause");
					return main();
					break;
				}
			}
		}
		case'I':
		case'i':{
			system("cls");
			cout<<endl;
			cout<<endl;
			cout<<"                              Use arrow keys to move                     "<<endl;
			cout<<"          Catch the B's And You have to bounce them back to the bin to score                     "<<endl;
			cout<<"                     you have 5 lives dropping B's cost you 1 life                    "<<endl;
			system("pause");
			return main();
			break;
		}
	
	case'a':
	case'A':{
		system("cls");
		cout<<endl;
		cout<<endl;
		cout<<"About The Game"<<endl;
		cout<<"This Game is based on Bouncing babies arcade game developed by Dave Baskin in 1984"<<endl;
		cout<<"Remade similerly as Bouncing 'B's Using C++ for the game Project Of BATCH 2019/2020"<<endl;
		cout<<endl;
		cout<<"Group-14"<<endl;
		cout<<"19/ENG/020 - I.N.GAMAGE\n19/ENG/057 - H.T.KODIKARA\n19/ENG/058 - M.S.KODIKARA\n19/ENG/075 - A.K.Y.S.S.PERERA"<<endl;
		cout<<endl;
		cout<<endl;
		system("pause");
		return main();
		break;
	}
	default:{
			cout<<"Invalid Input"<<endl;
			system("pause");
					return main();
		break;
	}
	}
}

