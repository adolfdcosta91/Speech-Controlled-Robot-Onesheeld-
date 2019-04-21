#include <VoiceRecognitionShield.h>


#define CUSTOM_SETTINGS
#define INCLUDE_VOICE_RECOGNIZER_SHIELD

#include <OneSheeld.h>

/* Voice commands set by the user. */

const char stopCommand[] = "stop";
const char leftCommand[] = "left";
const char rightCommand[] = "right";
const char frontCommand[] = "front";
const char backCommand[] = "back";

/* Initilization of the pins  */
int Pin0M1 = 6;
int Pin1M1 = 7;
int Pin2M2 = 8;
int Pin3M2 = 9;
int Pin4M3 = 10;
int Pin5M3 = 11;
int Pin6M4 = 12;
int Pin7M4 = 13;

void setup()
{
  /* Defining the State of the pins Output or Input  */
  OneSheeld.begin();

   pinMode(Pin0M1,OUTPUT);
   pinMode(Pin1M1,OUTPUT);
   pinMode(Pin2M2,OUTPUT);
   pinMode(Pin3M2,OUTPUT);
   pinMode(Pin4M3,OUTPUT);
   pinMode(Pin5M3,OUTPUT);
   pinMode(Pin6M4,OUTPUT);
   pinMode(Pin7M4,OUTPUT);
}

void loop () 
{
	
  /* Check if new command received. */
  if(VoiceRecognition.isNewCommandReceived())
  {
		digitalWrite(Pin0M1,LOW);
		digitalWrite(Pin1M1,LOW);
		digitalWrite(Pin2M2,LOW);
		digitalWrite(Pin3M2,LOW);
		digitalWrite(Pin4M3,LOW);
		digitalWrite(Pin5M3,LOW);
		digitalWrite(Pin6M4,LOW);
		digitalWrite(Pin7M4,LOW);
   //intitilzation of the pins
    /* Compare the combination command. */
	
	/* Compares the command if it is front with the one recived on the smartphone from user */
    if (!strcmp(frontCommand,VoiceRecognition.getLastCommand()))
    {
		digitalWrite(Pin0M1,HIGH);
		digitalWrite(Pin1M1,LOW);
		digitalWrite(Pin2M2,HIGH);
		digitalWrite(Pin3M2,LOW);
		digitalWrite(Pin4M3,HIGH);
		digitalWrite(Pin5M3,LOW);
		digitalWrite(Pin6M4,HIGH);
		digitalWrite(Pin7M4,LOW);
		delay(2000);     /* Sets a delay of 2 seconds */
		/* Re initializing the pins*/
		digitalWrite(Pin0M1,LOW);
		digitalWrite(Pin1M1,LOW);
		digitalWrite(Pin2M2,LOW);
		digitalWrite(Pin3M2,LOW);
		digitalWrite(Pin4M3,LOW);
		digitalWrite(Pin5M3,LOW);
		digitalWrite(Pin6M4,LOW);
		digitalWrite(Pin7M4,LOW);
    }
    /* Compares the command if it is back with the one recived on the smartphone from user */
    if (!strcmp(backCommand,VoiceRecognition.getLastCommand()))
    {
		digitalWrite(Pin0M1,LOW);
		digitalWrite(Pin1M1,HIGH);
		digitalWrite(Pin2M2,LOW);
		digitalWrite(Pin3M2,HIGH);
		digitalWrite(Pin4M3,LOW);
		digitalWrite(Pin5M3,HIGH);
		digitalWrite(Pin6M4,LOW);
		digitalWrite(Pin7M4,HIGH);
		delay(2000);      /* Sets a delay of 2 seconds */
		/* Re initializing the pins*/
		digitalWrite(Pin0M1,LOW);
		digitalWrite(Pin1M1,LOW);
		digitalWrite(Pin2M2,LOW);
		digitalWrite(Pin3M2,LOW);
		digitalWrite(Pin4M3,LOW);
		digitalWrite(Pin5M3,LOW);
		digitalWrite(Pin6M4,LOW);
		digitalWrite(Pin7M4,LOW);
    }
     /* Compares the command if it is right with the one recived on the smartphone from user */
    if (!strcmp(rightCommand,VoiceRecognition.getLastCommand()))
    {
		digitalWrite(Pin0M1,HIGH);
		digitalWrite(Pin1M1,LOW);
		digitalWrite(Pin2M2,LOW);
		digitalWrite(Pin3M2,HIGH);
		digitalWrite(Pin4M3,HIGH);
		digitalWrite(Pin5M3,LOW);
		digitalWrite(Pin6M4,LOW);
		digitalWrite(Pin7M4,HIGH);
		delay(2000);     
		 /* Re initializing the pins*/
		digitalWrite(Pin0M1,LOW);
		digitalWrite(Pin1M1,LOW);
		digitalWrite(Pin2M2,LOW);
		digitalWrite(Pin3M2,LOW);
		digitalWrite(Pin4M3,LOW);
		digitalWrite(Pin5M3,LOW);
		digitalWrite(Pin6M4,LOW);
		digitalWrite(Pin7M4,LOW);
    }
    /* Compares the command if it is left with the one recived on the smartphone from user */
    if (!strcmp(leftCommand,VoiceRecognition.getLastCommand()))
    {
		digitalWrite(Pin0M1,LOW);
		digitalWrite(Pin1M1,HIGH);
		digitalWrite(Pin2M2,HIGH);
		digitalWrite(Pin3M2,LOW);
		digitalWrite(Pin4M3,LOW);
		digitalWrite(Pin5M3,HIGH);
		digitalWrite(Pin6M4,HIGH);
		digitalWrite(Pin7M4,LOW);
		delay(2000);       /* Sets a delay of 2 seconds */
		/* Re initializing the pins*/
		digitalWrite(Pin0M1,LOW);
		digitalWrite(Pin1M1,LOW);
		digitalWrite(Pin2M2,LOW);
		digitalWrite(Pin3M2,LOW);
		digitalWrite(Pin4M3,LOW);
		digitalWrite(Pin5M3,LOW);
		digitalWrite(Pin6M4,LOW);
		digitalWrite(Pin7M4,LOW);
    }
	/* Compares the command if it is stop with the one recived on the smartphone from user */
    else if (!strcmp(stopCommand,VoiceRecognition.getLastCommand()))
    {
  
		digitalWrite(Pin0M1,LOW);
		digitalWrite(Pin1M1,LOW);
		digitalWrite(Pin2M2,LOW);
		digitalWrite(Pin3M2,LOW);
		digitalWrite(Pin4M3,LOW);
		digitalWrite(Pin5M3,LOW);
		digitalWrite(Pin6M4,LOW);
		digitalWrite(Pin7M4,LOW);
  }
}
}
