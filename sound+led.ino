#define NOTE_C 131
#define NOTE_D 147
#define NOTE_E 165
#define NOTE_F 175
#define NOTE_G 196
#define NOTE_A 220
#define NOTE_B 247
#define NOTE_CC 262
#define NOTE_LF 70

int melody[]={
 NOTE_E,NOTE_D,NOTE_C,NOTE_D,NOTE_E,NOTE_G,
   NOTE_D,NOTE_E,NOTE_D,NOTE_LF,NOTE_C
};

int noteDurations[]={
  8,8,8,8,8,4,8,8,8,8,4
};

int ledStatus=0;
byte ledPin[6]={2,3,4,5,6,7};



void setup()
{
 for(byte i=0;i<6 ;i++)  pinMode(ledPin[i], OUTPUT);
 
}

void loop()
{
  for(int thisNote = 0; thisNote < 11; thisNote++){
   int noteDuration = 1000 / noteDurations[thisNote];
    tone(10, melody[thisNote], noteDuration);
    
    if(melody[thisNote] == NOTE_C){
      digitalWrite(ledPin[0],HIGH);
      ledStatus = ledPin[0]; 
      delay(noteDuration);
      digitalWrite(ledPin[0],LOW);
    }
    else if(melody[thisNote] == NOTE_D){
      digitalWrite(ledPin[1],HIGH);
      ledStatus = ledPin[1];
      delay(noteDuration);
      digitalWrite(ledPin[1],LOW);
    }  
    else if(melody[thisNote] == NOTE_E){
      digitalWrite(ledPin[2],HIGH);
      ledStatus = ledPin[2];
      delay(noteDuration);
      digitalWrite(ledPin[2],LOW);
    } 
    else if(melody[thisNote] == NOTE_F){
      digitalWrite(ledPin[3],HIGH);
      ledStatus = ledPin[3];
      delay(noteDuration);
      digitalWrite(ledPin[3],LOW);
    }   
    else if(melody[thisNote] == NOTE_G){
      digitalWrite(ledPin[4],HIGH);
      ledStatus = ledPin[4];   
      delay(noteDuration);
      digitalWrite(ledPin[4],LOW);
    } 
    else if(melody[thisNote] == NOTE_LF){
      digitalWrite(ledPin[5],HIGH);
      ledStatus = ledPin[5];   
      delay(noteDuration);
      digitalWrite(ledPin[5],LOW);
    }      
      
      
  
      
    int pauseBetweenNote = noteDuration*1.3;
    delay(pauseBetweenNote);
    noTone(10);    
 }
  delay(200);
}




