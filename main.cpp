#include <iostream>
#include <stdio.h>//STANDART INPUT-OUTPUT HEADER. header file che contiene definizioni di macro,costanti e dichiarazoni di funzioni e tipi usati per le varie operazioni input-output
#include <windows.h>//insieme di librerie per interfacciare con windows
#include <string>//
#include <cstdlib>
#include <ctime>

using namespace std;
void selector(unsigned short color)
{
     HANDLE hCon =
     GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hCon,color);
}
char tmp_slot[22][75];//assegna dei caratteri ad una variabile  dichiarata

char slot[22][75] = {
	"           ############  ##            ##########  ############           ",
	"           ############  ##            ##########  ############           ",
	"           ##            ##            ##      ##       ##                ",
	"           ##            ##            ##      ##       ##                ",
	"           ############  ##            ##      ##       ##                ",
	"           ############  ##            ##      ##       ##                ",
	"                     ##  ##            ##      ##       ##                ",
	"                     ##  ##            ##      ##       ##                ",
	"           ############  ############  ##########       ##                ",
	"           ############  ############  ##########       ##                ",
	"                                                                          ",
	"                                                                          ",
	"##      ##  ##########  #########  ##      ##  ##  ##        ##  #########",
	"####  ####  ##########  #########  ##      ##  ##  ##        ##  #########",
	"####  ####  ##      ##  ##         ##      ##  ##  #####     ##  ##       ",
	"##  ##  ##  ##      ##  ##         ##      ##  ##  #####     ##  ##       ",
	"##  ##  ##  ##########  ##         ##########  ##  ##   ###  ##  ######   ",
	"##      ##  ##########  ##         ##########  ##  ##   ###  ##  ######   ",
	"##      ##  ##      ##  ##         ##      ##  ##  ##      ####  ##       ",
	"##      ##  ##      ##  ##         ##      ##  ##  ##      ####  ##       ",
	"##      ##  ##      ##  #########  ##      ##  ##  ##        ##  #########",
	"##      ##  ##      ##  #########  ##      ##  ##  ##        ##  #########"
    };
	void ShowSlot()
{
	for(int i = 0; i < 22; i++)//stampa tutte le righe fino alla decima
    {
		printf("%s\n",slot[i] );//"%s/n" riguarda le stringhe
		
	}
}
char tmp_jackpot[19][73];//assegna dei caratteri ad una variabile  dichiarata

char jackpot[19][73] = {
    "                 #                                      #              ",
    "   #            ###                    #               ###             ",
    "  ###            #       #            ###               #              ",
    "   #                    ###            #                        #      ",
    "                         #                                     ###     ",
    "                                                                #      ",
	"########## ########## ######### ##   ##  ######   ########## ##########",
	"########## ########## ######### ##  ##   ##    ## ########## ##########",
	"    ##     ##      ## ##        ## ##    ##    ## ##      ##     ##    ",
	"    ##     ########## ##        ####     ######   ##      ##     ##    ",
	"    ##     ########## ##        ####     ##       ##      ##     ##    ",
	"##  ##     ##      ## ######### ##  ##   ##       ##########     ##    ",
	"######     ##      ## ######### ##    ## ##       ##########     ##    ",
	"                 #                                      #              ",
    "   #            ###                    #               ###             ",
    "  ###            #       #            ###               #              ",
    "   #                    ###            #                        #      ",
    "                         #                                     ###     ",
    "                                                                #      "
    };
	void ShowJackpot()
{
	for(int i = 0; i < 6; i++)//stampa tutte le righe fino alla decima
    {
            selector(14|0);
		printf("%s\n",jackpot[i] );//"%s/n" riguarda le stringhe
		
	}
	for(int i = 6; i < 13; i++)//stampa tutte le righe fino alla decima
    {
            selector(12|0);
		printf("%s\n",jackpot[i] );//"%s/n" riguarda le stringhe
		
	}
	for(int i = 13; i < 19; i++)//stampa tutte le righe fino alla decima
    {
            selector(14|0);
		printf("%s\n",jackpot[i] );//"%s/n" riguarda le stringhe
		
	}
}
char tmp_ciliegia[12][48];
char ciliegia[12][48] = {
"                                    ##         ",
"                                   ####        ",
"                                  ##  ##       ",
"                                 ##    ##      ",
"                                ##      ##     ",
"                               ##        ##    ",
"                            #######    ####### ",
"                           #########  #########",
"                           #########  #########",
"                           #########  #########",
"                           #########  #########",
"                            #######    ####### "
};
void ShowCiliegia()
{
	for(int i = 0; i < 6; i++)//stampa tutte le righe fino alla decima
    {
            selector(8|0);
		printf("%s\n",ciliegia[i] );//"%s/n" riguarda le stringhe		
	}
	for(int i = 6; i < 12; i++)//stampa tutte le righe fino alla decima
    {
            selector(12|0);
		printf("%s\n",ciliegia[i] );//"%s/n" riguarda le stringhe		
	}
}
char tmp_mela[12][48];
char mela[12][48] = {
"                                      ##       ",
"                                     ##        ",
"                                    ##         ",
"                                 ########      ",
"                                ##########     ",
"                               ############    ",
"                              ##############   ",
"                              ##############   ",
"                              ##############   ",
"                               ############    ",
"                                ##########     ",
"                                  ######       "
};
void ShowMela()
{
	for(int i = 0; i < 3; i++)//stampa tutte le righe fino alla decima
    {
            selector(8|0);
		printf("%s\n",mela[i] );//"%s/n" riguarda le stringhe		
	}
	for(int i = 3; i < 12; i++)//stampa tutte le righe fino alla decima
    {
            selector(2|0);
		printf("%s\n",mela[i] );//"%s/n" riguarda le stringhe		
	}
}
char tmp_dollaro[13][48];
char dollaro[13][48] = {
"                                  ######       ",
"                                 ########      ",
"                                #####  ###     ",
"                               ####    ####    ",
"                              ####  #  #####   ",
"                             ####  ##  ######  ",
"                             ########  ######  ",
"                             ########  ######  ",
"                              #######  #####   ",
"                               ######  ####    ",
"                                ##########     ",
"                                 ########      ",
"                                  ######       "
};
void ShowDollaro()
{
	for(int i = 0; i < 13; i++)//stampa tutte le righe fino alla decima
    {
            selector(14|0);
		printf("%s\n",dollaro[i] );//"%s/n" riguarda le stringhe		
	}

}
void ShowAnguria()
{
     selector(2|0);
cout<<"                                    ####"<<endl;selector(2|0);
cout<<"                                   ###";selector(12|0);cout<<"##"<<endl;selector(2|0);
cout<<"                                  ###";selector(12|0);cout<<"# #"<<endl;selector(2|0);
cout<<"                                 ###";selector(12|0);cout<<"####"<<endl;selector(2|0);
cout<<"                                ###";selector(12|0);cout<<"## ##"<<endl;selector(2|0);
cout<<"                               ##";selector(12|0);cout<<"#######"<<endl;selector(2|0);
cout<<"                              ##";selector(12|0);cout<<"#### ###"<<endl;selector(2|0);
cout<<"                              ##";selector(12|0);cout<<"## #####"<<endl;selector(2|0);
cout<<"                              ##";selector(12|0);cout<<"###### #"<<endl;selector(2|0);
cout<<"                               ##";selector(12|0);cout<<"### ###"<<endl;selector(2|0);
cout<<"                                ###";selector(12|0);cout<<"#####"<<endl;selector(2|0);
cout<<"                                 ###";selector(12|0);cout<<"# ##"<<endl;selector(2|0);
cout<<"                                  ###";selector(12|0);cout<<"###"<<endl;selector(2|0);
cout<<"                                   ###";selector(12|0);cout<<"##"<<endl;selector(2|0);
cout<<"                                    ####"<<endl;

}

int main()
{
     PlaySound((LPCSTR)"I:\\informatica\\2^C L.S.A\\dev- c++\\GIOCHI\\slot machine\\Tom and Jerry at MGM - music performed live by the John Wilson Orchestra - 2013 BBC Proms.wav", NULL, SND_FILENAME | SND_ASYNC );
     Sleep(3500);
    for(int i=0;i<20;i++)
    {
            switch (i)
            {
                case 0:
                     Sleep(100);
                     system ("color 01");
                     break;
                case 1:
                     Sleep(100);
                     system ("color 02");
                     break;
                case 2:
                     Sleep(100);
                     system ("color 03");
                     break;
                case 3:
                     Sleep(100);
                     system ("color 04");
                     break;
                case 4:
                     Sleep(100);
                     system ("color 05");
                     break;
                case 5:
                     Sleep(100);
                     system ("color 06");
                     break;
                case 6:
                     Sleep(100);
                     system ("color 07");
                     break;
                case 7:
                     Sleep(100);
                     system ("color 08");
                     break;
                case 8:
                     Sleep(100);
                     system ("color 09");
                     break;
                case 9:
                     Sleep(100);
                     system ("color 0A");
                     break;
                case 10:
                     Sleep(100);
                     system ("color 0A");
                     break;
                case 11:
                     Sleep(100);
                     system ("color 0B");
                     break;
                case 12:
                     Sleep(100);
                     system ("color 0C");
                     break;
                case 13:
                     Sleep(100);
                     system ("color 0D");
                     break;
                case 14:
                     Sleep(100);
                     system ("color 0E");
                     break;
                case 15:
                     Sleep(100);
                     system ("color 0F");
                     break;
                case 16:
                     Sleep(100);
                     system ("color 01");
                     break;
                case 17:
                     Sleep(100);
                     system ("color 02");
                     break;
                case 18:
                     Sleep(100);
                     system ("color 03");
                     break;
                case 19:
                     Sleep(100);
                     system ("color 04");
                     break;
                     
            }
            cout<<"##  ";
    }

    cout<<endl;

    ShowSlot();
    cout<<endl;
    
    for(int i=0;i<20;i++)
    {
            switch (i)
            {
                case 0:
                     Sleep(100);
                     system ("color 01");
                     break;
                case 1:
                     Sleep(100);
                     system ("color 02");
                     break;
                case 2:
                     Sleep(100);
                     system ("color 03");
                     break;
                case 3:
                     Sleep(100);
                     system ("color 04");
                     break;
                case 4:
                     Sleep(100);
                     system ("color 05");
                     break;
                case 5:
                     Sleep(100);
                     system ("color 06");
                     break;
                case 6:
                     Sleep(100);
                     system ("color 07");
                     break;
                case 7:
                     Sleep(100);
                     system ("color 08");
                     break;
                case 8:
                     Sleep(100);
                     system ("color 09");
                     break;
                case 9:
                     Sleep(100);
                     system ("color 0A");
                     break;
                case 10:
                     Sleep(100);
                     system ("color 0A");
                     break;
                case 11:
                     Sleep(100);
                     system ("color 0B");
                     break;
                case 12:
                     Sleep(100);
                     system ("color 0C");
                     break;
                case 13:
                     Sleep(100);
                     system ("color 0D");
                     break;
                case 14:
                     Sleep(100);
                     system ("color 0E");
                     break;
                case 15:
                     Sleep(100);
                     system ("color 0F");
                     break;
                case 16:
                     Sleep(100);
                     system ("color 01");
                     break;
                case 17:
                     Sleep(100);
                     system ("color 02");
                     break;
                case 18:
                     Sleep(100);
                     system ("color 03");
                     break;
                case 19:
                     Sleep(100);
                     system ("color 05");
                     break;
                     
            }
         
            cout<<"##  ";
    }
    Sleep (2000);
    cout<<endl;
    cout<<endl;
    system ("color F");
    
	srand(time(0));
	
	string inizializzazione="";
	int eta=0;
	
	int denaro=0;
	int puntata=0;
	int partita=0;
	int figura=0;
	char risposta;
	//figure
	int dollaro=0;
	int mela=0;
	int ciliegia=0;
	int anguria=0;
	//denaro iniziale
	int conta_partite=0,vittorie=0,perdite=0;
	do
	{
	cout<<"QUANTI ANNI HAI?"<<endl;
	cin>>eta;
	if(eta<18)
	{
              cout<<"ERRORE, DEVI ESSERE MAGGIORENNE!!"<<endl;
    }
    }
    while(eta<18);
    cout<<"SE HAI BISOGNO DI AIUTO DIGITA '/HELP' ALTIMENTI DIGITA 'GIOCA' "<<endl;
    cin>>inizializzazione;
    if(inizializzazione=="/help"||inizializzazione=="/HELP")
    {
                                 cout<<"VINCITE:"<<endl;
                                 cout<<"2 DOLLARI: VINCITA=PUNTATA*25"<<endl;
                                 cout<<"3 DOLLARI: VINCITA=PUNTATA*100"<<endl;
                                 cout<<"2 ANGURIE: VINCITA=PUNTATA*15"<<endl;
                                 cout<<"3 ANGURIE: VINCITA=PUNTATA*75"<<endl;
                                 cout<<"2 MELE: VINCITA=PUNTATA*10"<<endl;
                                 cout<<"3 MELE: VINCITA=PUNTATA*50"<<endl;
                                 cout<<"2 CILIEGIE: VINCITA=PUNTATA*5"<<endl;
                                 cout<<"3 CILIEGIE: VINCITA=PUNTATA*35"<<endl;
    }
	cout<<"QUANTI SOLDI HAI?"<<endl;
	cin>>denaro;
	do
	{
		do
		{
					cout<<"QUANTO PUNTI?"<<endl;
					cin>>puntata;
					if(puntata>denaro)
					{
						cout<<"ERRORE"<<endl;
					}
		}
		while(puntata>denaro||puntata<0);
		
		if(denaro<=0)
        {
                      PlaySound((LPCSTR)"I:\\informatica\\2^C L.S.A\\dev- c++\\GIOCHI\\slot machine\\morte.wav", NULL, SND_FILENAME | SND_ASYNC );
                     cout<<"HAI FINITO I SOLDI"<<endl;
                     cout<<"VAI A CASA"<<endl;
                     break;
        }
        
		//azzeramento dati partita precedente
        dollaro=0,mela=0,ciliegia=0,anguria=0;




		//tripla estrazione
		for(int estrazione=0;estrazione<3;estrazione++)
		{
            Sleep (1000);
			figura=rand()%4;
			switch(figura)
			{
				case 0:
					dollaro++;
					ShowDollaro();
                    cout<<endl;
                    cout<<endl;
					break;
				case 1:
					mela++;
					ShowMela();
                    cout<<endl;
                    cout<<endl;
					break;
				case 2:
					ciliegia++;
					ShowCiliegia();
                    cout<<endl;
                    cout<<endl;
					break;
				case 3:
					anguria++;
					ShowAnguria();
                    cout<<endl;
                    cout<<endl;
					break;
			}
			cout<<endl;
			cout<<endl;
			cout<<endl;
			
			
		}
		cout<<endl;
		selector(15|0);
		//controllo vittoria
		if(dollaro>=2)
		{
			switch(dollaro)
		{
			case 2:
				cout<<"HAI VINTO!!"<<endl;
				denaro+=puntata*25;
				vittorie++;
				break;
			case 3:
                 ShowJackpot();
                  PlaySound((LPCSTR)"I:\\informatica\\2^C L.S.A\\dev- c++\\GIOCHI\\slot machine\\vittoria.wav", NULL, SND_FILENAME | SND_ASYNC );
                  Sleep(10000);
                   PlaySound((LPCSTR)"I:\\informatica\\2^C L.S.A\\dev- c++\\GIOCHI\\slot machine\\Tom and Jerry at MGM - music performed live by the John Wilson Orchestra - 2013 BBC Proms.wav", NULL, SND_FILENAME | SND_ASYNC );
				cout<<"HAI STRAVINTO $$$ !!"<<endl;
				denaro+=puntata*100;
				vittorie++;
				break;
		}
		}
		else if(mela>=2)
		{
			switch(mela)
		{
			case 2:
				cout<<"HAI VINTO!!"<<endl;
				denaro+=puntata*10;
				vittorie++;
				break;
			case 3:
                 ShowJackpot();
                  PlaySound((LPCSTR)"I:\\informatica\\2^C L.S.A\\dev- c++\\GIOCHI\\slot machine\\vittoria.wav", NULL, SND_FILENAME | SND_ASYNC );
                  Sleep(10000);
                   PlaySound((LPCSTR)"I:\\informatica\\2^C L.S.A\\dev- c++\\GIOCHI\\slot machine\\Tom and Jerry at MGM - music performed live by the John Wilson Orchestra - 2013 BBC Proms.wav", NULL, SND_FILENAME | SND_ASYNC );
				cout<<"HAI STRAVINTO $$$ !!"<<endl;
				denaro+=puntata*50;
				vittorie++;
				break;
		}
		}
		else if(ciliegia>=2)
		{
			switch(ciliegia)
		{
			case 2:
				cout<<"HAI VINTO!!"<<endl;
				denaro+=puntata*15;
				vittorie++;
				break;
			case 3:
                 ShowJackpot();
                  PlaySound((LPCSTR)"I:\\informatica\\2^C L.S.A\\dev- c++\\GIOCHI\\slot machine\\vittoria.wav", NULL, SND_FILENAME | SND_ASYNC );
                  Sleep(10000);
                   PlaySound((LPCSTR)"I:\\informatica\\2^C L.S.A\\dev- c++\\GIOCHI\\slot machine\\Tom and Jerry at MGM - music performed live by the John Wilson Orchestra - 2013 BBC Proms.wav", NULL, SND_FILENAME | SND_ASYNC );
				cout<<"HAI STRAVINTO $$$ !!"<<endl;
				denaro+=puntata*75;
				vittorie++;
				break;
		}
		}
		else if(anguria>=2)
		{
			switch(anguria)
		{
			case 2:
				cout<<"HAI VINTO!!"<<endl;
				denaro+=puntata*5;
				vittorie++;
				break;
			case 3:
                 ShowJackpot();
                 PlaySound((LPCSTR)"I:\\informatica\\2^C L.S.A\\dev- c++\\GIOCHI\\slot machine\\vittoria.wav", NULL, SND_FILENAME | SND_ASYNC );
                 Sleep(10000);
                   PlaySound((LPCSTR)"I:\\informatica\\2^C L.S.A\\dev- c++\\GIOCHI\\slot machine\\Tom and Jerry at MGM - music performed live by the John Wilson Orchestra - 2013 BBC Proms.wav", NULL, SND_FILENAME | SND_ASYNC );
				cout<<"HAI STRAVINTO $$$ !!"<<endl;
				denaro+=puntata*35;
				vittorie++;
				break;
		}
		}
		else
		{
			cout<<"HAI PERSO"<<endl;
			denaro=denaro-puntata;
			perdite++;
		}
        
		cout<<"ORA HAI "<<denaro<<" $"<<endl;
		
        conta_partite++;
		cout<<"GIOCHI ANCORA?"<<endl;
		cin>>risposta;
	}
	while(risposta!='n'&&risposta!='N');
	int percentuale_vittorie=(100*vittorie)/conta_partite;
	int percentuale_perdite=(100*perdite)/conta_partite;
	cout<<"Le vittorie sono il "<<percentuale_vittorie<<"%"<<endl;
	cout<<"Le perdite sono il "<<percentuale_perdite<<"%"<<endl;
	cout<<"ORA HAI "<<denaro<<"$"<<endl;
	PlaySound((LPCSTR)"I:\\informatica\\2^C L.S.A\\dev- c++\\GIOCHI\\slot machine\\thank you for playng my game.wav", NULL, SND_FILENAME | SND_ASYNC );
	
	system("pause");
	return 0;
}
