// listing des entrГ©e-sorties
// entrГ©e-sorties numГ©riques
#define YELLOWLEDPIN 12
#define REDLEDPIN 11
#define GREENLEDPIN 10

const int tabLED[3]={GREENLEDPIN,REDLEDPIN,YELLOWLEDPIN};

// entrГ©es analogiques
#define POTPIN A0

// Г©lГ©ments pour le clavier
//   - include
#include <Keypad.h>
//   - nb de lignes et colonnes
const byte ROWS = 4;
const byte COLS = 4;
//   - dГ©finition des caractГЁres
char keys[ROWS][COLS] = {
  {'1','4','7','*'},
  {'2','5','8','0'},
  {'3','6','9','#'},
  {'A','B','C','D'}
};

//   - connection des lignes aux broches 
byte rowPins[ROWS] = {6,7,8,9};
//   - connection des colonnes aux broches 
byte colPins[COLS] = {2,3,4,5};

//   - creation du clavier (objet de type Keypad)
Keypad clavier = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );


void setup(){
  
  clavier.setHoldTime(40);
  clavier.setDebounceTime(100);
  
  // dГ©finition du mode pour les DELs
  pinMode(YELLOWLEDPIN,OUTPUT);
  pinMode(REDLEDPIN,OUTPUT);
  pinMode(GREENLEDPIN,OUTPUT);
  
  // dГ©finition du mode pour le potentiometre
  pinMode(POTPIN,INPUT);


  // test initial: on allume tout, on attend 2s, on Г©teint tout, on attent 2s avant de passer dans la fonction loop
  digitalWrite(YELLOWLEDPIN,HIGH);
  digitalWrite(REDLEDPIN,HIGH);
  digitalWrite(GREENLEDPIN,HIGH);
  delay(2000);
  
  digitalWrite(YELLOWLEDPIN,LOW);
  digitalWrite(REDLEDPIN,LOW);
  digitalWrite(GREENLEDPIN,LOW);
  delay(2000);
}


void loop(){
  
  delay(200);
}


