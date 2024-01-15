#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<conio.h>
#include <time.h>
#include<unistd.h>

#define WORDS 50
#define letters 25
#define CHANCE 6

int word_select = 0;
int rnd_index(int i);

void figure(int mistakes, char* body) 
{
	printf("\tMistakes :%d\n", mistakes);
	switch(mistakes) 
	{
		case 1: 
		{
			body[1] = ')';
			body[0] = '(';
			break;	
		}
		case 2: body[2] = '/'; break;
		case 3: body[3] = '|'; break;
		case 4: body[4] = '\\'; break;
		case 5: body[5] = '/'; break;
		case 6: body[6] = '\\'; break;
		
		default: break;
	}

	printf("\t _________\n"
	       "\t|         |\n"
	       "\t|        %c %c\n"
	       "\t|        %c%c%c\n"
	       "\t|        %c %c\n"
	       "\t|             \n"
	       "\t|             ", body[0], body[1], body[2],
	       body[3], body[4], body[5], body[6]);
}

void correct(char* guess, int len) 
{
	printf("\t");
	int i;
	for ( i = 0; i < len; i++)
	{
		printf("%c ", guess[i]);
	}
	printf("\n\n");
}

void bot_body(int move)
{
	
	printf("\tBot:\n");
	int spaces,after,i;
    switch(move) 
	{
    	case 0: spaces = 0;	after=90; break;
        case 1: spaces = 15; after=75; break;
        case 2: spaces = 30;after=60; break;
        case 3: spaces = 45;after=45; break;
        case 4: spaces = 60;after=30; break;
        case 5: spaces = 75;after=15;  break;
        case 6: spaces = 90;after=0;  break;  
    }
	char before[spaces+1];
	char end[after+1];
	for ( i = 0; i < spaces-1; i++)
		before[i]=' ';
	before[spaces]='\0';
	printf("%s /|_||_\\`.__\n",before);
    printf("%s(   _    _ _\\\n",before);
    printf("%s=`-(_)--(_)-'",before);

    for ( i = after-1; i > -1; i--)
		end[i]=' ';
	end[after]='\0';	
    printf("%s|\n\n",end);

}

void player_body(int move)
{
	printf("\tYou:\n");
	int spaces,after,i;
    switch(move) 
	{
    	case 0: spaces = 0;	after=90; break;
        case 1: spaces = 15; after=75; break;
        case 2: spaces = 30;after=60; break;
        case 3: spaces = 45;after=45; break;
        case 4: spaces = 60;after=30; break;
        case 5: spaces = 75;after=15;  break;
        case 6: spaces = 90;after=0;  break;  
    }
	char before[spaces+1];
	char end[after+1];
	for ( i = 0; i < spaces-1; i++)
		before[i]=' ';
	before[spaces]='\0';
	printf("%s /|_||_\\`.__\n",before);
    printf("%s(   _    _ _\\\n",before);
    printf("%s=`-(_)--(_)-'",before);

    for ( i = after-1; i > -1; i--)
		end[i]=' ';
	end[after]='\0';	
    printf("%s|\n\n",end);
}

void hangman(char word_list[][letters])
{				
	
	char *body = (char*)malloc(CHANCE+1);
	
	int id = rnd_index(WORDS);
	char *word = word_list[id];
	int len = strlen(word);
	char *guessed = (char*)malloc(len);
	char falseWord[CHANCE];
	
	memset(body, ' ', (CHANCE+1)*sizeof(char));
	memset(guessed, '_', len);
	char guess;
	int flag;
	char* win;
	
	int mistakes = 0;
	
	do
	 {
		flag = 0;
		printf("\n\n");
		figure(mistakes, body);
		printf("\n\n");
		printf("\tFalse Letters : ");
		if(mistakes == 0) printf("None\n");
		int i;
		for (i = 0; i < mistakes; i++)
		{
			printf("%c ", falseWord[i]);
		}
		
		printf("\n\n");
		correct(guessed, len);
		printf("\tEnter an alphabet in lower case : ");
		do {scanf(" %c",&guess);} while ( getchar() != '\n' );
			
		for (i = 0; i < len; i++)
		{
			if(word[i] == guess)
			{
			flag = 1;
			guessed[i] = guess;
			}	
		}
		
		if(flag==0) 
		{
			falseWord[mistakes] = guess;
			mistakes = mistakes + 1;
		}
		
		win = strchr(guessed, '_');
		
	}	while(mistakes < CHANCE && win != NULL);
	
		if(win == NULL) 
		{
			printf("\n");
			correct(guessed, len);
			printf("\n\tCongrats! You have won\n\tThe word is: %s\n\n", word);
		} 
		else 
		{
			printf("\n");
			figure(mistakes, body);
			printf("\n\n\tBetter try next time.The word was %s\n\n", word);
		}
			free(body);
			free(guessed);
}


int main()
{
	int mode;
	printf("******Welcome to The Hangman Redefined*****\n");
	printf("\n\n\nSelect Game Mode:\n");
	printf("1. CLASSIC\n2.TIME TRIAL\n3.Wordsmith Nemesis\n\n");
	scanf("%d",&mode);
	
	switch(mode)
	{
		case 1:				//Classic	Mode
			{
					printf("\n\t BEWARE you can be hanged!!.");
					printf("\n\n\t Rules : ");
					printf("\n\t - Maximum 6 mistakes are allowed.");
					printf("\n\t - Enter all alphabets in lower case.");

					int category;
					printf("\n\n\tSelect categories: \n");
					printf("1.Animals\t2.Countries\t\t3.Food\t\t4.RANDOM\n\n");
					scanf("%d",&category);
					
					switch(category)
					{
						case 1:				//Animals Category
							{
								int difficulty;
								printf("Select Difficulty level:\n");
								printf("\n1.Normal\t2.Medium\t3.Hard\n\n");
								scanf("%d",&difficulty);
											
								switch(difficulty)
								{
									case 1:		//Normal
									{
										char list[WORDS][letters] = {"bear", "lion", "frog", "duck", "dodo", "seal", "wolf", "deer",
														 				"crow", "hawk","llama", "goat", "hare", "mole", "mule", "crab", "eel",
																		"cow", "ox", "cat","dog", "pika", "kiwi", "swan", "boar", "moth",
																		"wasp", "puma", "dory", "dove","toad", "tick", "flea", "worm", "tuna",
																		"ibex", "lark", "hen", "ant", "fox", "bat", "ape", "pig", "bee",
																		"cod", "gnu", "fly", "owl", "rat", "yak"};

										hangman(list);
										return 0;
													
									}
//-----------------------------------------------------------------------------------------------------------------------------------
									case 2:		//Medium
									{
										char list[WORDS][letters] = {
        												"tiger", "zebra", "giraffe", "monkey", "donkey", "rabbit", "panda", "jaguar", "koala", "hyena",
        												"lizard", "sheep", "otter", "ferret", "hippo", "koala", "rhino", "shark", "whale", "bison",
        												"turtle", "horse", "mouse", "puppy", "polar", "moose", "falcon", "beagle", "lemur", "skunk",
        												"eagle", "sloth", "cobra", "ferret", "squid", "camel", "shrew", "raven", "snail", "crane",
        												"lemur", "Walrus", "chimp", "goose", "octopus", "pigeon", "baboon", "python", "beetle", "jaguar"};
										hangman(list);
										return 0;
													
									}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------
									case 3:		//Hard
									{
										char list[WORDS][letters] = {
        												"elephant", "alligator", "crocodile", "orangutan", "porpoise", "butterfly", "hummingbird", "woodchuck", "cheetah", "porcupine",
        												"grasshopper", "anteater", "armadillo", "blackbear", "hedgehog", "chimpanzee", "jackrabbit", "kangaroo", "nightingale", "octopus",
        												"peacock", "rattlesnake", "salamander", "tortoise", "whippoorwill", "bluewhale", "grizzlybear", "honeyeater", "antelope", "swordfish",
        												"wallaby", "hippopotamus", "humpbackwhale", "raccoondog", "mountaingoat", "kingfisher", "hammerheadshark", "blackpanther", "orangutan", "siberiantiger",
        												"bullmastiff", "mountainlion", "hummingbird", "butterfly", "bluebottlefly", "grasshopper", "spidermonkey", "hummingbird", "seahorse", "horseshoecrab"
        										};
										hangman(list);
										return 0;
									}
								}
							}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
						case 2:				//Country Category
							{
								int difficulty;
								printf("Select Difficulty level:\n");
								printf("\n1.Normal\t2.Medium\t3.Hard\n\n");
								scanf("%d",&difficulty);
											
								switch(difficulty)
								{
									case 1:		//Normal
									{
										char list[WORDS][letters] = {"chad","cuba","fiji","guam","iran","iraq","laos","mali","niue","oman","peru","togo","aruba",
                                        "benin","chile","china","egypt","gabon","ghana","haiti","india","italy","japan","kenya","libya","macau","malta","nauru",
                                        "nepal","niger","palau","qatar","samoa","spain","sudan","syria","tonga","yemen","norway","panama","poland","russia","rwanda",
                                        "serbia","sweden","taiwan","turkey","tuvalu","uganda","zambia"};
										hangman(list);
										return 0;	
									}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
									case 2:		//Medium
									{
										char list[WORDS][letters] = {"albania","algeria","pakistan","armenia","austria","bahamas","bahrain","belarus","belgium","bermuda",
                                        "bolivia","burundi","comoros","croatia","curacao","denmark","argentina","ecuador","eritrea","estonia","finland","georgia","germany",
                                        "grenada","hungary","iceland","ireland","jamaica","lebanon","lesotho","liberia","mayotte","moldova","morocco","myanmar","namibia","nigeria",
                                        "reunion","romania","senegal","somalia","tokelau","tunisia","ukraine","uruguay","vanuatu","vietnam","cambodia","cameroon","colombia"};
										hangman(list);
										return 0;
									}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
									case 3:		//Hard
									{
										char list[WORDS][letters] = {"argentina","australia","capeverde","costarica","gibraltar","greenland","guatemala","indonesia","isleofman",
                                            "lithuania","mauritius","nicaragua","palestine","sanmarino","singapore","venezuela","azerbaijan","bangladesh","elsalvador","guadeloupe",
                                            "ivorycoast","kazakhstan","kyrgyzstan","luxembourg","madagascar","martinique","mauritania","micronesia","montenegro","montserrat","mozambique",
                                            "newzealand","northkorea","puertorico","saintlucia","seychelles","southkorea","south sudan","tajikistan","timorleste","uzbekistan","sintmaarten",
                                            "southafrica","switzerland","vaticancity","afghanistan","netherlands","philippines","saudiarabia"};
										hangman(list);
										return 0;	
									}
								}
							}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
						case 3:				//Food Category
						{
							int difficulty;
							printf("Select Difficulty level:\n");
							printf("\n1.Normal\t2.Medium\t3.Hard\n\n");
							scanf("%d",&difficulty);
											
							switch(difficulty)
							{
								case 1:		//Normal
								{
									char list[WORDS][letters] = {"apple","bread","broth","candy","chips","cream",
																"crepe","crisp","curry","donut","fries","grape","gravy","guava","honey",
																"juice","kebab","mango","maize","melon","olive","oreos","pasta","peach",
																"pizza","quark","salsa","salad","steak","sugar","sushi","toast",
																"wafer","wings","cake","egg","lamb","plum","kiwi","tofu","rice","bun","pie","fig",
																"pea","ham","tea","nut","jam"};
									hangman(list);
									return 0;		
								}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
								case 2:		//Medium
								{
									char list[WORDS][letters] = {"avocado", "burrito", "cookies", "popcorn", "spinach", "turnips",
																"coconut", "apricot", "muffin", "cereal", "tomato", "papaya", "muesli",
																"celery", "yogurt", "cheese", "pepper", "pickle", "walnut", "pudding",
																"banana", "orange", "squash", "almond", "sundae", "pistach", "raisin",
																"sorbet", "biryani", "pineapple", "broccoli", "artichoke", "eggplant",
																"tangerine", "pomegranate", "sausage", "hotdog", "baklava", "falafel",
															    "hummus", "lentils", "custard", "brownie", "lasagna", "noodle", "pancake",
																 "caramel", "biscuit", "brisket", "fritter"
																};
									hangman(list);
									return 0;
								}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
								case 3:		//Hard
								{
									char list[WORDS][letters] = {"spaghetti", "macaroni", "cauliflower", "fruitcake", "cranberries", 
																"butterscotch", "marshmallow", "cantaloupe", "cheesecake", "candyapple", "jellybeans", "shishkebab", "dragonfruit",
																"gingerbread", "greenpepper", "maplesyrup", "miegoreng", "russetapple", "sweetpotato", "burdekinplum", "capulicherry",
															    "custardapple", "indianjujube", "ladyfinger", "cottagecheese", "parmesancheese", "honeydewmelon", "butterchicken", "waterchestnut",
																"mashedpotatoes", "lemonade", "gingerale", "pinacolada", "pineapple", "pattypansquash", "brusselssprouts", "sandwiches",
														 	   "potatocutlets", "springrolls", "chickencroquette", "boxpatties", "peanutbutter", "milkshake", "turkishdelight", "frenchfries",
																"tempurashrimp", "mintmargarita", "eggfriedrice", "manchurian", "nasigoreng"};
									hangman(list);
									return 0;
								}
							}
						}
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------
						case 4:				//Random Category
						{
							int difficulty;
							printf("Select Difficulty level:\n");
							printf("\n1.Normal\t2.Medium\t3.Hard\n\n");
							scanf("%d",&difficulty);
											
							switch(difficulty)
							{
								case 1:		//Normal
								{
									char list[150][letters] = {"apple","bread","broth","candy","chips","cream",
																"crepe","crisp","curry","donut","fries","grape","gravy","guava","honey",
																"juice","kebab","mango","maize","melon","olive","oreos","pasta","peach",
																"pizza","quark","salsa","salad","steak","sugar","sushi","toast",
																"wafer","wings","cake","egg","lamb","plum","kiwi","tofu","rice","bun","pie","fig",
																"pea","ham","tea","nut","jam","chad","cuba","fiji","guam","iran","iraq","laos","mali","niue","oman","peru","togo","aruba",
                                        						"benin","chile","china","egypt","gabon","ghana","haiti","india","italy","japan","kenya","libya","macau","malta","nauru",
                                        						"nepal","niger","palau","qatar","samoa","spain","sudan","syria","tonga","yemen","norway","panama","poland","russia","rwanda",
                                        						"serbia","sweden","taiwan","turkey","tuvalu","uganda","zambia","bear", "lion", "frog", "duck", "dodo", "seal", "wolf", "deer",
														 		"crow", "hawk","llama", "goat", "hare", "mole", "mule", "crab", "eel",
																"cow", "ox", "cat","dog", "pika", "kiwi", "swan", "boar", "moth",
																"wasp", "puma", "dory", "dove","toad", "tick", "flea", "worm", "tuna",
																"ibex", "lark", "hen", "ant", "fox", "bat", "ape", "pig", "bee",
																"cod", "gnu", "fly", "owl", "rat", "yak"};
									hangman(list);
									return 0;
								}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
								case 2:		//Medium
								{
									char list[150][letters] = {"avocado", "burrito", "cookies", "popcorn", "spinach", "turnips",
																"coconut", "apricot", "muffin", "cereal", "tomato", "papaya", "muesli",
																"celery", "yogurt", "cheese", "pepper", "pickle", "walnut", "pudding",
																"banana", "orange", "squash", "almond", "sundae", "pistach", "raisin",
																"sorbet", "biryani", "pineapple", "broccoli", "artichoke", "eggplant",
																"tangerine", "pomegranate", "sausage", "hotdog", "baklava", "falafel",
															    "hummus", "lentils", "custard", "brownie", "lasagna", "noodle", "pancake",
																"caramel", "biscuit", "brisket", "fritter","albania","algeria","pakistan","armenia","austria","bahamas","bahrain","belarus","belgium","bermuda",
                                        						"bolivia","burundi","comoros","croatia","curacao","denmark","argentina","ecuador","eritrea","estonia","finland","georgia","germany",
                                        						"grenada","hungary","iceland","ireland","jamaica","lebanon","lesotho","liberia","mayotte","moldova","morocco","myanmar","namibia","nigeria",
                                        						"reunion","romania","senegal","somalia","tokelau","tunisia","ukraine","uruguay","vanuatu","vietnam","cambodia","cameroon","colombia","tiger", "zebra", "giraffe", "monkey", "donkey", "rabbit", "panda", "jaguar", "koala", "hyena",
        														"lizard", "sheep", "otter", "ferret", "hippo", "koala", "rhino", "shark", "whale", "bison",
        														"turtle", "horse", "mouse", "puppy", "polar", "moose", "falcon", "beagle", "lemur", "skunk",
        														"eagle", "sloth", "cobra", "ferret", "squid", "camel", "shrew", "raven", "snail", "crane",
        														"lemur", "Walrus", "chimp", "goose", "octopus", "pigeon", "baboon", "python", "beetle", "jaguar"};
									hangman(list);	
									return 0;
								}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
								case 3:		//Hard
								{
									char list[150][letters] = {"spaghetti", "macaroni", "cauliflower", "fruitcake", "cranberries", 
																"butterscotch", "marshmallow", "cantaloupe", "cheesecake", "candyapple", "jellybeans", "shishkebab", "dragonfruit",
																"gingerbread", "greenpepper", "maplesyrup", "miegoreng", "russetapple", "sweetpotato", "burdekinplum", "capulicherry",
															    "custardapple", "indianjujube", "ladyfinger", "cottagecheese", "parmesancheese", "honeydewmelon", "butterchicken", "waterchestnut",
																"mashedpotatoes", "lemonade", "gingerale", "pinacolada", "pineapple", "pattypansquash", "brusselssprouts", "sandwiches",
														 	    "potatocutlets", "springrolls", "chickencroquette", "boxpatties", "peanutbutter", "milkshake", "turkishdelight", "frenchfries",
																"tempurashrimp", "mintmargarita", "eggfriedrice", "manchurian", "nasigoreng","argentina","australia","capeverde","costarica","gibraltar","greenland","guatemala","indonesia","isleofman",
																"lithuania","mauritius","nicaragua","palestine","sanmarino","singapore","venezuela","azerbaijan","bangladesh","elsalvador","guadeloupe",
																"ivorycoast","kazakhstan","kyrgyzstan","luxembourg","madagascar","martinique","mauritania","micronesia","montenegro","montserrat","mozambique",
																"newzealand","northkorea","puertorico","saintlucia","seychelles","southkorea","south sudan","tajikistan","timorleste","uzbekistan","sintmaarten",
																"southafrica","switzerland","vaticancity","afghanistan","netherlands","philippines","saudiarabia","elephant", "alligator", "crocodile", "orangutan", "porpoise", "butterfly", "hummingbird", "woodchuck", "cheetah", "porcupine",
																"grasshopper", "anteater", "armadillo", "blackbear", "hedgehog", "chimpanzee", "jackrabbit", "kangaroo", "nightingale", "octopus",
																"peacock", "rattlesnake", "salamander", "tortoise", "whippoorwill", "bluewhale", "grizzlybear", "honeyeater", "antelope", "swordfish",
																"wallaby", "hippopotamus", "humpbackwhale", "raccoondog", "mountaingoat", "kingfisher", "hammerheadshark", "blackpanther", "orangutan", "siberiantiger",
																"bullmastiff", "mountainlion", "hummingbird", "butterfly", "bluebottlefly", "grasshopper", "spidermonkey", "hummingbird", "seahorse", "horseshoecrab"};
									hangman(list);
									return 0;
								}	
							}
						}
					}
			break;			
			}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------			
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------						
			case 2:			//Time Trial	Mode
			{
				printf("\nWelcome to Time Trial mode!");
				printf("\n\n\t Rules : ");
				printf("\n\t - Time limit of 60 seconds!");
				printf("\n\t - Challenge yourself to get maximum correct words in given time!");
				printf("\n\n\tAre you ready?\n\nPress any key to start: ");
				char ch = getch();
				system("cls");
				
				int s = 3;
				
				while(s>0)
				{
					printf("\t\t\t\tStarting in %d",s);
					sleep(1);
					system("cls");
					s--;
				}
	
				time_t initial_time = time(NULL);
				float time_limit = 60.0f;
				int score=0;
				char list[WORDS][letters] = {"bear", "lion", "frog", "duck", "dodo", "seal", "wolf", "deer",
												"crow", "hawk", "llama", "goat", "hare", "mole", "mule", "crab", "eel",
												"cow", "ox", "cat","chad", "cuba", "fiji", "guam", "iran", "iraq", "laos", 
												"mali", "niue", "oman", "peru", "togo", "aruba", "benin", "chile", "china", 
												"egypt", "gabon", "ghana", "haiti","apple", "bread", "broth", "candy", "chips", 
												"cream", "crepe", "crisp", "curry", "donut"};
			
				while (difftime(time(NULL), initial_time) < time_limit)
				{
					
					char *body = (char*)malloc((CHANCE+1)*sizeof(char));
					
					int id = rnd_index(WORDS);
					char *word = list[id];
					int len = strlen(word);
					char *guessed = (char*)malloc(len);
					char falseWord[CHANCE];
					
					memset(body, ' ', (CHANCE+1)*sizeof(char));
					memset(guessed, '_', len);
					char guess;
					int flag;
					char* win;
					
					int mistakes = 0;
					
					do
					{
						flag = 0;
						printf("\n\n");
						figure(mistakes, body);
						printf("\n\n");
						printf("\tFalse Letters : ");
						if(mistakes == 0) printf("None\n");
						int i;
						for (i = 0; i < mistakes; i++)
						{
							printf("%c", falseWord[i]);
						}
						
						printf("\n\n");
						correct(guessed, len);
						printf("\tEnter an alphabet in lower case : ");
						do {scanf(" %c",&guess);} while ( getchar() != '\n' );
						if (difftime(time(NULL), initial_time) >= time_limit) 
						{
							printf("\nTIME UP!!!\n");
							goto outcome;
						}
						for (i = 0; i < len; i++)
						{
							if(word[i] == guess)
							{
							flag = 1;
							guessed[i] = guess;
							}	
						}
						
						if(flag==0) 
						{
							falseWord[mistakes] = guess;
							mistakes = mistakes + 1;
						}
						
						win = strchr(guessed, '_');
						system("cls");
					}	while(mistakes < CHANCE && win != NULL);
					
					if(win == NULL) 
					{
						printf("\n");
						correct(guessed, len);
						printf("\n\tGuess correct!\n\tThe word is: %s\n\n", word);
						printf("----------------------------------------------------------------------------------------\n");
						score++;
					} 
					else 
					{
						printf("\n");
						figure(mistakes, body);
						printf("\n\n\tGuess failed!\n\tThe word was %s\n\n", word);
						printf("----------------------------------------------------------------------------------------\n");
					}

					free(body);
					free(guessed);
				}
				outcome:
				printf("Your score was: %d",score);
				
				break;
			}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------			
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
			case 3:			//Wordsmith Nemesis	Mode
			{
				printf("\nWelcome to Wordsmith Nemesis mode!");
				printf("\n\n\t Rules : ");
				printf("\n\t - 6 words to guess!");
				printf("\n\t - Complete the word and push your car to the finish line!");
				printf("\n\t - Before the Bot reaches the end!");
				printf("\n\n\tAre you ready?\n\nPress any key to start: ");
				char ch = getch();
				system("cls");
				
				int s = 3;
				int i;
				int p_pos=0,b_pos=0;

				while(s>0)
				{
					printf("\t\t\t\tStarting in %d",s);
					sleep(1);
					system("cls");
					s--;
				}

				char list[150][letters] = {
											"apple","bread","broth","candy","chips","cream",
											"crepe","crisp","curry","donut","fries","grape","gravy","guava","honey",
											"juice","kebab","mango","maize","melon","olive","oreos","pasta","peach",
											"pizza","quark","salsa","salad","steak","sugar","sushi","toast",
											"wafer","wings","cake","egg","lamb","plum","kiwi","tofu","rice","bun","pie","fig",
											"pea","ham","tea","nut","jam","chad","cuba","fiji","guam","iran","iraq","laos","mali","niue","oman","peru","togo","aruba",
											"benin","chile","china","egypt","gabon","ghana","haiti","india","italy","japan","kenya","libya","macau","malta","nauru",
											"nepal","niger","palau","qatar","samoa","spain","sudan","syria","tonga","yemen","norway","panama","poland","russia","rwanda",
											"serbia","sweden","taiwan","turkey","tuvalu","uganda","zambia","bear", "lion", "frog", "duck", "dodo", "seal", "wolf", "deer",
											"crow", "hawk","llama", "goat", "hare", "mole", "mule", "crab", "eel",
											"cow", "ox", "cat","dog", "pika", "kiwi", "swan", "boar", "moth",
											"wasp", "puma", "dory", "dove","toad", "tick", "flea", "worm", "tuna",
											"ibex", "lark", "hen", "ant", "fox", "bat", "ape", "pig", "bee",
											"cod", "gnu", "fly", "owl", "rat", "yak"
											};
																		
				for(i=0;p_pos<=6 && b_pos<= 6;i++)
				{
					char *body = (char*)malloc((CHANCE+1)*sizeof(char));
					
					int id = rnd_index(150);
					char *word = list[id];
					int len = strlen(word);
					char *guessed = (char*)malloc(len);
					char falseWord[CHANCE];
					
					memset(body, ' ', (CHANCE+1)*sizeof(char));
					memset(guessed, '_', len);
					char guess;
					int flag;
					char* win;
					
					int mistakes = 0;
					
					bot_body(b_pos);
					player_body(p_pos);

					if(p_pos==6)
					{
						printf("\n\n\t\tCONGRATULATIONS!!! YOU HAVE WON.");
						break;	
					}
					
					else if(b_pos==6)
					{
						printf("\n\n\t\tYOU LOST!!!");
						break;
					}
						
						
					do
					{
						flag = 0;
						printf("\n\n");
						printf("\tFalse Letters : ");
						if(mistakes == 0) printf("None\n");
						int i;
						for (i = 0; i < mistakes; i++)
						{
							printf("%c", falseWord[i]);
						}
						
						printf("\n\n");
						correct(guessed, len);
						printf("\tEnter an alphabet in lower case : ");
						do {scanf(" %c",&guess);} while ( getchar() != '\n' );
						system("cls");
						for (i = 0; i < len; i++)
						{
							if(word[i] == guess)
							{
								flag = 1;
								guessed[i] = guess;
							}	
						}
						
						if(flag==0) 
						{
							falseWord[mistakes] = guess;
							mistakes = mistakes + 1;
						}
						
						win = strchr(guessed, '_');
						
					}	while(mistakes < CHANCE && win != NULL);
					
						if(win == NULL) 
						{
							printf("\n");
							printf("Guess correct. Position advanced!\n\n");
							p_pos++;

						} 
						else 
						{
							printf("\n");
							printf("\n\n\tGuess incorrect. Position revoked!\n\n", word);
							b_pos++;

						}

					free(body);
					free(guessed);		
				}

				break;
			}
	}
	return 0;
}


int rnd_index(int i) 
{
     if (word_select==0) 
	 {
         srand(time(NULL) << 5);
         word_select = 1; 
     }

     return rand() % i;  
}
