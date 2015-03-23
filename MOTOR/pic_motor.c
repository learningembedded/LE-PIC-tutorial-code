/*
 Author: LearningEmbedded.com
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this code and associated documentation files , to use, copy, modify, merge,
 publish, distribute when you agree to the following conditions:
 Attribution — You must give appropriate credit, provide a link to the license, 
               and indicate if changes were made. You may do so in any reasonable
               manner, but not in any way that suggests the licensor endorses you 
               or your use.
 No additional restrictions — You may not apply legal terms or technological 
                               measures that legally restrict others from doing
                               anything the license permits.
*/

// http://learningembedded.com / 
 void main()
 {
  TRISB.F0=1;      //input toggle pins use control the motor
  TRISB.F1=1;      //input toggle pins use control the motor
  TRISC=0;         // Set PORTC as output
  PORTB=0;         // Set PORTB = 0
  PORTC=0;         // Set PORTC = 0
  while(1)         // infinite loop
  {
         if(PORTB.F0==1 && PORTB.F1==0)
         {     // when input 1 is high and input 2 is low ,we move the motor forward
               PORTC.F0=1;  //when in1 and in2 are of different polarity then only motor 1 moves
               PORTC.F1=0;
               PORTC.F2=1;  //enable1 is used to switch on the input pins in1 and in2
               PORTC.F3=1;  //enable2 is used to switch on the input pins in3 and in4
               PORTC.F4=1;  //when in3 and in4 are of different polarity then only motor 2 moves
               PORTC.F5=0;
         }
         else if(PORTB.F0==0 && PORTB.F1==1)
         {     // when input 2 is high and input 1 is low ,we move the motor backwards
               PORTC.F0=0;  //when in1 and in2 are of different polarity then only motor 1 moves
               PORTC.F1=1;
               PORTC.F2=1;  //enable1 is used to switch on the input pins in1 and in2
               PORTC.F3=1;  //enable2 is used to switch on the input pins in3 and in4
               PORTC.F4=0;  //when in3 and in4 are of different polarity then only motor 2 moves
               PORTC.F5=1;
         }
         else
         {     //In all other condition ,the motor shouldnt move
               PORTC.F2=0;
               PORTC.F3=0;
         }

  }
  }
  
  
