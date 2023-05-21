/*
About Playlist.c: It is a school project that I made for "BLM1012 Introduction To Procedural Programming" class back in 2020. 
Containing 55 different songs, 6 different moods and 4 scales. It gives user a 13 songs playlist based on the moods and scales.
*/


#include<stdio.h>

int main()
{
	int songs[55][7]={{5,4,3,1,1,3,2},{6,2,4,2,1,2,0},{7,2,1,3,1,3,4},{8,3,1,4,1,3,2},{9,2,2,1,4,1,1},{10,1,4,1,1,1},{11,3,1,2,1,1,1},{12,3,1,1,1,2,4},{13,3,2,1,4,1,1},{14,3,1,3,1,4,4},{15,1,4,1,1,2,3},{16,1,4,1,1,1,3},{17,4,12,1,3,4,},{18,4,1,3,1,1,3},{19,2,2,3,4,1,1},{20,4,1,1,1,2,3},{21,3,1,3,2,2,4},{22,4,1,3,1,4,4},{23,4,3,3,2,4,1},{24,2,3,1,1,1,2},{25,2,1,2,1,3,4},{26,3,2,1,4,1,1},{27,1,4,1,1,1,2},{28,4,1,2,4,2,2},{29,3,1,1,1,4,1},{30,2,4,1,1,3,1},{31,4,1,2,1,4,4},{32,2,4,1,1,1,1},{33,3,2,1,1,1,3},{34,2,4,2,2,1,3},{35,2,4,1,1,3,1},{36,3,3,3,2,1,1},{37,4,1,1,1,3,2},{38,3,1,3,1,2,4},{39,2,4,1,1,1,2},{40,3,2,1,2,2,3},{41,4,1,3,1,2,4},{42,4,1,4,1,4,3},{43,3,3,1,2,4,2},{44,1,4,1,1,3,1},{45,4,1,1,1,4,4},{46,1,1,1,1,1,1},{47,1,4,1,2,1,1},{48,1,4,1,1,2,2},{49,2,4,2,1,4,3},{50,1,4,1,1,3,3},{51,4,1,4,1,1,4},{52,1,4,1,1,2,1},{53,3,2,1,1,4,3},{54,2,3,1,1,4,3},{55,4,1,4,1,1,3},{56,2,3,2,1,1,3}};
	int oylama[6]; 
	int i, j, neredeyse[214],k=0, m;
	
	for(m=0;m<214;m++){
		neredeyse[m]=0;}
		
		printf("\n Made by Fatmanur Bas \n 19.06.2020\n");
	
	printf("\n Mini playlist is ready to work!\n");
	
	
	printf("\nFrom 1 to 4, how much do you want... \n");
	
	printf("\na song that makes you smile / feel better?\n");
	scanf("%d",&oylama[1]);
	printf("\na song that makes you cry / feel emotional?\n");
	scanf("%d",&oylama[2]);
	printf("\na song that remind you of summer?\n");
	scanf("%d",&oylama[3]);
	printf("\nan instrumental song?\n");
	scanf("%d",&oylama[4]);
	printf("\na song about being young?\n");
	scanf("%d",&oylama[5]);
	printf("\na song to drive?\n");
	scanf("%d",&oylama[6]);
	
	
	for(i=1;i<6;i++){
		for(j=0;j<60;j++){
			if(oylama[i]==songs[j][i]){ //oylamadaki özelliklerin değeri(1,2,3 yada 4 oyları hangi şarkılarınkilerle tutarlı)
				neredeyse[k]=songs[j][0]; //tutarlı şarkıların numarasını ayrı bir dizide saklıyorum
				k=k+1;
			} 
		} 
	}
	for(i=0;i<k-1;i++){
		for(j=i+1;j<k+1;j++){
			if(neredeyse[i]==neredeyse[j]){
		for(m=j+1;m<k+2;m++){
			neredeyse[j]=neredeyse[m]; //aynı şarkı birden fazla kez yazılmış olabilir fazlalıkları sildim
		}  }  } 
	}
	
	printf("\n ...HERE IS YOUR PLAYLIST...\n");
		for(m=0;m<14;m++){ //önerileri maximum 13 şarkı ile sınırlandırdım
		switch(neredeyse[m]){
//şarkı önerisinde bulunan herkese teşekkür ediyorum		
			case 5:
				printf("From  Zero by Monsta X\n");
				break;
			case 6:
				printf("Don't Wanna Cry by Seventeen\n");
				break;
			case 7:
				printf("Bring It by Hoshi & Woozi\n");
				break;
			case 8:
				printf("Very Nice by Seventeen\n");
				break;			
			case 9:
				printf("Adagietto by Mahler\n");
				break;
			case 10:
				printf("Uso by SID\n");
				break;
			case 11:
				printf("Daisies by Katty Perry\n");
				break;
			case 12:
				printf("Natural by Imagine Dragons\n");
				break;
			case 13:
				printf("Kreutzer Sonata by Beethoven\n");
				break;	
			case 14:
				printf("Ongshimi by Joohoney & Minhyuk\n");
				break;				
			case 15:
				printf("You Were Beautiful by Day6\n");
				break;				
			case 16:
				printf("Bir Harmanim Bu Aksam by Bora Duran\n");
				break;	
			case 17:
				printf("Believer by Imagine Dragons\n");
				break;				
			case 18:
				printf("Only Human by Jonas Brothers\n");
				break;				
			case 19:
				printf("Nocturne op.9 no.2 by Chopin\n");
				break;
			case 20:
				printf("Battaniyem by Multitap\n");
				break;				
			case 21:
				printf("Piri by Dreamcatcher\n");
				break;				
			case 22:
				printf("Gone Days by Stray Kids\n");
				break;
			case 23:
				printf("9-Teen by Seventeen\n");
				break;				
			case 24:
				printf("Let's Love by Suho\n");
				break;				
			case 25:
				printf("Need to Know by Elhae & I.M\n");
				break;
			case 26:
				printf("Pavane Op.50 by Gabriel Foure\n");
				break;				
			case 27:
				printf("Mutlu Yillar by Cem Adrian\n");
				break;				
			case 28:
				printf("Abusey Junction by Kokoroko\n");
				break;		
			case 29:
				printf("No More Dream by BTS\n"); 
				break;
			case 30:
				printf("Six Degrees of Seperation by The Script\n"); 
				break;
			case 31:
				printf("Blue Bird by Ikimonogakari\n"); 
				break;
			case 32:
				printf("Paris in the Rain by Lauv\n");
				break;
			case 33:
				printf("Painkiller by Ruel\n");
				break;
			case 34:
				printf("Strangers by Before You Exit\n"); 
				break;
			case 35:
				printf("Tired by Nlve\n"); 
				break;
			case 36:
				printf("Summer by Keshi\n"); 
				break;					
			case 37:
				printf("Top by Stray Kids\n"); 
				break;	
			case 38:
				printf("You and I by Dreamcatcher\n");
				break;
			case 39:
				printf("Stay by Khalid\n");
				break;
			case 40:
				printf("Love Story by Indila\n");
				break;
			case 41:
				printf("Snow by Red Hot Chilli Peppers\n");
				break;
			case 42:
				printf("MyMy by Seventeen\n");
				break;	
			case 43:
				printf("Another Day by Stray Kids\n");
				break;
			case 44:
				printf("Don't Want to Acknowledge by Bang Chan\n");
				break;
			case 45:
				printf("Neol Hada by WonMinHyun\n");
				break;
			case 46:
				printf("Left & Right by Seventeen\n");
				break;
			case 47:
				printf("Love Poem by IU\n");
				break;
			case 48:
				printf("Istemem Soz Sevmeni by Ferman Akgul\n"); 
				break;
			case 49:
				printf("Someone's Someone by Monsta X\n");
				break;		
			case 50:
				printf("Memories by Maroon 5\n"); 
				break;
			case 51:
				printf("Onigiri by Jerskin Fendrick\n");
				break;
			case 52:
				printf("Everglow by Coldplay\n"); 
				break;
			case 53:
				printf("Walking the Wire by Imagine Dragons\n");
				break;
			case 54:
				printf("Changes by Lauv\n");
				break;
			case 55:
				printf("Magnetic by Sebastian Yatra\n");
				break;	
			case 56:
			    printf("Don't Look Back by Prep\n");	
				break;																																						
		} 		
		} 		
		printf("\nBonus Track: \n Hit by Seventeen \n");
	printf("\n Made by Fatmanur Bas \n 19.06.2020");


	return 0;
}
