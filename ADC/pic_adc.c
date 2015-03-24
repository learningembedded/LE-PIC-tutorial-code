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
      unsigned long Vin;        // Variable to read ADC value
      unsigned char op[12];     // Variable to convert ADC value to string type
      ADCON1=0x80;              //  Changes all PORTA and PORTE as Analog Input (check ADCON1 register )
      TRISA=1;                  // Set PORTA as INPUT
      TRISD=0;                  // Set PORTD as Output
      Lcd_Init(&PORTD);         // Initialize LCD on PORTB
      Lcd_Cmd(LCD_CLEAR);       // Clear display
      Lcd_Cmd(LCD_CURSOR_OFF);  // Cursor off
      Lcd_Out(1,1,"LearningEmbedded");// Display message
      Delay_ms(2000);                // Delay of 2 sec
      Lcd_Cmd(LCD_CLEAR);           // Clear screen
      while(1)                     // Ininite Loop
      {
       Vin = Adc_Read(0);        // Read Analog value on pin AN0
       LongToStr(Vin,op);       //convert to string in "op"  because LCD only reads string type and not interger type
       Lcd_Out(1,2,op);        // display on LCD
       }
  }
