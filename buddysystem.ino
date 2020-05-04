  
int led1 = D7;

void setup() {
    
    pinMode(led1, OUTPUT);
    
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", Handler);

    digitalWrite(led1, LOW);            //set inbuilt led to low//set inbuilt led to low
}


void Handler(const char *event, const char *data) {

    if(strcmp(data,"wave")==0) {
    
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(500);
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(500);
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    }
    
    else if (strcmp(data,"pat")==0) {
       
    digitalWrite(led1, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    
    }

}
    

void loop() {
    

}
