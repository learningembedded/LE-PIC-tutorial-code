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
 int i;
 void main()
 {


    Lcd_Init(&PORTD);                 // Initialize LCD
    Lcd_Cmd(LCD_CLEAR);               // Clear display
    Lcd_Cmd(LCD_CURSOR_OFF);          // Cursor off
    Lcd_Out(1,2,"Learning");          // Print message
    Lcd_Out(2,2,"Embedded");
    delay_ms(300);

    do
    {                             // Infinite loop
        for(i=0; i<7; i++)
        {             // Move text to the Right
            Lcd_Cmd(LCD_SHIFT_RIGHT);
            delay_ms(300);
        }

        for(i=0; i<7; i++)
        {             // Move text to the Left
            Lcd_Cmd(LCD_SHIFT_LEFT);
            delay_ms(300);
        }
    }while(1);
 }
