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
 unsigned short i;   //
 char str[5];
 void main()        // Main Function
 {
  TRISC=0b11110000; // Set PORTC 's last four pins as INPUT and first four pins as Output
  TRISD=0;          // Set PORTD as output
  PORTC=0;          // initialize PORTC =0
  PORTC.F0=1;       // change PORTC pin 0 as 1
  PORTC.F1=1;       // change PORTC pin 1 as 1
  PORTC.F2=1;       // change PORTC pin 2 as 1
  Lcd_INIT(&PORTD) ;// LCD initialize
  LCD_OUT(1,1,"LearningEmbedded"); // Display message
  Lcd_cmd(LCD_CURSOR_OFF);         // Cursof off
  delay_ms(2000);                  // 2 seconds delay
  Lcd_cmd(LCD_CLEAR);              //  clear LCD
  LCD_OUT(1,1,"Press a Key");     // Display message

  Delay_ms(500);                  // delay of 500 miliseconds
  while(1)
  {
         PORTC.F0=1;    // Sending 1 through PORTC pin 0  to find 1,4,7,* buttons
         PORTC.F1=0;    //  Keep Pin 1 and Pin 2 of PORTC 0 while doing so
         PORTC.F2=0;

         if(PORTC.F0&&PORTC.F4==1)
         {  // code for printing 1
            LCD_OUT(2,2,"1");
            DELAY_MS(200);
         }
         else if(PORTC.F0&&PORTC.F5==1)
         {  // code for printing 4
            LCD_OUT(2,2,"4");
            DELAY_MS(200);
         }
         else if(PORTC.F0&&PORTC.F6==1)
         {  // code for printing 7
            LCD_OUT(2,2,"7");
            DELAY_MS(200);
         }
         else if(PORTC.F0&&PORTC.F7==1)
         {  // code for printing *
            LCD_OUT(2,2,"*");
            DELAY_MS(200);
         }
         PORTC.F0=0;       //  Keep Pin 0 and Pin 2 of PORTC 0 while checking for 2,5,8,0 buttons
         PORTC.F1=1;       // Sending 1 through PORTC pin 1  to find 2,5,8,0 buttons
         PORTC.F2=0;

         if(PORTC.F1&&PORTC.F4==1)
         {   // code for printing 2
            LCD_OUT(2,2,"2");
            DELAY_MS(200);
         }
         else if(PORTC.F1&&PORTC.F5==1)
         {  // code for printing 5
            LCD_OUT(2,2,"5");
            DELAY_MS(200);
         }
         else if(PORTC.F1&&PORTC.F6==1)
         {  // code for printing  8
            LCD_OUT(2,2,"8");
            DELAY_MS(200);
         }
         else if(PORTC.F1&&PORTC.F7==1)
         {  // code for printing 0
            LCD_OUT(2,2,"0");
            DELAY_MS(200);
         }
         PORTC.F0=0;       //  Keep Pin 0 and Pin 1 of PORTC 0 while checking for 3,6,9,# buttons
         PORTC.F1=0;
         PORTC.F2=1;       // Sending 1 through PORTC pin 2  to find 3,6,9,# buttons

         if(PORTC.F2&&PORTC.F4==1)
         {  // code for printing 3
            LCD_OUT(2,2,"3");
            DELAY_MS(200);
         }
         else if(PORTC.F2&&PORTC.F5==1)
         { // code for printing 6
            LCD_OUT(2,2,"6");
            DELAY_MS(200);
         }
         else if(PORTC.F2&&PORTC.F6==1)
         { // code for printing 9
            LCD_OUT(2,2,"9");
            DELAY_MS(200);
         }
         else if(PORTC.F2&&PORTC.F7==1)
         { // code for printing #
            LCD_OUT(2,2,"#");
            DELAY_MS(200);
         }


   }

  }
