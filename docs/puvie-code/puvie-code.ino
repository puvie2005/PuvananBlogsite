#include <Servo.h> 
Servo doorServo;
Servo handServo;

int switch_pin = 2;               //set switch on pin 2
int pos = 0;
int selectedMove = 0;             //move selector
int Testmove = 0;                 //test mode: set to move number to test only one selected move 
                                  //(set to Zero to run normally i.e: roundrobbin on amm moves)
void setup()
{
  Serial.begin(9600);
  pinMode(switch_pin, INPUT);
  doorServo.attach(9);           //set door servo on Pin 9 pwm
  handServo.attach(10);          //set hand servo on Pin 10 pwm
  doorServo.write(0);           //set door to hiding position 
  handServo.write(0);            //set hand to hiding position  
}


void loop()
{
if (Testmove != 0) {
selectedMove = Testmove;
}
  
  //if the switch is on, then move door and hand to switch it off...
  if(digitalRead(switch_pin) == HIGH)
  {
    
  if (selectedMove > 10) { selectedMove = 0; } //when all moves are played, repeat the moves from beginning 
  
  if (selectedMove == 0) { switchoff(); }
  else if (selectedMove == 1) { switchoff(); }   
  else if (selectedMove == 2) { crazydoor(); }
  else if (selectedMove == 3) { switchoff(); }
  else if (selectedMove == 4) { crazyslow(); }
  else if (selectedMove == 5) { matrix(); }
   
  if (Testmove == 0) {
  selectedMove++;         //swith to next move if not in test mode
  }

}
}



// Library of moves

    // basic move 1
   void switchoff() 
   {    
//Moving door
    for(pos = 0; pos < 60; pos += 3)   
    {                                   
    doorServo.write(pos);              
    delay(15);                       
    }
   
    //Moving hand
    for(pos = 130; pos >= 10; pos -= 4)  
    {                                   
    handServo.write(pos);               
    delay(15);                       
    }  
    
    //hiding hand
    for(pos = 10; pos<130; pos+=4)      
    {                                
    handServo.write(pos);               
    delay(15);                        
    } 
      
    //hiding door
    for(pos = 60; pos>=0; pos-=3)     
    {                                
    doorServo.write(pos);              
    delay(25);                      
    } 
   }    
  
  
  //move 3: open door then close it many times, wait, then quickly reoprn a nd switch off and hide.
  
   void crazydoor()
  {
     //Moving door
    for(pos = 0; pos < 60; pos += 3)   
    {                                   
    doorServo.write(pos);              
    delay(15);                       
    }
    delay(800); 
    //Moving hand
    for(pos = 130; pos >= 80; pos -= 4)
    {                                   
    handServo.write(pos);               
    delay(15);                       
    }
    delay(1000); 
    for(pos = 80; pos >= 50; pos -= 4)  
    {                                   
    handServo.write(pos);               
    delay(15);                       
    }    
    
    //hiding hand
    for(pos = 50; pos<130; pos+=4)      
    {                                
    handServo.write(pos);               
    delay(15);                        
    } 
      
    //hiding door
    for(pos = 60; pos>=0; pos-=3)     
    {                                
    doorServo.write(pos);              
    delay(25);                 
    } 
   }    
  

  // move 4: open door, then move hand very slowly forward and back to hiding very slowly, then quickly close door
 void crazyslow()
 {
 //Moving door
    for(pos = 0; pos < 60; pos += 1)   
    {                                   
    doorServo.write(pos);              
    delay(30);                       
    }
   
    //Moving hand
    for(pos = 130; pos >= 10; pos -=1)  
    {                                   
    handServo.write(pos);               
    delay(30);                       
    }  
    
    //hiding hand
    for(pos = 10; pos<130; pos+=1)      
    {                                
    handServo.write(pos);               
    delay(30);                        
    } 
      
    //hiding door
    for(pos = 60; pos>=30; pos-=0.5)     
    {                                
    doorServo.write(pos);              
    delay(30);                      
    }
    delay(500);
    for(pos = 20; pos>=0; pos-=4)     
    {                                
    doorServo.write(pos);              
    delay(15);                      
    }    
 }
 void matrix()
 {
   //Moving door
     for(pos = 0; pos < 60; pos += 3)   
    {                                   
    doorServo.write(pos);              
    delay(15);                       
    }
   
    //Moving hand
    for(pos = 130; pos >= 90; pos -= 4)  
    {                                   
    handServo.write(pos);               
    delay(15);                       
    }
    
    for(pos = 90; pos >= 50; pos -= 1)  
    {                                   
    handServo.write(pos);               
    delay(30);                       
    }  
    delay(300);
    
    for(pos = 55; pos<130; pos+=4)      
    {                                
    handServo.write(pos);               
    delay(10);                        
    } 
      
    //hiding door
    for(pos = 60; pos>=0; pos-=3)     
    {                                
    doorServo.write(pos);              
    delay(25);                                      
    } 
 }
