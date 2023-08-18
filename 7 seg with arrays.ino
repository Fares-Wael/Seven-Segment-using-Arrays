int display[10][7]={
  {1,1,1,1,1,1,0},
  {0,1,1,0,0,0,0},
  {1,1,0,1,1,0,1},
  {1,1,1,1,0,0,1},
  {0,1,1,0,0,1,1},
  {1,0,1,1,0,1,1},
  {1,0,1,1,1,1,1},
  {1,1,1,0,0,0,0},
  {1,1,1,1,1,1,1},
  {1,1,1,1,0,1,1},  
};
byte segPins[7]={3,4,5,6,7,8,9};
byte a=segPins[0];
byte b=segPins[1];
byte c=segPins[2];
byte d=segPins[3];
byte e=segPins[4];
byte f=segPins[5];
byte g=segPins[6];
void setup()
{
  for (int i=3;i<=sizeof(segPins);i++){
    pinMode(segPins[i],OUTPUT);
  }
}

void loop()
{
  for( int i=0;i<10;i++){
  for( int j=0;j<7;j++){
digitalWrite(segPins[j],display[i][j]);
  }
    delay(1000);
  }
}