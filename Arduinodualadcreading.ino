int xpin = A0;    // A0 pin is used for reading the x axis value
int ypin = A1;    // A1 pin is used for reading the y axis value

int xval=0;   //variable to store value of x
int yval=0;    //variableto store the value of y
int count=1;    // count variable
void setup() {
  Serial.begin(9600);   //initialise serial communication with a baudrate of 9600
}

/*
Arduino Daemulanove has only one Analog to Digital Converter . So, it's difficult to read two adc values simultaneously. So, for each run of the loop ,
we switch between channels to read adc values of x axis and y axis. 

CODE DONE BY : K.HARESH MIRIYALA
CODENAME     : THE BEARDED NINJA 
*/

void loop() {
                 
  if(count%2)    //if count is even
  {
    xval=analogRead(xpin);    //read x axis value
    delay(50);    //delay 50 ms
    Serial.print("X VAL : ");  
    Serial.print(xval);
    Serial.print("\t");
  }
  else
  {
    yval=analogRead(ypin);   //read y axis value
    delay(50);    //delay 50 ms
    Serial.print("Y VAL : ");
    Serial.print(yval);
    Serial.println();
  }
  delay(20);     //delay 20 ms
  count++;      // increase the value of count by 1
}
