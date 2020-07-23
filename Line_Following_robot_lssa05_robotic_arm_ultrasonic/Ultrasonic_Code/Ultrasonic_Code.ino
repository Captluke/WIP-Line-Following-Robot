#include <NewPing.h>

//Define Ultrasonic pin
#define trigPin 2
#define echoPin 3
#define stop_distance 200

NewPing sonar(trigPin, echoPin, stop_distance);

int distance;
long duration;

void setup(){
  Serial.begin(115200); // Initialize serial with 9600bps

  //Declare Ultrasonic state
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop(){
detectobject();
}



void detectobject()
{
 Serial.print("Ping: ");
 distance = sonar.ping_cm();
 Serial.print(sonar.ping_cm()); 
 Serial.println("cm");

 
}

    
  
