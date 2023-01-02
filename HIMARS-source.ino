//High Mobility Anti-Reckless System (HIMARS)
//Version 1.0 Build 12/15/22
//Automated traffic light

//variables
  int greenLight = 10;
  int yellowLight = 11;
  int redLight = 12;
  int buzzer = 13;

//IMPORTANT NOTE: PIN 0 - 9 ARE USED FOR 7 SEGMENT DISPLAY
//PLEASE REFER TO THE DOCUMENTATION REGARDS TO PINOUTS.

void setup() {
  //For LED light
   pinMode(greenLight, OUTPUT) ;
   pinMode(yellowLight, OUTPUT) ;
   pinMode(redLight, OUTPUT) ;

  //For Buzzer
   pinMode(buzzer, OUTPUT) ;

  //For the 7 segment display
   pinMode (0, OUTPUT) ;
   pinMode (1, OUTPUT) ;
   pinMode (2, OUTPUT) ;
   pinMode (3, OUTPUT) ;
   pinMode (4, OUTPUT) ;
   pinMode (5, OUTPUT) ;
   pinMode (6, OUTPUT) ;
   pinMode (7, OUTPUT) ;
   pinMode (8, OUTPUT) ;
   pinMode (9, OUTPUT) ;

}

void loop() {
  //7 segment display - reset
    digitalWrite (0, 1) ;
    digitalWrite (1, 1) ;
    digitalWrite (2, 1) ;
    digitalWrite (3, 1) ;
    digitalWrite (4, 1) ;
    digitalWrite (5, 1) ;
    digitalWrite (6, 1) ;
    digitalWrite (7, 1) ;
    digitalWrite (8, 1) ;
    digitalWrite (9, 1) ;
  
  //greenLight
  digitalWrite(greenLight, HIGH) ;
    //10
        //seg-10
          digitalWrite (0, 0) ;
          digitalWrite (1, 0) ;
          digitalWrite (2, 0) ;
          digitalWrite (3, 0) ;
          digitalWrite (4, 1) ;
          digitalWrite (5, 0) ;
          digitalWrite (6, 0) ;
          digitalWrite (7, 0) ;
          digitalWrite (8, 0) ;
          digitalWrite (9, 0) ;
          
            //Buzzer
            tone(buzzer, 500);
              delay(500);
              noTone(buzzer);
              delay(500);

    //9
      //seg-9
        //9
          digitalWrite (0, 0) ;
          digitalWrite (1, 0) ;
          digitalWrite (2, 0) ;
          digitalWrite (3, 0) ;
          digitalWrite (4, 0) ;
          digitalWrite (5, 0) ;
          digitalWrite (6, 1) ;
          digitalWrite (7, 1) ;
          digitalWrite (8, 1) ;
          digitalWrite (9, 1) ;
            //Buzzer
            tone(buzzer, 500);
              delay(500);
              noTone(buzzer);
              delay(500);
      
    //8
      //seg-8
        //8
          digitalWrite (0, 0) ;
          digitalWrite (1, 0) ;
          digitalWrite (2, 0) ;
          digitalWrite (3, 0) ;
          digitalWrite (4, 0) ;
          digitalWrite (5, 0) ;
          digitalWrite (6, 0) ;
          digitalWrite (7, 0) ;
          digitalWrite (8, 1) ;
          digitalWrite (9, 1) ;
            //Buzzer
            tone(buzzer, 500);
              delay(500);
              noTone(buzzer);
              delay(500);

      //7
        //seg-7
          //7
            digitalWrite (0, 1) ;
            digitalWrite (1, 0) ;
            digitalWrite (2, 0) ;
            digitalWrite (3, 0) ;
            digitalWrite (4, 1) ;
            digitalWrite (5, 1) ;
            digitalWrite (6, 1) ;
            digitalWrite (7, 1) ;
            digitalWrite (8, 1) ;
            digitalWrite (9, 1) ;
              //Buzzer
              tone(buzzer, 500);
                delay(500);
                noTone(buzzer);
                delay(500);

      //6
        //seg-6
          //6
            digitalWrite (0, 0) ;
            digitalWrite (1, 0) ;
            digitalWrite (2, 1) ;
            digitalWrite (3, 0) ;
            digitalWrite (4, 0) ;
            digitalWrite (5, 0) ;
            digitalWrite (6, 0) ;
            digitalWrite (7, 0) ;
            digitalWrite (8, 1) ;
            digitalWrite (9, 1) ;
              //Buzzer
                tone(buzzer, 500);
                  delay(500);
                  noTone(buzzer);
                  delay(500);

      //5
        //seg-5
          //5
            digitalWrite (0, 0) ;
            digitalWrite (1, 0) ;
            digitalWrite (2, 1) ;
            digitalWrite (3, 0) ;
            digitalWrite (4, 0) ;
            digitalWrite (5, 0) ;
            digitalWrite (6, 1) ;
            digitalWrite (7, 1) ;
            digitalWrite (8, 1) ;
            digitalWrite (9, 1) ;
              //Buzzer
                tone(buzzer, 500);
                  delay(500);
                  noTone(buzzer);
                  delay(500);

      //4
        //seg-4
          //4
            digitalWrite (0, 0) ;
            digitalWrite (1, 1) ;
            digitalWrite (2, 0) ;
            digitalWrite (3, 0) ;
            digitalWrite (4, 0) ;
            digitalWrite (5, 1) ;
            digitalWrite (6, 1) ;
            digitalWrite (7, 0) ;
            digitalWrite (8, 1) ;
            digitalWrite (9, 1) ;
              //Buzzer
                tone(buzzer, 500);
                  delay(500);
                  noTone(buzzer);
                  delay(500);

      //3
        //seg-3
          //3
            digitalWrite (0, 1) ;
            digitalWrite (1, 0) ;
            digitalWrite (2, 0) ;
            digitalWrite (3, 0) ;
            digitalWrite (4, 0) ;
            digitalWrite (5, 0) ;
            digitalWrite (6, 1) ;
            digitalWrite (7, 1) ;
            digitalWrite (8, 1) ;
            digitalWrite (9, 1) ;
              //Buzzer
                tone(buzzer, 500);
                  delay(500);
                  noTone(buzzer);
                  delay(500);

      //2
        //seg-2
          //2
            digitalWrite (0, 1) ;
            digitalWrite (1, 0) ;
            digitalWrite (2, 0) ;
            digitalWrite (3, 1) ;
            digitalWrite (4, 0) ;
            digitalWrite (5, 0) ;
            digitalWrite (6, 0) ;
            digitalWrite (7, 0) ;
            digitalWrite (8, 1) ;
            digitalWrite (9, 1) ;
              //Buzzer
                tone(buzzer, 500);
                  delay(500);
                  noTone(buzzer);
                  delay(500);

      //1
        //seg-1
          //1
            digitalWrite (0, 1) ;
            digitalWrite (1, 1) ;
            digitalWrite (2, 0) ;
            digitalWrite (3, 0) ;
            digitalWrite (4, 1) ;
            digitalWrite (5, 1) ;
            digitalWrite (6, 1) ;
            digitalWrite (7, 1) ;
            digitalWrite (8, 1) ;
            digitalWrite (9, 1) ;
              //Buzzer
                tone(buzzer, 500);
                  delay(500);
                  noTone(buzzer);
                  delay(500);
                
  digitalWrite(greenLight, LOW) ;

  //7 segment display - reset
    digitalWrite (0, 1) ;
    digitalWrite (1, 1) ;
    digitalWrite (2, 1) ;
    digitalWrite (3, 1) ;
    digitalWrite (4, 1) ;
    digitalWrite (5, 1) ;
    digitalWrite (6, 1) ;
    digitalWrite (7, 1) ;
    digitalWrite (8, 1) ;
    digitalWrite (9, 1) ;


  //yellowLight
    digitalWrite(yellowLight, HIGH);
      //3
        //seg-3
          //3
            digitalWrite (0, 1) ;
            digitalWrite (1, 0) ;
            digitalWrite (2, 0) ;
            digitalWrite (3, 0) ;
            digitalWrite (4, 0) ;
            digitalWrite (5, 0) ;
            digitalWrite (6, 1) ;
            digitalWrite (7, 1) ;
            digitalWrite (8, 1) ;
            digitalWrite (9, 1) ;
              //Buzzer
                tone(buzzer, 1000);
                  delay(500);
                  noTone(buzzer);
                  delay(500);

      //2
        //seg-2
          //2
            digitalWrite (0, 1) ;
            digitalWrite (1, 0) ;
            digitalWrite (2, 0) ;
            digitalWrite (3, 1) ;
            digitalWrite (4, 0) ;
            digitalWrite (5, 0) ;
            digitalWrite (6, 0) ;
            digitalWrite (7, 0) ;
            digitalWrite (8, 1) ;
            digitalWrite (9, 1) ;
              //Buzzer
                tone(buzzer, 1000);
                  delay(500);
                  noTone(buzzer);
                  delay(500);

      //1
        //seg-1
          //1
            digitalWrite (0, 1) ;
            digitalWrite (1, 1) ;
            digitalWrite (2, 0) ;
            digitalWrite (3, 0) ;
            digitalWrite (4, 1) ;
            digitalWrite (5, 1) ;
            digitalWrite (6, 1) ;
            digitalWrite (7, 1) ;
            digitalWrite (8, 1) ;
            digitalWrite (9, 1) ;
              //Buzzer
                tone(buzzer, 1000);
                  delay(500);
                  noTone(buzzer);
                  delay(500);

     digitalWrite(yellowLight, LOW);  

  //7 segment display - reset
    digitalWrite (0, 1) ;
    digitalWrite (1, 1) ;
    digitalWrite (2, 1) ;
    digitalWrite (3, 1) ;
    digitalWrite (4, 1) ;
    digitalWrite (5, 1) ;
    digitalWrite (6, 1) ;
    digitalWrite (7, 1) ;
    digitalWrite (8, 1) ;
    digitalWrite (9, 1) ;


  //redLight
    digitalWrite(redLight, HIGH) ;
      //10
          //seg-10
            digitalWrite (0, 0) ;
            digitalWrite (1, 0) ;
            digitalWrite (2, 0) ;
            digitalWrite (3, 0) ;
            digitalWrite (4, 1) ;
            digitalWrite (5, 0) ;
            digitalWrite (6, 0) ;
            digitalWrite (7, 0) ;
            digitalWrite (8, 0) ;
            digitalWrite (9, 0) ;
            delay(1000);

      //9
        //seg-9
          //9
            digitalWrite (0, 0) ;
            digitalWrite (1, 0) ;
            digitalWrite (2, 0) ;
            digitalWrite (3, 0) ;
            digitalWrite (4, 0) ;
            digitalWrite (5, 0) ;
            digitalWrite (6, 1) ;
            digitalWrite (7, 1) ;
            digitalWrite (8, 1) ;
            digitalWrite (9, 1) ;
            delay(1000);

        
      //8
        //seg-8
          //8
            digitalWrite (0, 0) ;
            digitalWrite (1, 0) ;
            digitalWrite (2, 0) ;
            digitalWrite (3, 0) ;
            digitalWrite (4, 0) ;
            digitalWrite (5, 0) ;
            digitalWrite (6, 0) ;
            digitalWrite (7, 0) ;
            digitalWrite (8, 1) ;
            digitalWrite (9, 1) ;
            delay(1000);


        //7
          //seg-7
            //7
              digitalWrite (0, 1) ;
              digitalWrite (1, 0) ;
              digitalWrite (2, 0) ;
              digitalWrite (3, 0) ;
              digitalWrite (4, 1) ;
              digitalWrite (5, 1) ;
              digitalWrite (6, 1) ;
              digitalWrite (7, 1) ;
              digitalWrite (8, 1) ;
              digitalWrite (9, 1) ;
              delay(1000);


        //6
          //seg-6
            //6
              digitalWrite (0, 0) ;
              digitalWrite (1, 0) ;
              digitalWrite (2, 1) ;
              digitalWrite (3, 0) ;
              digitalWrite (4, 0) ;
              digitalWrite (5, 0) ;
              digitalWrite (6, 0) ;
              digitalWrite (7, 0) ;
              digitalWrite (8, 1) ;
              digitalWrite (9, 1) ;
              delay(1000);


        //5
          //seg-5
            //5
              digitalWrite (0, 0) ;
              digitalWrite (1, 0) ;
              digitalWrite (2, 1) ;
              digitalWrite (3, 0) ;
              digitalWrite (4, 0) ;
              digitalWrite (5, 0) ;
              digitalWrite (6, 1) ;
              digitalWrite (7, 1) ;
              digitalWrite (8, 1) ;
              digitalWrite (9, 1) ;
              delay(1000);


        //4
          //seg-4
            //4
              digitalWrite (0, 0) ;
              digitalWrite (1, 1) ;
              digitalWrite (2, 0) ;
              digitalWrite (3, 0) ;
              digitalWrite (4, 0) ;
              digitalWrite (5, 1) ;
              digitalWrite (6, 1) ;
              digitalWrite (7, 0) ;
              digitalWrite (8, 1) ;
              digitalWrite (9, 1) ;
              delay(1000);


        //3
          //seg-3
            //3
              digitalWrite (0, 1) ;
              digitalWrite (1, 0) ;
              digitalWrite (2, 0) ;
              digitalWrite (3, 0) ;
              digitalWrite (4, 0) ;
              digitalWrite (5, 0) ;
              digitalWrite (6, 1) ;
              digitalWrite (7, 1) ;
              digitalWrite (8, 1) ;
              digitalWrite (9, 1) ;
              delay(1000);


        //2
          //seg-2
            //2
              digitalWrite (0, 1) ;
              digitalWrite (1, 0) ;
              digitalWrite (2, 0) ;
              digitalWrite (3, 1) ;
              digitalWrite (4, 0) ;
              digitalWrite (5, 0) ;
              digitalWrite (6, 0) ;
              digitalWrite (7, 0) ;
              digitalWrite (8, 1) ;
              digitalWrite (9, 1) ;
              delay(1000);


        //1
          //seg-1
            //1
              digitalWrite (0, 1) ;
              digitalWrite (1, 1) ;
              digitalWrite (2, 0) ;
              digitalWrite (3, 0) ;
              digitalWrite (4, 1) ;
              digitalWrite (5, 1) ;
              digitalWrite (6, 1) ;
              digitalWrite (7, 1) ;
              digitalWrite (8, 1) ;
              digitalWrite (9, 1) ;
              delay(1000);

                  
    digitalWrite(redLight, LOW) ;

    //7 segment display - reset
      digitalWrite (0, 1) ;
      digitalWrite (1, 1) ;
      digitalWrite (2, 1) ;
      digitalWrite (3, 1) ;
      digitalWrite (4, 1) ;
      digitalWrite (5, 1) ;
      digitalWrite (6, 1) ;
      digitalWrite (7, 1) ;
      digitalWrite (8, 1) ;
      digitalWrite (9, 1) ;

      //yellowLight
        digitalWrite(yellowLight, HIGH);
          //3
            //seg-3
              //3
                digitalWrite (0, 1) ;
                digitalWrite (1, 0) ;
                digitalWrite (2, 0) ;
                digitalWrite (3, 0) ;
                digitalWrite (4, 0) ;
                digitalWrite (5, 0) ;
                digitalWrite (6, 1) ;
                digitalWrite (7, 1) ;
                digitalWrite (8, 1) ;
                digitalWrite (9, 1) ;
                  //Buzzer
                    tone(buzzer, 1000);
                      delay(500);
                      noTone(buzzer);
                      delay(500);

          //2
            //seg-2
              //2
                digitalWrite (0, 1) ;
                digitalWrite (1, 0) ;
                digitalWrite (2, 0) ;
                digitalWrite (3, 1) ;
                digitalWrite (4, 0) ;
                digitalWrite (5, 0) ;
                digitalWrite (6, 0) ;
                digitalWrite (7, 0) ;
                digitalWrite (8, 1) ;
                digitalWrite (9, 1) ;
                  //Buzzer
                    tone(buzzer, 1000);
                      delay(500);
                      noTone(buzzer);
                      delay(500);

          //1
            //seg-1
              //1
                digitalWrite (0, 1) ;
                digitalWrite (1, 1) ;
                digitalWrite (2, 0) ;
                digitalWrite (3, 0) ;
                digitalWrite (4, 1) ;
                digitalWrite (5, 1) ;
                digitalWrite (6, 1) ;
                digitalWrite (7, 1) ;
                digitalWrite (8, 1) ;
                digitalWrite (9, 1) ;
                  //Buzzer
                    tone(buzzer, 1000);
                      delay(500);
                      noTone(buzzer);
                      delay(500);

        digitalWrite(yellowLight, LOW);  

      //7 segment display - reset
        digitalWrite (0, 1) ;
        digitalWrite (1, 1) ;
        digitalWrite (2, 1) ;
        digitalWrite (3, 1) ;
        digitalWrite (4, 1) ;
        digitalWrite (5, 1) ;
        digitalWrite (6, 1) ;
        digitalWrite (7, 1) ;
        digitalWrite (8, 1) ;
        digitalWrite (9, 1) ;

  //END
  
//High Mobility Anti-Reckless System (HIMARS)
//Version 1.0 Build 12/15/22
//Automated traffic light
  }
